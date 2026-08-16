class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        for(int i = 0;i<chars.size();){
            long long count = 0;
            char curr = chars[i];
            while(i<chars.size() && chars[i] == curr){
                count = count + 1;
                i++;
            }
            chars[index++] = curr;
            if(count > 1){
                string s = to_string(count);
                for(char c:s){
                    chars[index++] = c;
                }
            }

        }
        return index;
    }
};