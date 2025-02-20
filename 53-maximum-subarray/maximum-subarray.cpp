class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currentsum = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(currentsum > 0) currentsum += nums[i];
            else currentsum = nums[i]; 

            if(currentsum > maxsum) maxsum = currentsum;
        }
        return maxsum;
        
    }
};