class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        auto isOperator = [](string token){
            return token == "+" || token == "-" || token == "*" || token == "/";
        };

        for(auto token : tokens){
            if(isOperator(token)){
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                if(token == "+"){
                    st.push(num1+num2);
                }
                else if(token == "-"){
                    st.push(num1-num2);
                }
                else if(token == "*"){
                    st.push(num1*num2);
                }
                else{
                    st.push(num1/num2);
                }
            }
            else{
                int num = stoi(token);
                st.push(num);
            }

        }
         return st.top();
    }
};