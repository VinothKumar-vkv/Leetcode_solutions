class StockSpanner {
private:
    std::stack<std::pair<int, int>> st;  // pair<price, index>
    int ind;

public:
    StockSpanner() {
        ind = -1;
        while (!st.empty()) st.pop();  
    }

    int next(int price) {
        ind++; 
        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }

        int res;
        if (st.empty()) {
            res = ind + 1; 
        } else {
            res = ind - st.top().second; 
        }

        st.push({price, ind}); 
        return res;
    }
};