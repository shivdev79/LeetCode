class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> brr(n);
        int p = 0;
        int q = 1;
        for(int i = 0 ;  i < n ; i++){
            if(nums[i]>0)
            {
                brr[p]=nums[i];
                p = p+2;
            }
            else{
                brr[q]=nums[i];
                q = q + 2;
            }
        }
        return brr;
        
    }
};