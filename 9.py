
#PALINDROME NUMBER

class Solution:
    def isPalindrome(self, x: int) -> bool:
        t=x
        s=0
        while t>0:
            r=t%10
            s=s*10+r
            t=t//10
        if s==x:
            return True
        return False

x=int(input())
s=Solution()
print(s.isPalindrome(x))