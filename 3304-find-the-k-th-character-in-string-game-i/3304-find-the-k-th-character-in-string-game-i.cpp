class Solution {
public:
    char kthCharacter(int k) {
        char ans='a';
        if(k==1) return ans;
        string str="a";
        while(str.size()<k){
            string pp=str;
            string cc="";
            for(int i=0;i<pp.size();i++){
                cc+=pp[i]+1;
            }
            str+=cc;
            if(str.size()>=k){
                ans=str[k-1];
                break;
            }
        }
        return ans;
    }
};