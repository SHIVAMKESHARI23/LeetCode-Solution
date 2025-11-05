class Solution {
    public boolean isAnagram(String s, String t) {
        char [] mess=s.toCharArray();
        char [] mess2=t.toCharArray();
        Arrays.sort(mess);
        Arrays.sort(mess2);
        boolean tr=false;
        if(mess.length==mess2.length){
        for(int i=0;i<mess.length;i++){
            if(mess[i]==mess2[i]){
                tr=true;
                
            }
            else{
                tr=false;
                break;
            }
        }


        }
        return tr;
    }
}