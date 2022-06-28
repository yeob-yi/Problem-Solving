class Solution {
    public boolean isPalindrome(int x) {
        String xToString = String.valueOf(x);
        int len = xToString.length();
        for(int i=0; i<(len/2); i++){
            if(xToString.charAt(i)!=xToString.charAt(len-1-i)) return false;
        }
        return true;
    }
}