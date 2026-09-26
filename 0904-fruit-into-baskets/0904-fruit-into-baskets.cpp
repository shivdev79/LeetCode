class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mpp;
        int l = 0;
        int r = 0;
        int k = 2;
        int n = fruits.size();
        int maxlen = 0;
        while( r < n){
            mpp[fruits[r]]++;
            if(mpp.size() > k){
                while(mpp.size() > k){
                    mpp[fruits[l]]--;
                    if(mpp[fruits[l]] == 0){
                        mpp.erase(fruits[l]);
                    }
                    l = l + 1;
                }
            }
            if(mpp.size() <= k){
                int len =  r - l + 1;
                maxlen = max(maxlen , len);
            }
            r = r + 1;
        }
        return maxlen;
    }
};