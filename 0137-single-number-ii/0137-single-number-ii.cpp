class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        set <int> s1;
        for(int i = 0 ; i < n ; i++){
            s1.insert(nums[i]);
        }
        vector <int> set1(s1.begin() , s1.end());
        long long sum = 0;
        for(int i = 0 ; i < set1.size() ; i++){
            sum = sum + set1[i];
        }
        long long sumarray = 0;
        for(int i = 0 ; i < n ; i++ ){
            sumarray = sumarray + nums[i];
        }
        long long z = ( 3*sum - sumarray)/2;
        return z;
    }
};