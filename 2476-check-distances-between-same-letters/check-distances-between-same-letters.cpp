class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        set<char>st;
        for(int i = 0; i<s.size(); i++){
            if(st.find(s[i]) != st.end())
                continue;
            else{
                st.insert(s[i]);
                int x = i + distance[s[i] - 'a'] + 1;
                if(x < s.size() && s[i] == s[x])
                    continue;
                else 
                    return false;    
            }  
        }
        return true;
    }
};