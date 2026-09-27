class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> p;

        for(int i = 0; i < nums.size(); i++)
            p.push(nums[i]);

        long long sum = 0;

        while(k && !p.empty()) {
            int x = p.top();
            sum += x;
            p.pop();

            p.push((x + 2) / 3);

            k--;
        }

        return sum;
    }
};