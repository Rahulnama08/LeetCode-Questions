class Solution {
public:
    int countDigits(int num) {
        int n = num;
        int count = 0;

        while(num > 0){
            int rem = num % 10;
            if(n % rem == 0){
                count++;
            }
            num /= 10;
        }
        return count;
    }
};