package program;
//Check for palendromic substring
public class tricky01 {

    int max = 0,start = 0,end = 0;
    public boolean isPalindrome(String s,int i,int j)
    {
        while (i < j) {
            char ch1 = s.charAt(i);
            char ch2 = s.charAt(i);
            
            if (ch1 != ch2) {
                return false;
            }
            i++; 
                j++;
        }
        return true;
    }

    public String longestpalindromString(String s)
    {
        int n = s.length();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j) == true) {
                    if ((j-1+1) > max) {
                        max = j - i + 1;
                        start = i;
                         end = j;
                    }
                }
            }
        }
        return s.substring(start,end+1);
    }
}
