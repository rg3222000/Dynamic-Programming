 long long int dp[300][5001];
    int vis[300][5001];
    long long int x=0;
    long long int fast_ways(int sum,unsigned int pos,vector<int>& v)
{
        if(sum==0)
        {
          return 1;
        }
        if(pos==v.size() && sum!=0)
        {
          return 0;
        }
        if(sum<0)
        {
            return 0;
        }
        long long int &ans=dp[pos][sum];
        if(vis[pos][sum])return ans; 
          
          vis[pos][sum]=1,ans=0;
           ans=fast_ways(sum,pos+1,v)+fast_ways(sum-v[pos],pos,v);
        return ans;
}
