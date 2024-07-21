 

int helper(vector<int>& price,int n,vector<int>& dp){

    if(n==1){

        return price[0];

    }

    if(n==0){

        return 0;

    }

    if(dp[n] != -1){

        return dp[n];

    }

    int ans = 0;

    for(int i = 1; i<=n; i++){

        ans = max(ans,price[i-1]+helper(price,n-i,dp));

    }

 

    return dp[n] = ans;

}

 

int cutRod(vector<int> &price, int n){

    vector<int> dp(n+1,-1);

    return helper(price,n,dp);

}
