class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxcount=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                count++;
                maxcount=max(count,maxcount);

            }
            else if(s[i]==')'){
                count--;
            }
            i++;
            


        }
        return maxcount;
    }
};