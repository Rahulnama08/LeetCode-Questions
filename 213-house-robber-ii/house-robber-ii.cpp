class Solution {
public:

    int solve(vector<int>nums){
        int n = nums.size();
        if(n == 0) return 0;
        vector<int>dp(n);
        if(n >= 1){
            dp[0] = nums[0];
        }
        if(n >= 2){
            dp[1] = max(nums[0],nums[1]);
        }
        for(int i = 2; i<n; i++){
            dp[i] = max(dp[i-1],dp[i-2] + nums[i]);
        }  
         return dp[n-1];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;
        if(n == 1) return nums[0];

        return max(solve(vector<int>(nums.begin(),nums.end()-1)),solve(vector<int>(nums.begin()+1,nums.end())));
    }
};