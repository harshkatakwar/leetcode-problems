class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int final_ans=INT_MIN;
        int ans=nums[0];
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                ans+=nums[i];
            }else{
                if(ans>final_ans){
                    final_ans=ans;
                }
                ans=nums[i];
            }
            cout<<ans<<" "<<final_ans<<endl;
        }
        if(ans>final_ans){
            final_ans=ans;
        }
        return final_ans;
    }
};