class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, int> mp;
        vector<vector<string>> arr;
        
        for(int i = 0; i < strs.size(); i++) {
            
            string ss = strs[i];
            sort(ss.begin(), ss.end());
            
            if(mp.find(ss) != mp.end()) {
                int index = mp[ss];
                arr[index].push_back(strs[i]);
            }
            else {
                mp[ss] = arr.size();          
                arr.push_back({strs[i]});      
            }
        }
        
        return arr;
    }
};
