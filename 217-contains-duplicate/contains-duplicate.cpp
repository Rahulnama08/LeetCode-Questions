class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = 1;
        while(i < n-1 && j < n){
            if(nums[i] == nums[j]) return true;
            i++;
            j++;
        }
        return false;
    }
};