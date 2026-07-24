


class Solution(object):
    def romanToInt(self, s):
        sum=0
        roman_to_int = {'I': 1,'V': 5,'X': 10,'L': 50, 'C': 100,'D': 500,'M': 1000}
        for i,char in enumerate(s):
            if i==len(s)-1:
                sum+=roman_to_int[char]
            else:
                if roman_to_int[char]>= roman_to_int[s[i+1]]:
                    sum+=roman_to_int[char]
                else :
                    sum -=roman_to_int[char]
        return sum
            



        """
        :type s: str
        :rtype: int
        """
        