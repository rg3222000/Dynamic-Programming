#include<bits/stdc++.h>
using namespace std;
int main()
{


        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif
        
        int n=0;
        cin>>n;
        //int dp[4][4]={[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]};
        vector<vector<int>> dp(n,vector <int> (n,0));
        //int arr[n][]={{1,2,3},{4,5,6},{7,8,9}};
        vector<vector<int>> arr(n,vector<int> (n,0));
        for(int i=0;i<n;i++){
        	for(int j=0;j<n;j++){
        		cin>>arr[i][j];
        	}
        }
        //building the dp
        for(int i=0;i<n;i++){
        	for(int j=0;j<n;j++){
        		if(i==0&&j==0)dp[i][j]=arr[i][j];
        		else if(i==0)dp[i][j]=dp[i][j-1]+arr[i][j];
                else if(j==0)dp[i][j]=dp[i-1][j]+arr[i][j];
                else{
                	dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+arr[i][j];
                }
        	}
    
        } 
          
        for(int i=0;i<n;i++){
        	for(int j=0;j<n;j++){
        		cout<<dp[i][j]<<" ";
        	}
        	cout<<"\n";
        }
   //cout<<dp[n-1][n-1];

   return 0;
}