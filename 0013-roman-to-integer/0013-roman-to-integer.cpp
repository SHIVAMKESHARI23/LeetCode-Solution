class Solution {
public:
    int romanToInt(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V' && i+1<s.size()){
                    count+=4;
                    i++;
                }
                else if(s[i+1]=='X' && i+1<s.size()){
                    count+=9;
                    i++;
                }
                else{
                    count+=1;
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L' && i+1<s.size()){
                    count+=40;
                    i++;
                }
                else if(s[i+1]=='C' && i+1<s.size()){
                    count+=90;
                    i++;
                }
                else{
                    count+=10;
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D' && i+1<s.size()){
                    count+=400;
                    i++;
                }
                else if(s[i+1]=='M' && i+1<s.size()){
                    count+=900;
                    i++;
                }
                else{
                    count+=1000;
                }
            }
            else if(s[i]=='V'){
                count+=5;
            }
            else if(s[i]=='L'){
                count+=50;
            }
            else if(s[i]=='D'){
                count+=500;
            }
            else{
                count+=1000;
            }

            


        }
        return count;
    }
};