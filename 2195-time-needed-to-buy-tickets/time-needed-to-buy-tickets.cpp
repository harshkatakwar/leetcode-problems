class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0,no=tickets[k];
	    for(int i=0; i<(int)tickets.size(); i++){
            ans+=min(tickets[i],no-1);
            tickets[i]-=min(tickets[i],tickets[k]-1);
            if(i<=k && tickets[i]>0)
            ans++;
	    }
	    return ans;
    }
};