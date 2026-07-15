class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int maxi = 0;
        int zeroes = 0;
        while(right<nums.size()){
            if(nums[right] == 0){
                zeroes++;
            }
            if(zeroes>k){
                if(nums[left] == 0){
                    zeroes--;
                    
                }
                left = left+1;
                
            }
            if(zeroes<=k){
                maxi = max(maxi,right-left+1);
            }
            right = right+1;
        }
        return maxi;
    }
};