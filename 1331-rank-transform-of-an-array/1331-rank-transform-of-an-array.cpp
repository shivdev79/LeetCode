class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mpp;
        vector<pair<int, int>> v1;
        int n = arr.size();
        vector<int> final(n);
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        int rank = 1;
        for (auto it : temp) {
            if (mpp.find(it) == mpp.end()) {
                mpp[it] = rank;
                rank = rank + 1;
            }
            
        }
        for (int i = 0; i < n; i++) {
            final[i] = mpp[arr[i]];
        }
        return final;
    }
};