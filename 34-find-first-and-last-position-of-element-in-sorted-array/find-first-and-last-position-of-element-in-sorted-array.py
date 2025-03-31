class Solution:
    def searchRange(self, arr: List[int], target: int) -> List[int]:
        low,high=0,len(arr)-1
        ans1,ans2=len(arr),len(arr)

        while low<=high:
            mid=(low+high)//2
            if arr[mid]>=target:
                ans1=mid
                high=mid-1
            else:
                low=mid+1
        
        low,high=0,len(arr)-1
        while low<=high:
            mid=(low+high)//2
            if arr[mid]>target:
                ans2=mid
                high=mid-1
            else:
                low=mid+1

        if ans1==len(arr) or arr[ans1]!=target:
            return -1,-1
        return ans1,ans2-1