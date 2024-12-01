class Solution(object):
    def checkIfExist(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        arr.sort()

        for x in range(len(arr)):
            for y in range(x+1,len(arr)):
                if arr[x]*2==arr[y] or arr[x]==2*arr[y]:
                    return True
        return False

        