class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        vector <int> store;
        for(int i = 0 ; i  < n ; i++){
            if(nums[i] % 2 == 0){
                store.push_back(nums[i]);
            }
        }
        int k = store.size();
        if(k == 0){
            return -1;
        }
        map <int, int> mpp1;
        for(auto it : store){
            mpp1[it]++;
        }
        int maxfreq = 0;
        int ans = 0;
        for(auto it : mpp1){
            if(it.second > maxfreq){
                maxfreq = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};