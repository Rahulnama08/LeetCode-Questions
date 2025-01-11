class Solution {
public:
int counter(int n){
    int count = 0;
    while(n){
        count++;
        n /= 10;
    }
    return count;
}
vector<int> selfDividingNumbers(int left, int right) {
        vector<int>new_arr;
        int digit,count = 0, count1 = 0;
        for(int i = left; i<= right; i++){
            int temp = i;
            count = counter(i);
            count1 = 0;
            while(temp){
                digit = temp % 10;
                if(digit == 0) {
                    count1 = -1;
                    break;
                }
                if(i % digit == 0){
                    count1++;
                }
                temp /= 10;
            }
            if(count == count1){
                new_arr.push_back(i);
            }
        }
        return new_arr;
    }
};