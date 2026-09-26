class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0 ;
        int n = nums.size();
        int zeros = 0;
        int len = 0 ;
        int maxlen = 0;
        while( r < n){
            if(nums[r] == 0){
                zeros++;
            }
            while(zeros > k){
                if(nums[l] == 0){
                    zeros = zeros - 1;
                }
                l++;
            }
            int len = r - l + 1;
            maxlen = max(maxlen , len);
            r++;
        }
        return maxlen;
    }
};