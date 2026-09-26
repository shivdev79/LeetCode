class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        vector<int> nge(n, -1);

        for(int i = 0; i < n; i++) {
            // find nums1[i] in nums2
            int pos = 0;
            for(; pos < nums2.size(); pos++) {
                if(nums2[pos] == nums1[i]) break;
            }

            // search to the right in nums2
            for(int j = pos + 1; j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {  // strictly greater
                    nge[i] = nums2[j];
                    break;
                }
            }
        }

        return nge;
    }
};
