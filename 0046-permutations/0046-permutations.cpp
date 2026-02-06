class Solution {
public:
    
    vector<int> nextper(vector<int>& arr){
        int index = -1;

        // Step 1: find pivot index
        for(int i = arr.size() - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                index = i;
                break;
            }
        }

        // Step 2: if no pivot found → reverse whole array
        if(index == -1){
            reverse(arr.begin(), arr.end());
            return arr;
        }

        // Step 3: find next greater element from right
        for(int i = arr.size() - 1; i > index; i--){
            if(arr[i] > arr[index]){
                swap(arr[i], arr[index]);
                break;
            }
        }

        // Step 4: reverse right half
        reverse(arr.begin() + index + 1, arr.end());

        return arr;
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        int n = nums.size();

        // total permutations = n!
        int pro = 1;
        for(int i = 1; i <= n; i++){
            pro *= i;
        }

        ans.push_back(nums);   // push original permutation first

        for(int i = 1; i < pro; i++){
            nums = nextper(nums);
            ans.push_back(nums);
        }

        return ans;
    }
};
