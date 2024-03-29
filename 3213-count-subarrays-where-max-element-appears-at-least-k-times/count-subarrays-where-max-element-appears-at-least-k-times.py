class Solution(object):
    def countSubarrays(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        max_ele=max(nums)
        ans=0
        start=0
        maxEle_window=0

        for end in range(len(nums)):
            if nums[end] ==max_ele:
                maxEle_window+=1
            while maxEle_window==k:
                if nums[start]==max_ele:
                    maxEle_window-=1
                start+=1
            ans+=start
        return ans