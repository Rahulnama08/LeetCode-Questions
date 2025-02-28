class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        nums2.push_back(-1);
        vector<int>ans;
        int n1 = nums1.size();
        int n2 = nums2.size();
       

        for(int i = 0; i < n1; i++){
            bool flag = 0;
            int j = 0;
            while(j < n2){
                if(nums1[i] == nums2[j]) flag = 1;
                if((nums2[j] > nums1[i] || nums2[j] == -1) && flag){
                    ans.push_back(nums2[j]);
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};