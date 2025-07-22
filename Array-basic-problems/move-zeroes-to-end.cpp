// LeetCode: Move Zeroes
// https://leetcode.com/problems/move-zeroes/
// Approach: Two-pointer technique to shift non-zero elements forward.

class Solution {
public:
void moveZeroes(vector<int>& nums) {
	int i = 0; // points to the position where next non-zero should go

	for (int j = 0; j < nums.size(); j++) {
		if (nums[j] != 0) {
			swap(nums[i], nums[j]); // bring non-zero to the front
			i++; // move i forward for next non-zero
		}
	}
};
// Time Complexity: O(n) - we traverse the array once
// Space Complexity: O(1) - in-place modification of the input array