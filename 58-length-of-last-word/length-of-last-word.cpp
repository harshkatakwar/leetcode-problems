class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int ans=0;
        bool flag=false;
        for(int i=len-1;i>=0;i--){
            if(s[i]!=' '){
                flag=true;
                ans++;
            }else if(flag==true){
                break;
            }
        }
        return ans;
    }
};