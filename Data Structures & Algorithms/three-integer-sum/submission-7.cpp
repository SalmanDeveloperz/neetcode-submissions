// The optimal way to solve this problem is implementing 2Sum in this problem

// For that we will simply do some mathematics that if:-

// Required that n1+ n2+ n3 = 0
//               n2+ n3 = -(n1)

//  Where Target= -(n1); and n2+ n3 is simply 2Sum

// Left side is simply calculated by 2Sum and then we'll compare that with target


class Solution {
public:

    vector<vector<int>> result;

    void twoSum(vector<int>& nums, int target, int i, int j ){
        while (i< j){
            // check if the target is maximum of sum
            if (nums[i]+ nums[j]> target){
                j--;
            }
            else if(nums[i]+ nums[j]< target){
                i++;
            }
            else{
                // We will simply check if either (i, j) are duplicates there and skip them
                while (i<j && nums[i]== nums[i+1]){
                    i++;
                }
                while (i<j && nums[j]== nums[j-1]){
                    j--;
                }
                result.push_back ({-target, nums[i], nums[j]}); 
                i++; // when find result then increase i definintely and decrease j too
                j--;

            
            }
        }
    }


    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        // firstly we will chcek if the elements size is less than 3 it's not be possible to find triplet

        if (n<3){
            return {};
        }

        // 1st: Sorting
        sort (nums.begin(), nums.end());

        //Fixing one element: n1
        for (int i=0; i<n; i++){  // for more optimze we can check it for (n-2) becuase we just consider i (n1) to 3rd last element in array not more than that for (int i=0; i<n-2; i++)

            if (i>0 && nums[i]== nums[i-1]){    // at 0 index there's nothing (i-1) so we'll check if n>0
                continue;
            }
            // if not we will fix it as a n1 number 
            int n1= nums[i];
            int target = -n1;

            // Now Let's do the 2 Sum Implementation
            // 2Sum function to get find n2 and n3
            twoSum(nums, target, i+1, n-1); // Why taking i+1 because we will take 2Sum after the target part (means i+1) and we know it will till the end (n-1)



        }
        return result;



    }
};
