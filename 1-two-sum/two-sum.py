class Solution(object):
    def twoSum(self, nums, target):
        l=len(nums)
        for i in range(l):
            for j in range(l-i-1):
                if nums[i]+nums[l-j-1]==target:
                    return [i,l-j-1]

        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        