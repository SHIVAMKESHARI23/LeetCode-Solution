#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string curr = "";
        
        for (int i = 0; i <= path.size(); i++) {
            // when we hit '/' or end of string → process token
            if (i == path.size() || path[i] == '/') {
                
                if (curr == "..") {
                    if (!st.empty()) st.pop();
                }
                else if (curr != "" && curr != ".") {
                    st.push(curr);
                }
                
                curr = ""; // reset
            } 
            else {
                curr += path[i];
            }
        }

        // build answer
        string ans = "";
        vector<string> temp;
        
        while (!st.empty()) {
            temp.push_back(st.top());
            st.pop();
        }
        
        reverse(temp.begin(), temp.end());
        
        for (auto &dir : temp) {
            ans += "/" + dir;
        }
        
        return ans.empty() ? "/" : ans;
    }
};