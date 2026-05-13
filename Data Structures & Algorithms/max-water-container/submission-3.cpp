// calculate the area
// area= height * width
// find out the maximum area for maximum water

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int i=0;
        int j= n-1;
        int maxWater= 0;

        while (i<j){
            int width= j-i;
            int length= min (heights[i], heights[j]);
            int area= width* length;
            maxWater= max(maxWater, area);
            if (heights[i]> heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }
};
