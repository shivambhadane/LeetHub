class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        int firstIndex = -1; // Initialize firstIndex to -1 (indicating not found)

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                firstIndex = mid; // Update firstIndex  here we update it
                end = mid - 1; // Search in the left half for earlier occurrence
            } else if (nums[mid] < target) {
                start = mid + 1; // Search in the right half
            } else {
                end = mid - 1; // Search in the left half
            }
        }
        start = 0;
        end = nums.length-1;
        int lastIndex = -1;
         while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                lastIndex = mid; // Update lastIndex here we update it
                start = mid + 1; // Search in the right half for later occurrence
            } else if (nums[mid] < target) {
                start = mid + 1; // Search in the right half
            } else {
                end = mid - 1; // Search in the left half
            }
        }
        return new int[]{firstIndex, lastIndex};

    }
}