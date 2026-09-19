class Solution {
    public int[] singleNumber(int[] nums) {
        int xor = 0;

        // Step 1: XOR everything
        for (int num : nums) {
            xor ^= num;
        }

        // Step 2: rightmost bit where the two unique numbers differ
        int mask = xor & -xor;

        int a = 0;
        int b = 0;

        // Step 3: split into two groups
        for (int num : nums) {
            if ((num & mask) == 0) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        return new int[]{a, b};

    }
}