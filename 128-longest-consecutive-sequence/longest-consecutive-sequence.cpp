class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size() == 0) return 0;
        int count =1;
        int maxcount = 1;
        int series = nums[0];
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==series+1){
            count++;
            series = nums[i];
            maxcount = max(maxcount, count);
        }
       else if(nums[i]==series){
            continue;
      }
       else{
            count =1;
            series = nums[i];
       }
    }
    return maxcount;
    }
};