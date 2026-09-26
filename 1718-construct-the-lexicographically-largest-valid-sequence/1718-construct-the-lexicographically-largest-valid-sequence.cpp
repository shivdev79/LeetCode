class Solution {
public:
    int sequenceLength;
    vector<int> counter, resultSequence;

    // Function to construct the Distanced Sequence based on the given integer `n`.
    vector<int> constructDistancedSequence(int n) {
        sequenceLength = n;
        counter.resize(n * 2, 2); // Initializing counter with '2' to track the availability of pairs.
        resultSequence.resize(n * 2); // Creating a result sequence array with 2 * n size.
        counter[1] = 1; // 1 only appears once in the sequence.
      
        // Start the Depth First Search from the first position.
        dfs(1);

        // Compile the result without the zeroth position (1-indexed).
        vector<int> ans;
        for (int i = 1; i < n * 2; ++i) {
            ans.push_back(resultSequence[i]);
        }
        return ans;
    }

    // Recursive function to fill the sequence with valid numbers at the correct distances.
    bool dfs(int position) {
        // Base case: if the end of the sequence is reached, the sequence is valid. 
        if (position == sequenceLength * 2) return true;

        // Skip already filled positions.
        if (resultSequence[position]) return dfs(position + 1);

        // Try to place numbers starting from the largest.
        for (int i = sequenceLength; i > 1; --i) {
            // Check if the number is available and the corresponding paired position is not filled.
            if (counter[i] && position + i < sequenceLength * 2 && !resultSequence[position + i]) {
                resultSequence[position] = resultSequence[position + i] = i; // Place the number at both positions.
                counter[i] = 0; // Mark the number as used.

                if (dfs(position + 1)) return true; // Recursively continue to fill the next position.

                // Backtrack if the placement does not lead to a solution.
                counter[i] = 2;
                resultSequence[position] = resultSequence[position + i] = 0;
            }
        }

        // Special case for '1' as it appears only once.
        if (counter[1]) {
            resultSequence[position] = 1; // Place '1' at the current position.
            counter[1] = 0; // Mark '1' as used.

            if (dfs(position + 1)) return true; // Recursively continue with the next position.

            // Backtrack if placement of '1' does not lead to solution.
            counter[1] = 1;
            resultSequence[position] = 0;
        }

        // If no placement is possible, return false for backtracking.
        return false;
    }
};