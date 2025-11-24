class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long sum=0;
        while(n>0){
            long long r=(n%10);
            if(r!=0){
                ans=ans*10+r;
                sum+=r;
                
            }
            n/=10;
        }
        string str=to_string(ans);
        reverse(str.begin(),str.end());
        ans=stoll(str);
        return ans*sum;
    }
};