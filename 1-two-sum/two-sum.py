class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashmaap={}
            
        for i in range(len(nums)):
            complement=target-nums[i]
            if complement in hashmaap:
                return [i,hashmaap[complement]]
            hashmaap[nums[i]]=i
        return []