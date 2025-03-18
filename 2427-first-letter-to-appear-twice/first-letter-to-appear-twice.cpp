class Solution {
public:
    char repeatedCharacter(string s) {
        char ch;
        set<char>res;
        for(auto it: s){
            if(res.find(it) != res.end()){
                ch = it;
                break;
            }
            else{
                res.insert(it);
            }
        }
        return ch;
    }
};