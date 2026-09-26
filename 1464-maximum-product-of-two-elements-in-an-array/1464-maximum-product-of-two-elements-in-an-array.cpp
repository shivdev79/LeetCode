class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int k = nums[n-1] - 1;
        int s = nums[n-2] - 1;
        int r = k * s;
        return r;
    }
};