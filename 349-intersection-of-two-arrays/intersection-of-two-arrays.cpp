class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i=0,j=0;
        unordered_map<int,int> mp;

        for(auto &x:nums1){
            mp[x]++;
        }

        for(auto &s1:nums2){
            if(mp.find(s1)!=mp.end()){
                ans.push_back(s1);
                mp.erase(s1);
            }
        }
        return ans;
        
    }
};