class Solution {
public:
    bool isAnagram(string s, string t) {
        map < char , int > store1;
        map < char , int > store2;
        for(char c : s){
            store1[c]++;
        }
        for(char c : t){
            store2[c]++;
        }
        if(store1 == store2){
            return true;
        }
        return false;
    }
};