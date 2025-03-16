class Solution {
public:
    int findMaxK(vector<int>& nums) {
        if (nums.size() == 1) return -1;

        sort(nums.begin(), nums.end());
        int start = 0;
        int end = nums.size() - 1;
        int maxK = -1;

        while (start < end && nums[start] < nums[end]) {
            if (abs(nums[start]) == nums[end]) {
                maxK = max(maxK, nums[end]);
                start++;
            } 
            else {
                if (abs(nums[start]) > nums[end]) start++;
                else end--;
            }
        }
        return maxK;
    }
};
