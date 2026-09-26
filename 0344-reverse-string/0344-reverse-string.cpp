class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int s1 = 0;
        int e = n - 1;
        while( s1 < e){
            swap(s[s1++],s[e--]);
        }


    }
};