class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // clamp to maximum
        }

        // Normal case
        return dividend / divisor;
    }
};
