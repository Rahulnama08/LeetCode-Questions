class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i<k; i++){
            sum += nums[i];
        }
        double res = sum;
        for(int i = k; i<nums.size(); i++){
            sum -= nums[i-k];
            sum += nums[i];
            if(sum > res) res = sum;
        }
        return res / k;
    }
};