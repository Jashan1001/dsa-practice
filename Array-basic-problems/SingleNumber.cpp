// LeetCode 136. Single Number
// https://leetcode.com/problems/single-number/

// Approach: Bit Manipulation using XOR
// XOR trick:
// 1. a ^ a = 0 (XOR of a number with itself is 0)
// 2. a ^ 0 = a (XOR of a number with 0 is the number itself)
// So if we XOR all numbers, the duplicate ones cancel out
// and only the single number remains

// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
