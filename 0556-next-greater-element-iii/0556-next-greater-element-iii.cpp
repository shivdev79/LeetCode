class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        
        // use STL next_permutation
        if(next_permutation(s.begin(), s.end())) {
            long long val = stoll(s); // use long long to prevent overflow
            if(val > INT_MAX) return -1; // must fit in 32-bit int
            return (int)val;
        }
        
        return -1; // no greater permutation exists
    }
};
