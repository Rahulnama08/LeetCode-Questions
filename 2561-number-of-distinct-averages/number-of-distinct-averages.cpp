class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n/2; i++){
            double avg = (nums[i] + nums[n-1-i]) / 2.0;
            res.insert(avg);
        }
        return res.size();
    }
};