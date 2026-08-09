class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int word1len = word1.length();
        int word2len = word2.length();
        string ans = "";
        int i = 0;
        while(i< word1len || i< word2len){
            if(i<word1len){
                ans+=word1[i];
            }
            if(i<word2len){
                ans+=word2[i];
            }
            i++;
        }
        return ans;
    }
};