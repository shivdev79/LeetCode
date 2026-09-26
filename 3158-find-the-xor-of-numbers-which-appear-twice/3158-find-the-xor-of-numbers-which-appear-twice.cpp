class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map <int,int> freq;
        vector <int> ans;
         int result = 0;
        for(int i = 0  ; i < nums.size()  ; i++){
            freq[nums[i]]++;
        }
        for( auto it :freq){
            if(it.second == 2){
               result ^= it.first;
            }
        }
       
        // for(int i = 0 ; i <  ans.size() ; i++){
        //     result = result^ans[i];
        // }
        return result;
    }
};