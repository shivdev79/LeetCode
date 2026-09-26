class Solution {
public:
    bool isIsomorphic(string s, string t){
        char arr1[128] = {0};
        char arr2[128] = {0};
        int len = s.size();
        for(int i = 0 ; i < len ; i++)
        {
            if(arr1[s[i]] != arr2[t[i]]){
                return false;
            }
            arr1[s[i]] = i+1;
            arr2[t[i]] = i+1;
        }
        return true;
    }
};