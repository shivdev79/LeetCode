class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        map < char , int > store;
        for(char c : s){
            store[c]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(store[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};