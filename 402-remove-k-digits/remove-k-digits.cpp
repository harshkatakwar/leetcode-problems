class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        
        //s.push(num[0]);
        
        for(char digit:num){
            while(k>0 && !s.empty() && digit<s.top()){
                s.pop();
                k--;
            }
            s.push(digit);
            cout<<k<<endl;
        }

        while(k>0 && !s.empty()){
            s.pop();
            k--;
        }
        string s1="";
        while(!s.empty()){
            s1.push_back(s.top());
            s.pop();
        }
        cout<<s1<<endl;
        reverse(s1.begin(),s1.end());
        //s1.erase(0,min(s1.find_first_not_of('0'),s1.size()-1));
        int i1=0;
        
        // Remove leading zeros and construct the final result
        int m = s1.size();
        string result = "";
        int foundNonZero = 0;
        for (int i = 0; i < m; i++) {
            if (s1[i] == '0' && foundNonZero == 0) {
                continue;
            } else {
                result.push_back(s1[i]);
                foundNonZero = 1;
            }
        }
        // If the result is empty, return "0"
        if (result.size() == 0)
            result.push_back('0');
        return result;
        //return s1;
        
    }
};