class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp1;
        for(auto it : nums){
            mpp1[it]++;
        }
        for(auto it : mpp1){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};