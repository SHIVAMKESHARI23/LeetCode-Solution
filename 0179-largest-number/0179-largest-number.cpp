class Solution {
public:
        static bool mycom(string str1,string str2){
            return str1+str2>str2+str1;
        }
    string largestNumber(vector<int>& nums) {
        string res="";
        vector<string>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(to_string(nums[i]));
        }

        sort(arr.begin(),arr.end(),mycom);
        for(auto&i:arr){
            res+=i;
        }
         if (res[0] == '0')
            return "0";
        return res;
    }
};