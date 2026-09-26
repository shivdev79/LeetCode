class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int> store;
        for (int i = 0; i < s.size(); i++) {
            store[s[i]]++;
            if (store[s[i]] == 2) {
                return s[i];  
            }
        }
        return '\0'; 
    }
};
