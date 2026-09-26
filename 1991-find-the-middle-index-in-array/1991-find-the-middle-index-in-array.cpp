class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum = sum + nums[i];
        }
        int leftsum = 0;
        for(int i = 0 ; i < n ; i++){
            if(leftsum == sum - leftsum - nums[i]){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};