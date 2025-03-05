class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        
        while(low<=high){
            int mid=floor(low+((high-low)/2));
            if(nums[mid]==target){
                return mid;
            }else{
                if(nums[mid]<target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }    
        }

        if(nums.size()==1 && nums[0]==target){
            return 0;
        }
        return -1;
    }
};