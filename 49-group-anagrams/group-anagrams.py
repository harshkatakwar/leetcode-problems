class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        mp={}

        for s in strs:
            sorted_str="".join(sorted(s))

            if sorted_str not in mp:
                mp[sorted_str]=[]
            
            mp[sorted_str].append(s)
        
        return list(mp.values())
