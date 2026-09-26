class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map <int , int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }
        int maxfreq = 0;
        for(auto it : mpp){
            maxfreq = max(maxfreq , it.second);
        }
        int ans = 0;
        for(auto it : mpp){
            if(it.second == maxfreq){
                ans += it.second;
            }
        }
        return ans;
    }
};