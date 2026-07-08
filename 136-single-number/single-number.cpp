class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int XOR = 0;
       for(int i=0; i<nums.size(); i++){
         XOR = (XOR ^ nums[i]);
       }
       return XOR;
    }
};

 // by map
//   map<int,int> mpp;
//         for(int i=0; i<nums.size(); i++){
//             mpp[nums[i]]++;
//         }
//         for(auto it:mpp){
//             if(it.second==1){
//                 return it.first;
//             }
//         }
//         return -1;