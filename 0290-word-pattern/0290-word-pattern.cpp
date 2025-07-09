class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        istringstream iss(s);
        while(iss >> word){
            words.push_back(word);
        }
        if(words.size()!=pattern.size()) return false;
        unordered_map<char,string> chartoword;
        unordered_map<string,char> stringtochar;

        for(int i = 0;i<pattern.size();i++){
            char c = pattern[i];
            string w = words[i];

            if(chartoword.count(c) && chartoword[c]!=w){
                return false;
            }
            if(stringtochar.count(w) && stringtochar[w]!=c){
                return false;
            }

            chartoword[c] = w;
            stringtochar[w]= c;
        }
        return true;
    }
};