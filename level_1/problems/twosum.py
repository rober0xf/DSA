from typing import List

class Solution:
    def twoSum(self, nums: List[int], target:int) -> List[int]:
        freq = dict(); 

        for i in range(len(nums)):
            needed = target - nums[i]
            if(needed in freq):
                return [freq[needed], i]
            freq[nums[i]] = i


nums = [2,7,11,15]
target = 9

sol = Solution()
print(sol.twoSum(nums, target))
