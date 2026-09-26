class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n = nums.size();
        vector <int> ans;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }

        }
        int c = ans.size();
        for(int i = 0 ; i < c ;i++){
            nums[i]=ans[i];
        }
        for(int i = c ; i < n ;i++){
            nums[i]=0;
        }
    }
};