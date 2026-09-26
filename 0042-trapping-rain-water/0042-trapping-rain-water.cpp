class Solution {
public:
vector <int> getleftmax(vector <int> &height , int &n){
    vector <int> ans(n);
    int maxi = 0;
    for(int i = 0 ; i < n ; i++){
        maxi = max(maxi , height[i]);
        ans[i] = maxi;
    }
    return ans;
}
vector <int> getrightmax(vector <int> &height , int &n){
    vector <int> ans(n);
    int maxi = 0;
    for(int i = n-1 ; i >= 0 ; i--){
        maxi = max(maxi , height[i]);
        ans[i] = maxi;
    }
    return ans;
}
    int trap(vector<int>& height) {
      int n = height.size();
      vector <int> leftmax = getleftmax(height , n);
      vector <int> rightmax = getrightmax(height , n);
      int height1 = 0;
      int sum = 0;
      for(int i = 0 ; i < n ; i++){
        height1 = min(leftmax[i] , rightmax[i]) - height[i];
        sum = sum + height1;
      }
      return sum;
    }
};