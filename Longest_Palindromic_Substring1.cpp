    string longestPalindrome(string s) {
        int n=s.length(),p=0,q=0,max1=0;
     vector<vector<int>> dp(n,vector<int>(n,0));
        
    for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
               if(i==j)
               {
                   dp[i][j]=1;
               }
               if(j-i==1)
               {
                   if(s[i]==s[j])
                   {
                       dp[i][j]=2;
                   }
                   else
                   {
                       dp[i][j]=0;
                   }
               }
                if(j-i==2)
                {
                  if(s[i]==s[j]&&dp[i+1][j-1])
                   {
                       dp[i][j]=3;
                   }
                   else
                   {
                       dp[i][j]=0;
                   }
                }
            }
    }
        
     for(int k=0;k<50;k++)
     {
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(i!=j&&j-i!=1)
                {
                  dp[i][j]=(s[i]==s[j]&&dp[i+1][j-1]!=0)?dp[i+1][j-1]+2:0;
                }
                
            }
        }
     }
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<n;j++)
            {
                if(max1<dp[i][j])
                {
                    max1=dp[i][j];
                    p=i;
                    q=j;
                }
            }
        }
       
        return s.substr(p,q-p+1);
    }
