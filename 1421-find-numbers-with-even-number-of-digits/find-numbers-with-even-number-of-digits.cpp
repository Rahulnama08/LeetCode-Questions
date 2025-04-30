class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i = 0; i<n; i++){
            int temp = nums[i];
            int digit = 0;

            while(temp > 0){
                temp /= 10;
                digit++;
            }
            if(digit % 2 == 0) result++;
        }
        return result;
    }
};