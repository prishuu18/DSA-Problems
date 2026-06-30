class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for(int i=0; i<prices.size(); i++){
            minprice = min(minprice,prices[i]);
            maxprofit = max(maxprofit, prices[i]-minprice);
        }
    return maxprofit;
    }
};










//  int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int maxPro = 0;
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(prices[j]>prices[i]){
//                     maxPro = max(maxPro, prices[j]-prices[i]);
//                 }
//             }
//         }
//         return maxPro;
//     }