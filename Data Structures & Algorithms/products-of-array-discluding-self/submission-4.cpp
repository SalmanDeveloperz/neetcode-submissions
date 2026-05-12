class Solution {
public:

// Let's suppose we have an array: [1, 2, 3, 4]
// We have the left and right fix element to whom we can add and then finally get the prodcut

// left []

    vector<int> productExceptSelf(vector<int>& nums) {
        // we are taking the prodcut of left and right in advance
        int size= nums.size();
        vector<int> left(size);
        vector<int> right (size);

        // we know that on the most left index it would be always 1
        // and same as for the most right element it would also be 1
        left[0]= 1;
        right [size-1]= 1;

        // Populating left element
        for (int i=1; i<size; i++){
            left[i]= nums[i-1]* left[i-1];
        }
        
        // Populating right element
        // Loop will run in reverse order from right to left
        for (int i=size-2; i>=0; i--){
            right[i]= nums[i+1]* right[i+1];

        }

        // Combining left and right to get the product array
        vector<int> result(size);
        for (int i=0; i<size; i++){
            result[i]= left[i]* right[i];
        }

        return result;

    }
};