class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right;
        stack<pair<int, int>> st;
        for (int i = n - 1; i >= 0; i--) {
            if (st.size() == 0) {
                right.push_back(n);
            } else if (st.size() > 0 && st.top().first < heights[i]) {
                right.push_back(st.top().second);
            } else if (st.size() > 0 && st.top().first >= heights[i]) {
                while (st.size() > 0 && st.top().first >= heights[i]) {
                    st.pop();
                }
                if (st.size() == 0) {
                    right.push_back(n);
                } else {
                    right.push_back(st.top().second);
                }
            }
            st.push({heights[i], i});
        }
        reverse(right.begin(), right.end());
        vector<int> left;
        stack<pair<int, int>> st1;
        for (int i = 0; i < n; i++) {
            if (st1.size() == 0) {
                left.push_back(-1);
            } else if (st1.size() > 0 && st1.top().first < heights[i]) {
                left.push_back(st1.top().second);
            } else if (st1.size() > 0 && st1.top().first >= heights[i]) {
                while (st1.size() > 0 && st1.top().first >= heights[i]) {
                    st1.pop();
                }
                if (st1.size() == 0) {
                    left.push_back(-1);
                } else {
                    left.push_back(st1.top().second);
                }
            }
            st1.push({heights[i], i});
        }
        vector<int> area(n);
        for (int i = 0; i < n; i++) {
            area[i] = (right[i] - left[i] - 1) * heights[i];
        }
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, area[i]);
        }
        return maxi;
    }
};