class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target = 0;
        set <vector<int>> s1;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int left = i + 1;
            int right = n -1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    s1.insert({nums[i], nums[left], nums[right]});
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
        vector <vector<int>> ans(s1.begin(), s1.end());
        return ans;
    }
};