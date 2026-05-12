class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // get the size
        int n= nums.size();

        // checking for the empty array

        if (nums.empty()){
            return 0;
        }
        
        int count= 1;
        int maxCount= 1;
        // sorting
        sort(nums.begin(), nums.end());  // [2,3,4,4,5,10,20]

        // we have to check and ignore the duplicates
        for (int i=1; i<n; i++){
            if (nums[i]== nums[i-1]){
                continue;
            }

            // check the consecutive elements
            if (nums[i]== nums[i-1]+1){
                count++;
            }
            else{
                count=1;
            }

            // [0,1,2,5,6,7,8]
            maxCount= max(count, maxCount);
        
            // return the maximum consecutive elements

        }
        return maxCount;
    }
};
