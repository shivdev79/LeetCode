class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n = nums.size();
       sort(nums.begin(), nums.end());
       int low = 0;
       int high= n -1;
       while(low < high){
        if(int sum = nums[low] + nums[high]== 0){
            return nums[high];
        }
        else if((nums[low] + nums[high]) < 0){
            low++;
        }
        else{
            high--;
        }
       }
       return -1;
    }
};