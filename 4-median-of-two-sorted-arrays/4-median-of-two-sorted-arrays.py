class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        m=type(int)
        s=type(float)
        s=0
        nums1.extend(nums2)
        
        nums1.sort()
        if len(nums1)%2==0:
            m=int(len(nums1)/2 )
            s= ((nums1[m]+nums1[m-1])/2)
        else:
            m=int(len(nums1)/2)
            s=nums1[m]
        return s