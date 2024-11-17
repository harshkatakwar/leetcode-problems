class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """

        def get_next(x):
            return sum(int(digit)**2 for digit in str(x))
        
        sett=set()

        while n!=1 and n not in sett:
            sett.add(n)
            n=get_next(n)
        return n==1
        