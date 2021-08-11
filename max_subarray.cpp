    int maxSubArray(vector<int>& nums) {
        int i,sum=0,cap=INT_MIN;
        int n=nums.size();
        vector<int> dp(n+1,0);
        //dp[0]=nums[0];
        for(i=n-1;i>=0;i--){
            dp[i]=nums[i]+max(dp[i+1],0);
            cap=max(dp[i],cap);
        }
        return (nums.size()==1)?nums[0]:cap;
    }
