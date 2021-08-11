#include<bits/stdc++.h>
using namespace std;

int potion_max(int *arr,int n){
	vector<vector<int>> dp( n , vector<int> (n, 0));
        int sum=0,k=0;
        for(int i=0;i<n;i++)
        {
        	sum+=arr[i];
        	for(int j=0;j<=i;j++)
        	{
        		if(i==0)dp[i][j]=arr[0];
        		else if(j==0)dp[i][j]=max(dp[i-1][j],arr[i]);
        		else if(j==i)dp[i][j]=sum;
                else{
                	dp[i][j]=max(dp[i-1][j-1]+arr[i],dp[i-1][j]);    
                }

             if(dp[i][j]>=0) 
                	k=max(k,j);

        	}

        }

       return (k+1);
}

int main()
{


        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

        int n=0;
        cin>>n;
        int arr[n]={1,-4,4,-3,1,-3};
        cout<<potion_max(arr,n);
 
        return 0;
    }