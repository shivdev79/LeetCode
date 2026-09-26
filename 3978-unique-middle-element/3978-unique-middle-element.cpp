class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n /2;
        map <int, int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        for(auto it : mpp){
            if(it.second == 1 && it.first == nums[mid]){
                return true;
            }
        }
        return false;
    }
};