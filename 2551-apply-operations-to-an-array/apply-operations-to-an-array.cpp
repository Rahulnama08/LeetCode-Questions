class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
         int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
    }
    vector<int> result(n, 0);
    int index = 0;
    for (int num : nums) {
        if (num != 0) {
            result[index++] = num;
        }
    }
    return result;
    }
};