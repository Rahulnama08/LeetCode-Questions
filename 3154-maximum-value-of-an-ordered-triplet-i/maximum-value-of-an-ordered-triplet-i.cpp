class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long int ans = 0, num1 = 0, num2 = 0, num3 = 0;
        
        for(int i = 0; i<n; i++){
            num1 = nums[i];
            for(int j = i+1; j<n; j++){
                num2 = nums[j];
                for(int k = j+1; k<n; k++){
                    num3 = nums[k];
                    long long int temp = (num1 - num2) * num3;
                    if(temp > ans)
                        ans = temp;
                }
            }
        }
        return ans;
    }
};