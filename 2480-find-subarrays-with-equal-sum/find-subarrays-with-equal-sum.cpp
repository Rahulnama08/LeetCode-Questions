class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>res;
        for(int i = 0; i<nums.size() - 1; i++){
            res[nums[i] + nums[i+1]]++;
        }
        for(auto it:res){
            if(it.second > 1) return true;
        }
        return false;
    }
};