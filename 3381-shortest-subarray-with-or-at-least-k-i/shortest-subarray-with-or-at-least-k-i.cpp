class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int i = 0 ; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                int temp = 0;
                for(int k = i; k <= j; k++){
                    temp = temp | nums[k];
                }
                if(temp >= k){
                    ans = min(j-i+1,ans);
                }
            }
        }
        return ans == INT_MAX?-1:ans;
    }
};