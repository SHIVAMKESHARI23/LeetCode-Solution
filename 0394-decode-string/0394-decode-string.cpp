class Solution {
public:
    string decodeString(string s) {
        string curr="";
        stack<int>numstack;
        int num=0;
        stack<string>st;
        for(char c:s){
            if(isdigit(c)){
                num=num*10+(c-'0');
            }   
            else if(c=='['){
                numstack.push(num);
                st.push(curr);
                num=0;
                curr="";
            }
            else if(c==']'){
                int repeat=numstack.top();
                numstack.pop();
                string temp=curr;
                for(int i=1;i<repeat;i++){
                    curr+=temp;
                }
                curr=st.top()+curr;
                st.pop();
            }
            else{
                curr+=c;
            }
        }
        return curr;
    }
};