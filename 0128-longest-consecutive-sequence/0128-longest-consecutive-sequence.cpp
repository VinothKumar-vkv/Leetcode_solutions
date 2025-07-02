class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;  // Handle empty array

        sort(nums.begin(), nums.end());  // Sort the array

        int longest = 1;
        int count = 1;
        int last_smaller = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] == last_smaller + 1) {
                count += 1;
                last_smaller = nums[i];
            }
            else if (nums[i] == last_smaller) {
                // skip duplicates
                continue;
            }
            else {
                count = 1;
                last_smaller = nums[i];
            }
            longest = max(longest, count);
        }

        return longest;
    }
};
