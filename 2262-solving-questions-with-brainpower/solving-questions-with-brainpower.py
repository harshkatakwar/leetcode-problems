class Solution:
    def func(self,idx,questions,dp,n):
        if idx>=n:
            return 0
        if dp[idx]!=-1:
            return dp[idx]
        take=questions[idx][0]+self.func(idx+questions[idx][1]+1,questions,dp,n)
        leave=self.func(idx+1,questions,dp,n)
        dp[idx]=max(take,leave)
        return dp[idx]

    def mostPoints(self, questions: List[List[int]]) -> int:
       n=len(questions)
       dp=[-1]*n
       return self.func(0,questions,dp,n)