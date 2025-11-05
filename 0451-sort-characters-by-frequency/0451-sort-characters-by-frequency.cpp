class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>arr;
        for(int i=0;i<s.size();i++){
            arr[s[i]]++;
        }
        string str="";
        vector<pair<char,int>>arr2(arr.begin(),arr.end());

        sort(arr2.begin(),arr2.end(),[](auto & a,auto &b){

            return a.second>b.second;
        });
        for(auto & p:arr2){
            int i=0;
            while(i<p.second){
                str+=p.first;
                i++;
            }
            
        }
        return str;
    }
};