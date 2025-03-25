class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int start = 0; 
        int end = 0;
        map<char,int>charFreq;
        int maxlength = 0;
        while(end < n){
            charFreq[s[end]]++;
            while(charFreq[s[end]] > 2){
                charFreq[s[start]]--;
                start++;
            }
            maxlength = max(maxlength , end - start + 1);
            end++;
        }
        return maxlength;
    }
};