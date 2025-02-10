class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1,missing = 1;
        vector<int>res;

        for(auto it:nums){
            if(nums[abs(it)-1]<0){
                dup = abs(it);
            }
            else{
                nums[abs(it)-1] *= -1;
            }
        }
        res.push_back(dup);
        for(int i = 1; i<nums.size();i++){
            if(nums[i]>0){
                missing = i + 1;
            }
        }
        res.push_back(missing);
        return res;
    }
};