class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<int> parent(n);
        iota(parent.begin(), parent.end(), 0);

        function<int(int)> find = [&](int x) {
            if (parent[x] != x) parent[x] = find(parent[x]);
            return parent[x];
        };

        auto unite = [&](int a, int b) {
            a = find(a);
            b = find(b);
            if (a != b) parent[b] = a;
        };

        unite(0, firstPerson);

        sort(meetings.begin(), meetings.end(), [](auto &a, auto &b) {
            return a[2] < b[2];
        });

        int i = 0;
        while (i < meetings.size()) {
            int time = meetings[i][2];
            vector<pair<int,int>> cur;
            int j = i;

            while (j < meetings.size() && meetings[j][2] == time) {
                unite(meetings[j][0], meetings[j][1]);
                cur.push_back({meetings[j][0], meetings[j][1]});
                j++;
            }

            for (auto &p : cur) {
                if (find(p.first) != find(0)) parent[p.first] = p.first;
                if (find(p.second) != find(0)) parent[p.second] = p.second;
            }

            i = j;
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (find(i) == find(0)) ans.push_back(i);
        }
        return ans;
    }
};
