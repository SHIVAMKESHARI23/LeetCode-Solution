class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>freq(26,0);
        queue<pair<char,int>>qu;

        for(int i=0;i<s.size();i++){
            qu.push({s[i],i});
            freq[s[i]-'a']++;
            
            while(!qu.empty() && freq[qu.front().first-'a']>1){
                qu.pop();
            }
            
        }

    if(qu.empty())return -1;
    return qu.front().second;
    }
};