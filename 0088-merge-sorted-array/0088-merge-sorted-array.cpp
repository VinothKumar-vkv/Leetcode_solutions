class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left = 0;  
        int right = 0; 
        int index = 0; 
        vector<int> arr(m + n);

        while (left < m && right < n) {
            
            if (nums1[left] <= nums2[right]) {
                arr[index] = nums1[left]; 
                left++;
            } else {
                arr[index] = nums2[right]; 
                right++;
            }
            index++; 
        }
        while (left < m) {
            arr[index] = nums1[left]; // Copy from nums1 to arr
            left++;
            index++;
        }
        while (right < n) {
            arr[index] = nums2[right]; 
            right++;
            index++;
        }
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr[i];
        }
    }
};