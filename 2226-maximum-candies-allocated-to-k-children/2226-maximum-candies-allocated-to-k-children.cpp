class Solution {
public:
    int maximumCandies(vector<int>& candies, long long totalChildren) {
        // Initialize the search range
        int minCandies = 0, maxCandies = 1e7;

        // Perform a binary search to find the maximum number of candies
        // that can be distributed to each child
        while (minCandies < maxCandies) {
            // Calculate the mid-point for the current search range
            int mid = (minCandies + maxCandies + 1) >> 1;

            // Counter to record the total number of children we can distribute
            // candies to with the current 'mid' number of candies per child
            long long childCount = 0;

            // Iterate through each pile of candies
            for (int candiesInPile : candies) {
                // Increment the count by the number of children we can satisfy
                // with the current pile using 'mid' candies per child
                childCount += candiesInPile / mid;
            }

            // If we can give at least 'mid' candies to 'totalChildren' or more,
            // adjust the lower bound of the search range
            if (childCount >= totalChildren) {
                minCandies = mid;
            } else {
                // Otherwise, reduce the upper bound of the search range
                maxCandies = mid - 1;
            }
        }

        // After narrowing down the search range, 'minCandies' will hold the
        // maximum number of candies that can be distributed to each child
        return minCandies;
    }
};