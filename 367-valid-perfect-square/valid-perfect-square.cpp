class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        if (num == 1) return true;
        long s = 0;
        long e = num/2;
        while (s <= e) {
            long mid = s + ((e - s) >> 1);
            long square = mid * mid;
            if (square == num) return true;
            else if (square > num) e = mid - 1;
            else s = mid + 1;
        }
        return false;
    }
};