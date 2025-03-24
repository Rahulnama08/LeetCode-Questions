class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        int sum = 0;
        map<int,int>res;
        int index = 0;
        int mx = 0;
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            res[nums[i]]++;
            mx = max(mx,res[nums[i]]);
            ans = max(mx,ans);
            sum++;
            while(sum - mx > k){
                res[nums[index]]--;
                sum--;
                mx = max(mx,res[nums[index]]);
                index++;
            }
        }
        return ans;
    }
};