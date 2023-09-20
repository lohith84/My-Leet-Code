class Solution:
    def minOperations(self, nums: List[int], x: int) -> int:
        t=0
        n=len(nums)
        for i in range(n):
            t=t+nums[i]
        t=t-x
        if t==0:
            return n
        m=0
        curr=0
        left=0
        for i in range(n):
            curr=curr+nums[i]
            while left<=i and curr>t:
                curr=curr-nums[left]
                left+=1
            if curr==t:
                m=max(m,i-left+1)
        if m :
            return n-m
        else:
            return -1