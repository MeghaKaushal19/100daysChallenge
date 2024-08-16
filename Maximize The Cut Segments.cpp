class Solution
{
    public:

   int solve(int n,int a,int b,int c){
       

vector<int>dp(n+1,INT_MIN);


dp[0]=0;

for(int i=1;i<=n;i++){
    
    
    if(i-a>=0){
        
        dp[i]=1+dp[i-a];
    }
      if(i-b>=0){
        
        dp[i]=max(dp[i],1+dp[i-b]);
    }
      if(i-c>=0){
        
        dp[i]=max(dp[i],1+dp[i-c]);
    }
    
}

  return dp[n] < 0 ? 0 : dp[n];

   }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
    

return solve(n,x,y,z); 
    }
};

