class Solution {
public:
    string addStrings(string num1, string num2) {
        string str;
        int n1 = num1.size() - 1;
        int n2 = num2.size() - 1;
        int carry = 0;

        while(n1 >= 0 || n2 >= 0 || carry){
            if(n1 >= 0){
                carry += num1[n1--] -'0';
            }
            if(n2 >= 0){
                carry += num2[n2--] -'0';
            }
            str += carry % 10 + '0';
            carry /= 10;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};