class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() , cost.end());
        int n = cost.size();
        int i = n-1;
        int min_amt = 0;
        while(i >= 0 ){
            min_amt += cost[i];
            i--;
            if(i >= 0){
                min_amt += cost[i];
                i--;
            }
            i--;
        }
        return min_amt;
    }
};