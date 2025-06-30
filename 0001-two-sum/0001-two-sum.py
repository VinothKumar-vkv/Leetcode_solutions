from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}  # Dictionary to store number and its index
        
        for i, num in enumerate(nums):
            complement = target - num  # Calculate the complement
            if complement in num_map:
                return [num_map[complement], i]  # Return indices of the two numbers
            num_map[num] = i  # Store the index of the current number
        
        return []  # Return empty list if no solution is found
