class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ssize = s.size();
        int tsize = t.size();
        int scount = 0;
        int tcount = 0;

        while (scount < ssize && tcount < tsize) {
            if (s[scount] == t[tcount]) {
                scount++;
            }
            tcount++;
        }

        return scount == ssize;
    }
};
