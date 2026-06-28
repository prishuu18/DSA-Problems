class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum = 0;
       int maxi = INT_MIN;
       for(int i=0; i<nums.size(); i++){
           sum = sum + nums[i];
           maxi = max(sum, maxi);
           if(sum<0) sum =0;
       }
       return maxi;
    }
};

















  //  brute =====
   // int n = nums.size();
        // int maxi = INT_MIN;
        // for(int i=0; i<nums.size()-1; i++){
        //     for(int j=i; j<nums.size()-1; j++){
        //         int sum =0;
        //         for(int k=i; k<j; k++){
        //             sum += nums[k];
        //             maxi = max(sum, maxi);
        //         }
        //     }
        // }
        // return maxi;