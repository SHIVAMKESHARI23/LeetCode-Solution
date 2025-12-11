class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& nums) {
        int count = 0;
        unordered_map<int, vector<int>> rowMap, colMap;

        for (auto &it : nums) {
            rowMap[it[0]].push_back(it[1]);
            colMap[it[1]].push_back(it[0]);
        }

        for (auto &r : rowMap) sort(r.second.begin(), r.second.end());
        for (auto &c : colMap) sort(c.second.begin(), c.second.end());

        for (int i = 0; i < nums.size(); i++) {
            int row = nums[i][0];
            int col = nums[i][1];
            int count2 = 0;

            auto &rList = rowMap[row];
            auto it = upper_bound(rList.begin(), rList.end(), col);
            if (it != rList.end()) count2++;
            it = lower_bound(rList.begin(), rList.end(), col);
            if (it != rList.begin()) count2++;

            auto &cList = colMap[col];
            it = upper_bound(cList.begin(), cList.end(), row);
            if (it != cList.end()) count2++;
            it = lower_bound(cList.begin(), cList.end(), row);
            if (it != cList.begin()) count2++;

            if (count2 == 4) count++;
        }

        return count;
    }
};
