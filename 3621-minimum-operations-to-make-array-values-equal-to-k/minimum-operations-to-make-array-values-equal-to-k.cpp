class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for (int num : nums) {
        if (num < k) return -1;
        }
    set<int> greaterThanK;
    for (int num : nums) {
        if (num > k) greaterThanK.insert(num);
    }

    int operations = 0;
    while (!greaterThanK.empty()) {

        int curr = *greaterThanK.rbegin();
        int count = count_if(nums.begin(), nums.end(), [&](int x) {
            return x > curr;
        });
        if (count > 0) return -1;
        int next = k;
        auto it = greaterThanK.lower_bound(curr);
        if (it != greaterThanK.begin()) {
            --it;
            next = *it;
        }

        for (int& num : nums) {
            if (num == curr) num = next;
        }

        greaterThanK.erase(curr);
        operations++;
    }
    for (int num : nums) {
        if (num != k) return -1;
    }
    return operations;

    }
};