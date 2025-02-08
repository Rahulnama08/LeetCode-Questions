class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            int mark = abs(nums[i]) -1;
            if(nums[mark] > 0){
                nums[mark] *= -1;
            }
        }
        for(int i = 0; i<n; i++){
            if(nums[i] > 0){
                res.push_back(i+1);
            }
        }
        return res;
    }
};