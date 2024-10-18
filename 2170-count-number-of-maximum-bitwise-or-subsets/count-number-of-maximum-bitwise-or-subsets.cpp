class Solution {
public:
    void find(int tno,vector<int>&nums,int idx,int &ans,int no,int len,bool p){
    if(tno==no && p)
        ans++;
    if(idx>=len)
        return ;
    find(tno,nums,idx+1,ans,no,len,0);
    find(tno|nums[idx],nums,idx+1,ans,no,len,1);
    return ;
}
    int countMaxOrSubsets(vector<int>& nums) {
        int no=0,len=(int)nums.size();
        for(auto x : nums)
            no|=x;
        int ans=0;
        find(0,nums,0,ans,no,len,0);
        return ans;
    }
};