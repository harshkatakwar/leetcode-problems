class Solution(object):
    def addSpaces(self, s, spaces):
        """
        :type s: str
        :type spaces: List[int]
        :rtype: str
        """
        i,j=0,0
        ans=[]
        for x in range(len(spaces)):
            print(x)
            j=spaces[x]
            ans.append(s[i:j])
            i=j
        ans.append(s[i:])
        return ' '.join(ans)
        