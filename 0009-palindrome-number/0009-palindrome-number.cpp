class Solution {
public:
    bool isPalindrome(int x) {
        int orig = x;
        if(x < 0){
            return false;
        }
        long long  revn = 0;
        int lastdigit;
        while(x > 0){
            lastdigit = x % 10;
            x = x / 10;
            revn = (revn * 10) + lastdigit;
        }
        if(revn == orig){
            return true;
        }
        else{
            return false;
        }

    }
};