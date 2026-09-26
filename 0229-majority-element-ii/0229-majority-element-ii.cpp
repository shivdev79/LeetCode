class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int d = n/3;
        vector <int> ans;
        unordered_map<int,int> freq;
        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(freq[nums[i]] > d){
                ans.push_back(nums[i]);
                freq[nums[i]] = -1;
            }
        }
        return ans;
        
    }
};