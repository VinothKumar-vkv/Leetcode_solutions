class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n = temperatures.size();
        vector<int> ans(n,0);
        for(int i = 0;i<n;i++){
            if(st.empty() || temperatures[st.top()]>=temperatures[i]){
                st.push(i);
            }
            else{
                while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                    int last = st.top();
                    st.pop();
                    ans[last] = i - last;
                }
                st.push(i);

            }
        }
        return ans;
    }
};