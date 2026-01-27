class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

        }
        int left=0;
        // int j=0;
        // sum-=nums[0];
    
        for(int i=0;i<nums.size();i++){
            if(i>0){
            left+=nums[i-1];

            }
            sum-=nums[i];

            cout<<left<<" "<<sum<<" "<<endl;
            if(sum==left)
            {
                return i;
            }
            


        }
        return -1;
    }
};