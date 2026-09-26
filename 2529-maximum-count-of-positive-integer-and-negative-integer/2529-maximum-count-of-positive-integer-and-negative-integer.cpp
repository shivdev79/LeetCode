class Solution {
public:
    int maximumCount(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> pos;
        vector <int> neg;
        vector <int> z;
        for(int i = 0 ;i < n ; i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else if( nums[i] < 0){
                neg.push_back(nums[i]);
            }
            
        }
        int p = pos.size();
        int r = neg.size();
        int x = max(p,r);
        return x;
    }
};