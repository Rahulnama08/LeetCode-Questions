class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mn = 10000;
        int sum = 0; 
        int n = nums.size();

        for(int i = 0; i<n; i++){
            sum += nums[i];
            mn = min(mn,sum);
        }
        int ans = 1;
        if(mn < 1){
            ans = 1-mn;
        }
        return ans;
    }
};