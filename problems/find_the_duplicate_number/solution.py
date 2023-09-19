class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        mpp = set()
        for num in nums:
            if num in mpp:
                return num
            mpp.add(num)
        