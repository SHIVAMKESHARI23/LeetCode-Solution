class Solution {
public:
    int countPrimes(int n) {
        vector<bool>checknum(n,true);
        if(n<=2)return 0;
        checknum[0]=false;
        checknum[1]=false;

        for(int i=2;i*i<n;i++){

            for(int j=i*i;j<n;j+=i){
               
            checknum[j]=false;
                
            }


        }
        int count=0;
        for(int i=0;i<n;i++){
            if(checknum[i])count++;
        }
        return count;
    }
};