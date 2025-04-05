class Solution {
public:
    int dfs(vector<int>& nums, int i, int currXor) {
        if (i == nums.size()) return currXor;
        return dfs(nums, i + 1, currXor ^ nums[i]) + dfs(nums, i + 1, currXor);
    }

    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
};
