class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxcount = 0; 
        int currcount = 0;
        for(int i = 0; i < sentences.size();i++){
            for(int j = 0; j < sentences[i].size();j++){
                if(sentences[i][j] == ' ')
                currcount++;
            }
            if(currcount > maxcount){
                maxcount = currcount;
            }
            currcount = 0;
        }
        return maxcount + 1;
    }
};