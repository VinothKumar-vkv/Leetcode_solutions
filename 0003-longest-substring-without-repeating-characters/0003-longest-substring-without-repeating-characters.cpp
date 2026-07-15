class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hash(256,-1);
        int right = 0;
        int left = 0;
        int maxi = 0;
        int n = s.size();
        while(right<n){
            if(hash[s[right]]!=-1){
                if(hash[s[right]]>=left){
                    left = hash[s[right]] +1;
                }
            }
            hash[s[right]] = right;
            maxi = max(maxi,right-left+1);
            
            right++;
        }
        return maxi;
    }
};