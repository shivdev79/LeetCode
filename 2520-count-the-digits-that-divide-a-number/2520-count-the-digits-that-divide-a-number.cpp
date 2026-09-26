class Solution {
public:
    int countDigits(int num) {
        int original = num;
        vector <int> store;
        int lastdigit;
        while( num > 0){
            lastdigit = num % 10;
            store.push_back(lastdigit);
            num = num / 10;
        }
        int cnt = 0;
        for(int i = 0 ; i < store.size() ; i++){
            if(original % store[i] == 0){
                cnt++;
            }
        }
        return cnt;
    }
};