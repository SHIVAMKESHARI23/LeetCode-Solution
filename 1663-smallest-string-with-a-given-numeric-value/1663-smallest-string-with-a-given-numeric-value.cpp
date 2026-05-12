class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        // int sum=0;
        k=k-n;
        int i;
        i=n-1;
        while(k>25){
            
            ans[i]+=25;
            k-=25;
            i--;
        }
        ans[i]+=k;
        return ans;
       
    }
};