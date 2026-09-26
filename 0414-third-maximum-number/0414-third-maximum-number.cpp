class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<long long> s;  // use long long to handle INT_MIN safely
        for (auto num : nums) {
            s.insert(num);
            if (s.size() > 3) {
                s.erase(s.begin()); // remove smallest element if size > 3
            }
        }
        if (s.size() < 3) {
            // Return maximum element
            return *s.rbegin();
        } else {
            // Return 3rd maximum element (smallest element in the set of size 3)
            return *s.begin();
        }
    }
};
