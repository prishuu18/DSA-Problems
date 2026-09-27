class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>p;
        for(int i=0; i<piles.size(); i++)
        p.push(piles[i]);

        while(k&&(!p.empty())){
            int x = p.top();
            p.pop();
            p.push(ceil(x-x/2));
            k--;
        }
        
        long long sum = 0;
        while(!p.empty()){
            sum += p.top();
            p.pop();
        }

        return sum;
    }
};