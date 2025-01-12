class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
		int sum = n * (n + 1) / 2;
		int temp_sum = 0;
		for (int i = 0; i < n; i++) {
			temp_sum += nums[i];
		}

		int diff = sum - temp_sum;
		return diff;
    }
};