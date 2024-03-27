class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0, right=0, count=0, product=1;
        int len=nums.size();
        if(k<=1) return 0;
        while(right<len){
            product*=nums[right];
            while(product>=k){
                product/=nums[left++];
            }
            count=count+1+(right-left);
            right++; 
        }
        return count; 
    }
};