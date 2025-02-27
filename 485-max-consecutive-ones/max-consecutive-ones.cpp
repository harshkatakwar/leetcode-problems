class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int temp=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                temp=temp<ans?ans:temp;
                ans=0;

            }else{
                ans++;
            }
        }
        temp=temp<ans?ans:temp;
        return temp;
    }
};