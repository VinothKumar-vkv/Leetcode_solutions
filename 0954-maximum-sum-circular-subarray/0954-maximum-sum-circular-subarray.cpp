class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum = 0;
        int maxsum = nums[0];
        int minsum = nums[0];
        int currmax = 0;
        int currmin = 0;
        for(int num:nums){
            total_sum+=num;
            currmax=max(num,currmax+num);
            maxsum=max(maxsum,currmax);

            currmin = min(num,currmin+num);
            minsum = min(minsum,currmin);


        }
        if(total_sum == minsum){
            return maxsum;
        }
        return max(maxsum,total_sum-minsum);
    }
};