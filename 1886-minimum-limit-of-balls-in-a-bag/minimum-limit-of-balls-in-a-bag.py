class Solution(object):
    def minimumSize(self, nums, maxOperations):
        """
        :type nums: List[int]
        :type maxOperations: int
        :rtype: int
        """
        left, right = 1, max(nums)
        ans = right

        while left <= right:
            mid = (left + right) // 2
            ops = 0

            for n in nums:
                ops += (n - 1) // mid
                if ops > maxOperations:
                    break

            if ops <= maxOperations:
                ans = mid
                right = mid - 1
            else:
                left = mid + 1

        return ans