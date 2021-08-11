string longestPalindrome(string s) {
        int n=s.length(),p=0,q=0,max1=0;
        
        if(n==1) return s;
        if(n==2) return s[0]==s[1]?s:s.substr(0,1);
        
     vector<vector<int>> dp(n,vector<int>(n,0));
        
    for(int i=0;i<s.length();i++)
        {
             dp[i][i]=1;
             max1=1;
        }
    for(int i=0;i<s.length()-1;i++)
        {
             if(s[i]==s[i+1])
             {
                 dp[i][i+1]=2;
                 max1=2;
                 p=i;
                 q=i+1;
             }
        }
        for(int i=3;i<=n;i++)
        {
            for(int j=0;j<n-i+1;j++)
            {
                  int k=j+i-1;
                  dp[j][k]=(s[j]==s[k]&&dp[j+1][k-1]!=0)?i:0;
                  if(max1<dp[j][k])
                  {
                      max1=dp[j][k];
                      p=j;
                      q=k;
                  }
            }
    
        }
    
        return s.substr(p,q-p+1);
    }
