class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0;
        int count2=0;
        int finalcount=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                count++;
            }
            else{
                count2++;
            }
            if(count==count2){
                finalcount++;
                count=count2=0;
            }
        }
        return finalcount;
    }
};