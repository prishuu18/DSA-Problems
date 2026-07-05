class Solution {
public:
    int sumbyd(vector<int> &nums , int div){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + ceil((double)(nums[i])/(double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(sumbyd(nums,mid)<=threshold){
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return ans;
    }
};