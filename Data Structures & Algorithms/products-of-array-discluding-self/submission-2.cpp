class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> newArray;

        int product = 1;
        int zeroCount = 0;

        // Step 1: compute product of non-zero elements + count zeros
        for (int i = 0; i < size; i++) {
            if (nums[i] == 0) {
                zeroCount++;
                continue;
            }
            product *= nums[i];
        }

        // Step 2: build result
        for (int i = 0; i < size; i++) {

            if (zeroCount > 1) {
                newArray.push_back(0);
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0)
                    newArray.push_back(product);
                else
                    newArray.push_back(0);
            }
            else {
                newArray.push_back(product / nums[i]);
            }
        }

        return newArray;
    }
};