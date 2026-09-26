class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector <int> ans = nums;
        sort(ans.begin() , ans.end());
        vector <int> rev = ans;
        reverse(rev.begin() , rev.end());
        if(ans == nums || nums == rev){
            return true;
        }
        return false;
    }
};