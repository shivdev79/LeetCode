class Solution {
public:
    int minBitFlips(int start, int goal) {
        int store = start ^ goal;
        int x = countsetbits(store);
        return x;
    }
    int countsetbits(int n){
        int cnt = 0;
        while(n > 1){
            cnt += n & 1;
             n = n >> 1;
        }
        if( n == 1){
            cnt += 1;
        }
        return cnt;
    }
};