    int minDistance(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();
        vector<vector<int>> dp(l1+1, vector<int> (l2+1,0));
        int i=0,j=0;
        for(i=0;i<=l1;i++){
            for(j=0;j<=l2;j++){
                if(i==0)dp[i][j]=j;
                else if(j==0)dp[i][j]=i;
                else if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
        
        return dp[l1][l2];
    }
