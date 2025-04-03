class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0; 

        vector<int> prefix(n);
        vector<int> suffix(n);

        prefix[0] = nums[0];
        suffix[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], nums[i]);
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], nums[i]);
        }

        long long ans = LLONG_MIN;

        for (int j = 1; j < n - 1; j++) {
            long long result = (long long)(prefix[j - 1] - nums[j]) * suffix[j + 1];
            ans = max(ans, result);
        }

        return max(ans, 0LL);
    }
};
