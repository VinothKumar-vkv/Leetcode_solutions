class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> temp;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        int left = 0;
        int right = n-1;
        while(left<right){
            int sum = temp[left].first+temp[right].first;
            if(sum == target){
                return {temp[left].second,temp[right].second};
            }
            else if(sum>target){
                right--;
            }
            else if(sum<target){
                left++;
            }
        }
            return {};
    }

};