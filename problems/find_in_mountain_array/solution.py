# """
# This is MountainArray's API interface.
# You should not implement it, or speculate about its implementation
# """
#class MountainArray:
#    def get(self, index: int) -> int:
#    def length(self) -> int:

class Solution:
    def findInMountainArray(self, target: int, mountain_arr: 'MountainArray') -> int:
        arrLen = mountain_arr.length()
        # to find peak
        l, r = 0, arrLen-1
        peakAt = -1

        while l <= r:
            mid = l + ((r - l) // 2)

            prevEle = mountain_arr.get(mid-1) if mid-1 >= 0 else -1
            midEle = mountain_arr.get(mid)
            nextEle = mountain_arr.get(mid+1) if mid+1 < arrLen else -1

            if prevEle < midEle and nextEle < midEle:
                peakAt = mid
                break
            if midEle < nextEle:
                l = mid + 1
            else:
                r = mid - 1

        # to find the element
        def binarySearch(l, r, cond):
            while l <= r:
                mid = l + ((r - l) // 2)

                midEle = mountain_arr.get(mid)

                if midEle == target:
                    return mid
                if cond(midEle, target):
                    l = mid + 1
                else:
                    r = mid - 1
            return None
        
        result =  binarySearch(0, peakAt, lambda m, t: m < t )
        if result != None:
            return result
        
        result =  binarySearch(peakAt+1, arrLen-1, lambda m, t: m > t )
        if result != None:
            return result
        
        return -1