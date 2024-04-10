class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        queue<int> id;
        int n=deck.size();
        sort(deck.begin(),deck.end());

        for(int i=0;i<n;i++){
            id.push(i);
        }

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[id.front()]=deck[i];
            id.pop();

            if(!id.empty()){
                id.push(id.front());
                id.pop();
            }
        }
        return ans;

    }
};