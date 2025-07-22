//  Problem: Max Consecutive Ones (Easy)
// LeetCode: https://leetcode.com/problems/max-consecutive-ones/
//  Count the longest streak of consecutive 1s in a binary array.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxStreak = 0;  // Stores the longest streak of 1s
        int current = 0;    // Counter for current streak

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                current++;            // Increase streak if 1 found
                maxStreak = max(maxStreak, current); // Update max if needed
            } else {
                current = 0;          // Reset streak on 0
            }
        }

        return maxStreak;
    }
};
// Time Complexity: O(n) - we traverse the array once
// Space Complexity: O(1) - no extra space used