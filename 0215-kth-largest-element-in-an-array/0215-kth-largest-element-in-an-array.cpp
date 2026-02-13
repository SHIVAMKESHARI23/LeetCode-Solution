class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int> arr;

        
        for(int i = 0; i < nums.size(); i++) {
            arr[nums[i]]++;
        }


        for(auto it = arr.rbegin(); it != arr.rend(); ++it) {
            
            k -= it->second;   
            
            if(k <= 0) {
                return it->first;
            }
        }

        return -1; 
    }
};
