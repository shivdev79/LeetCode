class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set <vector<int>> s1;
        for(int i = 0; i < n ; i++){
            for(int j = i + 1; j < n ; j++){
                int left = j+1;
                int right = n - 1;
                while(left < right){
                    long long sum = (long long) nums[i] + nums[j] + nums[right] + nums[left];
                    if(sum == target){
                        s1.insert({nums[i],nums[j],nums[right],nums[left]});
                        left++;
                        right--;
                    }
                    else if(sum < target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        vector<vector<int>> ans(s1.begin(),s1.end());
        return ans;
    }
};