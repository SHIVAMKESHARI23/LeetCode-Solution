class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
       unordered_map<char,char>arr;
        unordered_map<char,char>arr2;
       for(int i=0;i<s.length();i++){
        if(arr.find(s[i])!=arr.end()){
            if(arr.at(s[i])!=t[i]){
                return false;
            }
        }
        else if(arr2.find(t[i])!=arr2.end()){
            if(arr2[t[i]]!=s[i]){
                return false;
            }
        }

        else{
            arr.emplace(s[i],t[i]);
            arr2.emplace(t[i],s[i]);
        }

       }
       return true;
        

    }
};