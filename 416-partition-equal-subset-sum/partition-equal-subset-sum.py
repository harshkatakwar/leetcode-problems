class Solution(object):
    def canPartition(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        sum=0
        for i in range(len(nums)):
            sum+=nums[i]
        
        if sum%2!=0:
            return False
        m=sum/2
        dp=[True]+[False]*(m+1)

        for num in nums:
		    for j in range(m,num-1,-1):
			    dp[j]=dp[j] or dp[j-num]
        
        return dp[m]

        