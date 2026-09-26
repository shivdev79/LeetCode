#include <map>
#include <cctype>
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map <char , int> store;
        for(char c : sentence){
            if(isalpha(c)){
                store[tolower(c)]++;
            }
        }
        if( store.size() == 26){
            return true;
        }
        else{
            return false;
        }
    }
};