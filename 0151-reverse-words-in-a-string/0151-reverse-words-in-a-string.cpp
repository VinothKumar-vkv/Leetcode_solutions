class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        string reverse = "";
        while(ss>>word){
            words.push_back(word);
        }
        for(int  i = words.size() -1;i>=0;i--){
            reverse+=words[i];
            if(i!=0){
                reverse+=" ";
            }
            
        }
        return reverse;
    }
};