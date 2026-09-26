class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int maxdiff = INT_MAX;
        int x = INT_MAX;
        int y = INT_MAX;
        int z = INT_MAX;
        for(int i = 0;i  < n ; i++)
        {
            int start = i + 1;
            int end = n -1;
            while(start < end){
                int sum = nums[i] + nums[start] + nums[end];
                int diff = abs(sum - target);
                if(sum == target){
                    return sum;
                }
                if(diff < maxdiff){
                    maxdiff = diff;
                    x = nums[i];
                    y = nums[start];
                    z = nums[end];
                }
                if(sum  < target){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        int r = x + y + z;
        return r;
    }
};