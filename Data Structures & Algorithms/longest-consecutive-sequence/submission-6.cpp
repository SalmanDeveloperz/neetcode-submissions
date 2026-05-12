class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();

        // checking if the array is empty in case
        if (nums.empty()){
            return 0;
        }

        
        // most optimal way could be to sort the array and then check
        sort (nums.begin(), nums.end());

        // now it would seems like: [2,3,4,4,5,10,20]
        
        int count= 1;
        int maxCount= 1;
        for (int i=1; i<n; i++){
            // if the same number comes more than one time we just ignore that
            // we can use unordered_set here for checking if the duplicate exist or not
            // now we have probably [2,3,4,5,10,20]

            // unordered_set <int> number;
            // if (number.contains(nums[i])){
            //     continue;
            // }


            // checking duplicates
            if (nums[i]== nums[i-1]){
                continue;
            }


            // checking consecutive
            if (nums[i]== nums[i-1]+1){
                count++;
            }
            else{
                count=1;
            }
            maxCount= max(count, maxCount);
            

        }
        return maxCount;
    }
};
