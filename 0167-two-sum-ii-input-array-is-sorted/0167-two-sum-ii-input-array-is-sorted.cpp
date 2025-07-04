class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int j = n-1;
        int i= 0;
        
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum>target){
                  j--;
            }
            else if(sum<target){
                i++;
            }
            else{
                return {i+1,j+1};
            }
        }
        return {};
    }
};