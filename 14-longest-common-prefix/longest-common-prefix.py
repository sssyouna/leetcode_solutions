class Solution(object):
    def longestCommonPrefix(self, strs):
        found=""
        minstring=min(strs)
        
        for i in range(len(minstring)):
            for j in strs:
                if j[i]==minstring[i]:
                    continue
                else :
                    return found
            found+=minstring[i]
        return found

        """
        :type strs: List[str]
        :rtype: str
        """
        