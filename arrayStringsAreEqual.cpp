class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      
        string str1;
        for(string s:word1){
            str1+=s;
        }
         string str2;
        for(string s:word2){
            str2+=s;
        }

        return str1==str2;

    }
};
