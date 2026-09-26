class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int s1 = firstindex(nums,target);
        int s2 = lastindex(nums,target);
        return {s1,s2};
        
    }
    int firstindex(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int ans2 = -1;
        while(start <= end)
        {
            int mid = (start+end)/2;
            if(nums[mid]==target){
                ans2 = mid;
                end = mid -1;
            }
            else if( nums[mid]< target)
            {
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return ans2;

    }
    int  lastindex(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size()-1;
        int ans1 = -1;
        while(start <= end)
        {
            int mid = (start+end)/2;
            if(nums[mid]==target){
                ans1 = mid;
                start= mid +1;
            }
            else if( nums[mid]< target)
            {
                start = mid +1;
            }
            else{
                end = mid -1;
            }
        }
        return ans1;
    }
};
