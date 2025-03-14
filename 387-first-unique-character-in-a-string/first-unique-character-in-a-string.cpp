class Solution {
public:
    int firstUniqChar(string s) {
        map<int,int>res;
        int n = s.length();

        for(int i = 0; i<n; i++){
            res[s[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(res[s[i]] == 1) return i;
        }
        return -1;
    }
};