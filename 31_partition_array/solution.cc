class Solution {
public:
  /**
   * @param nums: The integer array you should partition
   * @param k: An integer
   * @return: The index after partition
   */
  int partitionArray(vector<int> &nums, int k) {
    // write your code here
    if (nums.empty()) {
      return 0;
    }
    int low = 0, high = nums.size() - 1;
    for (; low <= high ;) {
      for (; low <= high && nums[low] < k; ++low) {}
      for (; low <= high && k <= nums[high]; --high) {}
      if (low <= high) {
        std::swap(nums[low], nums[high]);
      }
    }
    return low;
  }
};
