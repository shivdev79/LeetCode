class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector <int> store;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
                store.push_back(nums[i]);
            }
        }
        if(store.size() == 0){
            return 0;
        }
        int s = store.size();
        int sum = 0;
        for(int i = 0 ; i < s ; i++){
            sum = sum + store[i];
        }
        int ans = sum/s;
        return ans;
    }
};