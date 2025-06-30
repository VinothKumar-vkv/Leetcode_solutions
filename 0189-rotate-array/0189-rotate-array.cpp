class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while(start<end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }

    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // Handle k > n

        // Step 1: Reverse the whole array
        reverse(nums, 0, n - 1);

        // Step 2: Reverse first k elements
        reverse(nums, 0, k - 1);

        // Step 3: Reverse the remaining elements
        reverse(nums, k, n - 1);
    }

};