class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr(n, 0);

    long long pro = 1;
    int zeroCount = 0;

    // Step 1: Calculate product and count zeros
    for(int i = 0; i < n; i++){
        if(nums[i] == 0)
            zeroCount++;
        else
            pro *= nums[i];
    }

    // Step 2: Build answer
    for(int i = 0; i < n; i++){
        if(zeroCount > 1){
            arr[i] = 0;
        }
        else if(zeroCount == 1){
            arr[i] = (nums[i] == 0 ? pro : 0);
        }
        else{
            arr[i] = pro / nums[i];
        }
    }

    return arr;
}

};