class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> arr(n);          
        stack<int> st;               

        for(int i = n - 1; i >= 0; i--) {
            int curr = temperatures[i];

            while(!st.empty() && curr >= temperatures[st.top()]) {
                st.pop();
            }

            if(st.empty())
                arr[i] = 0;
            else
                arr[i] = st.top() - i;

            st.push(i);
        }

        return arr;
    }
};
