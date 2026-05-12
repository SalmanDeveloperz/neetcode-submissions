class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // array is sorted
        // we hev to return the index of array having equal to target

        int n= numbers.size();
        for (int i=0 ; i<=n; i++){
            for (int j=i; j<n; j++){
                if (numbers[i]+ numbers[j]== target){
                    return {i+1, j+1};
                }
            }
        }
        // return 0;
    }
};
