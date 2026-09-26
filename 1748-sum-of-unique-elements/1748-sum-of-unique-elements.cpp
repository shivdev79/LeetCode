class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map <int , int> mpp;
        for(auto it: nums){
            mpp[it]++;
        }
        int sum = 0;
        for(auto it : mpp){
            if(it.second == 1){
                sum = sum + it.first;
            }
        }
        return sum;
    }
};