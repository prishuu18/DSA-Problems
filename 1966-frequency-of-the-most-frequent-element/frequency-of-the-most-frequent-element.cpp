class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int l=0;
        int max_l=1;
        int n=nums.size();
        long long curr=0;
        /*
        the window is monotonic ? 

        see the window is increasing if we extend it 
        
        */ 
        sort(nums.begin(),nums.end());
        for(int r=0;r<n;r++){
            curr+=nums[r];
            while((r-l+1)*1LL*nums[r]-curr>k){
                curr-=nums[l];
                l+=1;
            }
            max_l=max(max_l,r-l+1);
        }
        return max_l;
    }
};