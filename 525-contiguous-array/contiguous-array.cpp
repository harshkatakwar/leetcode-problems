class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        int cnt_0=0,len=0;
        unordered_map<int, int> mp;
        mp[0]=-1;
        
        for(int i=0;i<nums.size();i++){
            cnt_0=cnt_0+(nums[i]==0?1:-1);
            
            if(mp.find(cnt_0)!=mp.end()){
                // mp[cnt_0]=i;
                len=max(len,i-mp[cnt_0]);
            }else{
                mp[cnt_0]=i;
            }
            
        }
        
        return len;
    }

};