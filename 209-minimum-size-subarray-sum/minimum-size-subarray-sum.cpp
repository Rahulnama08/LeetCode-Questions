class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        int sum = 0;
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            while(sum >= target){
                ans = min(ans , i-temp+1);
                sum -= nums[temp];
                temp++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};