class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int curr = 0;
        int maxd = 0;
       for(int i = 0 ; i  < n ; i++){
        if(s[i] == '('){
            curr++;
            maxd = max(maxd, curr);
        }
        else if(s[i] == ')'){
            curr--;
        }
       }
       return maxd;
    }
};