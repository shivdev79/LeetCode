class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        vector <int> current;
        vector<vector<int>> store;
        subsequences(0,nums,current, store , n);
        set<vector<int>> rs1(store.begin() , store.end());
        vector<vector<int>> share(rs1.begin() , rs1.end());
        return share;

    }
    void subsequences(int index , vector <int> &nums , vector <int> &current , vector<vector<int>> &store , int n){
        if(index >= n ){
            store.push_back(current);
            return ;
        }
        current.push_back(nums[index]);
        subsequences(index + 1 , nums , current , store , n );
        current.pop_back();
        subsequences(index + 1 , nums , current , store , n);

    }
};