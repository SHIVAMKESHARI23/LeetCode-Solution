class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        string s = "123456789";

        for (int len = 2; len <= 9; len++) {
            for (int i = 0; i + len <= 9; i++) {
                int x = stoi(s.substr(i, len));

                if (x >= low && x <= high) {
                    arr.push_back(x);
                }
            }
        }

        return arr;
    }
};