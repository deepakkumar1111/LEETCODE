class Solution {
    // int help(int n,vector<int> &dp)
    // {
    //     if(n<=2)
    //     {
    //         dp[n]=n;
    //     }
    //     if(dp[n]!=-1)
    //     {
    //         return dp[n];
    //     }

    //     return help(n-1,dp)+help(n-2,dp);
    // }
public:
    int climbStairs(int n) {
        
        vector<int> dp(n+1);
        int prev2=1;
        int prev=1;
        

        for(int i=2;i<=n;i++)
        {
           int curr =prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return prev; 
    }
};