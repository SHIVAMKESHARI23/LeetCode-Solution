class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        int index=0;
        int i=0;
        string ans="";
        while(index<s.size()){
            ans+=s[(i+1)%s.size()];
            i++;
            if(i==s.size()){
                if(ans==goal){
                    return true;
                }
                
                    s=ans;
                    ans="";

                    i=0;
                    index++;

                }


        }
        return false;
    }
};