class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashdict = dict()
        for i, n in enumerate(nums):
            temp = target - n
            if temp in hashdict:
                return hashdict[temp], i
            
            hashdict[n] = i