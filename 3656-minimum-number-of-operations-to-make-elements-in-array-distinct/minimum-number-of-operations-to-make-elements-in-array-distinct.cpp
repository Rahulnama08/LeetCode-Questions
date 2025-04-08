class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;
        while (true) {
        unordered_set<int> seen(nums.begin(), nums.end());
        if (seen.size() == nums.size()) break;
        if (nums.size() <= 3) {
            nums.clear();
        } 
        else {
            nums.erase(nums.begin(), nums.begin() + 3);
        }
        ops++;
    }
    return ops;
    }
};