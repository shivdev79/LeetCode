class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector <int> ans;
        for(int i = 0 ; i < n ;i++){
            ans.push_back(nums1[i]);
        }
        for(int i = 0 ; i < m ;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int size = ans.size();
        int mid = size/2;
        if(size % 2 != 0){
            return ans[mid];
        }
        else{
            return(ans[mid-1] + ans[mid])/2.0;
        }
    }
};