
#DIGIT FREQUENCY SCORE

class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        t = n
        s = 0

        while t > 0:
            r = t % 10
            s = s + r
            t = t // 10

        return s

n = int(input())
s = Solution()
print(s.digitFrequencyScore(n))