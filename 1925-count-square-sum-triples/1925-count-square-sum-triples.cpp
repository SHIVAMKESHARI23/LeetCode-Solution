class Solution {
public:
    int countTriples(int n) {
     set<int>arr;
     for(int i=1;i<=n;i++){
        arr.insert(i*i);

     } 
     int count=0;
     for(int i:arr){
        int sum=i;
        for(int j:arr){
            sum+=j;
            if(arr.count(sum)){
                count++;
            }
            sum-=j;
        }
     } 
     return count; 
    }
};