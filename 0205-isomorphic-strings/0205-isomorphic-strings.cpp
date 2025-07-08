class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char> maps;
        unordered_map<char,char> mapt;
        for(int i =0;i<s.size();i++){
            char s1 = s[i];
            char t1 = t[i];
            if(maps.find(s1)!=maps.end()){
                if(maps[s1]!=t1){
                    return false;
                }
            }
            else{
                maps[s1] = t1;
            }
            if(mapt.find(t1)!=mapt.end()){
                if(mapt[t1]!=s1){
                    return false;
                }
            }
            else{
                mapt[t1] = s1;
            }

        }
        return true;
    }
    
};