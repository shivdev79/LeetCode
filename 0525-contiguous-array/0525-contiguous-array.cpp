class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> first(2*n + 1, -2);

        int sum = 0;
        int maxlen = 0;
        int offset = n;

        first[offset] = -1;   // sum = 0 occurs before array starts

        for(int i = 0; i < n; i++) {

            if(nums[i] == 0)
                sum -= 1;
            else
                sum += 1;

            if(first[sum + offset] != -2) {
                maxlen = max(maxlen, i - first[sum + offset]);
            }
            else {
                first[sum + offset] = i;
            }
        }

        return maxlen;
    }
};
