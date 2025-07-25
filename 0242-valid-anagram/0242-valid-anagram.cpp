class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> st;
        unordered_map <char, int> ts;
        for(auto it:s){
            st[it]++;
        }
        for(auto it:t){
            ts[it]++;
        }
        return st==ts;
    }
};