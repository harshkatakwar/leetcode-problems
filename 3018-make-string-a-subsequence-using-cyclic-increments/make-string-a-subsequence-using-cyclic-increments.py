class Solution(object):
    def canMakeSubsequence(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: bool
        """
        i, j = 0, 0  # Two Pointers
        n1, n2 = len(str1), len(str2)

        while i < n1 and j < n2:
            if (ord(str2[j]) - ord(str1[i]) + 26) % 26 <= 1:
                j += 1
            i += 1

        return j == n2