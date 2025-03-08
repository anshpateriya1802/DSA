class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int minWhite = INT_MAX, whiteCount = 0;
            
            // Count 'W' in the first window of size k
            for (int i = 0; i < k; i++) {
                if (blocks[i] == 'W') whiteCount++;
            }
            minWhite = whiteCount;
            
            // Slide the window across the string
            for (int i = k; i < blocks.size(); i++) {
                if (blocks[i] == 'W') whiteCount++;       // Add new element to window
                if (blocks[i - k] == 'W') whiteCount--;   // Remove old element from window
                
                minWhite = min(minWhite, whiteCount); // Update minimum white count
            }
            
            return minWhite;
        }
    };