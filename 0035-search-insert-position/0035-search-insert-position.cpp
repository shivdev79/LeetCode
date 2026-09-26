class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int start = 0;
        int end = nums.size() - 1;
        int mid = (start +end)/2;
        while(start<=end)
        {
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = (start + end)/2;
        }
        return start;
    }    
};