class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26]={0};
        int maxCount=0;

        for(char task:tasks){
            freq[task-'A']++;
            maxCount=max(maxCount,freq[task-'A']);
        }

        int time=(maxCount-1)*(n+1);
        for(int f:freq){
            if(f==maxCount){
                time++;
            }
        }
        return max((int)tasks.size(),time);
    }
};