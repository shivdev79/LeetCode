class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x = count1(nums , goal);
        int y = count1(nums , goal - 1);
        int z = x - y;
        return z ;
    }
    int count1(vector <int> &nums , int goal){
        if(goal < 0){
            return 0;
        }
        int l = 0;
        int r = 0;
        int n = nums.size();
        int cnt = 0;
        long long  sum = 0;
        while( r < n ){
            sum += nums[r];
            while(sum > goal){
                sum = sum - nums[l];
                l = l + 1;
            }
            cnt = cnt + ( r - l + 1);
            r = r + 1;
        }
        return cnt;
    }
};