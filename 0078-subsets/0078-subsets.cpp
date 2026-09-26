class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <int> ans;
        vector<vector<int>> storebig;
        int n = nums.size();
        sequences(0 , nums  , ans , storebig , n);
        return storebig;

    }
    void sequences(int index , vector <int> &nums , vector <int> &ans ,  vector<vector <int>> &storebig , int n ){
        if(index >= n){
            storebig.push_back(ans);
            return;
        }
        ans.push_back(nums[index]);
        sequences(index + 1  , nums , ans , storebig , n);
        ans.pop_back();
        sequences( index + 1 , nums , ans , storebig , n);
    }
};