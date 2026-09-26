class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for (int left = 0; left < n; left++) {
            int sum = 0;  // Har naye left ke liye sum reset karenge
            for (int right = left; right < n; right++) {
                sum += nums[right]; // Current element add karo sum mein
                if (sum == k) {
                    count++;  // Agar sum k ke barabar ho to count badhao
                }
            }
        }
        return count;
    }
};