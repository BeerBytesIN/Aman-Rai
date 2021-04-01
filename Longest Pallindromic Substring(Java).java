class Solution {
    public String longestPalindrome(String s) {
        
        int i , j, len = s.length();
        boolean dp[][] = new boolean[len][len];
        int lenMax = 1, startMax = 0;
        for(i = 0; i < len ; i++)
            dp[i][i] = true;
        
        for(i = 0; i < len - 1; i++)
        {
            if(s.charAt(i) == s.charAt(i + 1))
            {  lenMax = 2;startMax = i;
                dp[i][i + 1] = true;
            }
            else
                dp[i][i + 1] = false;
        }
        
        for(i = 3; i <= len; i++)
        {
            for(j = 0 ; j < len; j++)
            {
                int k = j + i - 1;
                if(k < len && dp[j + 1][k - 1] == true && s.charAt(j) == s.charAt(k))
                {
                    lenMax = i;
                    startMax = j;
                    dp[j][k] = true;
                }
            }
        }
        return s.substring(startMax, startMax + lenMax);
        
    }
}