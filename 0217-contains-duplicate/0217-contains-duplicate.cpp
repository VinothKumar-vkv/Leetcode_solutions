class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int n = nums.size();
        int m = st.size();
        if(n==m){
            return false;
        }
        else{
            return true;
        }
    }
};