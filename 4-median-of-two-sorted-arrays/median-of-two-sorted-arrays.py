class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        n1=len(nums1)
        n2=len(nums2)

        if n1>n2:
            return self.findMedianSortedArrays(nums2,nums1)
        
        l=0
        r=n1
        while l<=r:
            mid1=(l+r)/2
            mid2=(n1+n2+1)/2-mid1

            mxL1=nums1[mid1-1] if mid1!=0 else float('-inf')
            miR1=nums1[mid1] if mid1!=n1 else float('inf')

            mxL2 =nums2[mid2-1] if mid2!=0 else float('-inf')
            miR2=nums2[mid2] if mid2!=n2 else float('inf')

            if mxL1<=miR2 and mxL2<=miR1:
                if (n1+n2)%2==0:
                    return float(max(mxL1,mxL2)+min(miR1,miR2))/2
                else:
                    return float(max(mxL1,mxL2))
            elif mxL1>miR2:
                r=mid1-1
            else:
                l=mid1+1
            
        return -1