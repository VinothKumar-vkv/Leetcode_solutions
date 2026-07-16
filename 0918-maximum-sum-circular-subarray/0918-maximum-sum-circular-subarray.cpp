class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currmax = 0;
        int currmaximum = nums[0];

        int currmin = 0;
        int currminimum = nums[0];

        int total = 0;

        for(int i = 0;i<n;i++){

            currmax = max(nums[i],currmax+nums[i]);
            currmaximum = max(currmax,currmaximum);

            currmin = min(nums[i],currmin + nums[i]);
            currminimum = min(currminimum,currmin);

            total+= nums[i];
        }

        if(currmaximum<0) return currmaximum;

        return max(currmaximum,total - currminimum);
    }

};

