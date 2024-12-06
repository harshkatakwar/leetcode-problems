class Solution(object):
    def maxCount(self, banned, n, maxSum):
        """
        :type banned: List[int]
        :type n: int
        :type maxSum: int
        :rtype: int
        """
        banned_set = set(banned)  # Use a set for quick lookups
        total_sum = 0  # Track the cumulative sum
        count = 0  # Track the count of valid numbers

        for i in range(1, n + 1):
            if i in banned_set:
                continue  # Skip banned numbers
            total_sum += i
            if total_sum > maxSum:
                break  # Stop if the sum exceeds maxSum
            count += 1

        return count