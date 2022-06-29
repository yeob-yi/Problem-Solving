class Solution {
    public int romanToInt(String s) {
        char[] symbols = new char[]{'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int[] values = new int[]{1, 5, 10, 50, 100, 500, 1000};
        char ch, nextCh;
        int idx, nextIdx;
        int result = 0;
        boolean contains;
        
        for(int i=0; i<s.length()-1; i++){
            ch = s.charAt(i);
            contains = false;
            for(int j=0; j<symbols.length; j++){
                if(ch == symbols.get(j)){
                    contains = true;
                    break;
                }
            }
            if(contains){
                idx = symbols.indexOf(ch);
                if(i!=s.length()-1 && (idx==0 || idx==2 || idx==4)){
                    nextCh = s.charAt(i+1);
                    nextIdx = s.indexOf(nextCh);
                    if(nextIdx==idx+1 || nextIdx==idx+2) {
                        result += values.get(nextIdx)-values.get(idx);
                        i++;
                        continue;
                    }
                }
                result += values.get(idx);
            }
        }
        
    }
}