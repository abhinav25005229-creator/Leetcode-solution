class Solution {
    public int lengthOfLastWord(String s) {
       
        s=s.trim();int count=0;
        
         int n= s.length();
         if(n==1)return 1;
        for(int i=n-1; i>=0; i--){
           
            if(s.charAt(i)==' ')break;
             count++;
        }
        return count;
    }
}