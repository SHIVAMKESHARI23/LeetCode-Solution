class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        struct E { 
            int t, type, id; 
            string msg; 
        };
        vector<E> v;

        for (auto &e : events) {
            int t = stoi(e[1]);
            if (e[0] == "OFFLINE")
                v.push_back({t, 0, stoi(e[2]), ""});
            else
                v.push_back({t, 1, -1, e[2]});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if (a.t != b.t) return a.t < b.t;
            return a.type < b.type;
        });

        vector<int> off(numberOfUsers, -1), ans(numberOfUsers, 0);

        for (auto &e : v) {
            for (int i = 0; i < numberOfUsers; i++)
                if (off[i] != -1 && off[i] <= e.t)
                    off[i] = -1;

            if (e.type == 0) {
                off[e.id] = e.t + 60;
                continue;
            }

            string s = e.msg;
            if (s == "ALL") {
                for (int i = 0; i < numberOfUsers; i++) ans[i]++;
            } 
            else if (s == "HERE") {
                for (int i = 0; i < numberOfUsers; i++)
                    if (off[i] == -1) ans[i]++;
            } 
            else {
                stringstream ss(s);
                string x;
                while (ss >> x) {
                    int id = stoi(x.substr(2));
                    ans[id]++;
                }
            }
        }

        return ans;
    }
};
