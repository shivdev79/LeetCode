class Solution {
public:
    int alternateDigitSum(int n) {
        vector <int> ans;
        while(n > 0){
            int digit = n % 10;
            ans.push_back(digit);
            n = n /10;
        }
        reverse(ans.begin() , ans.end());
        int sum  = 0;
        for(int i = 0 ; i < ans.size() ; i++){
            if( i % 2 == 0){
                sum = sum + ans[i];
            }
            else{
                sum = sum - ans[i];
            }
        }
        return sum;
    }
};