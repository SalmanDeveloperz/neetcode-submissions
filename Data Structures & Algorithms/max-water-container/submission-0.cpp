class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int i=0;
        int j= n-1;
        int maxHeight=0;

        while (i<j){
            // finding width    :: Width= j-1   (Means from the last to the current)
            int w= j-i;

            // finding height   :: height= min (height[i], height[j])
            int h= min (heights[i], heights[j]);

            // finding area     :: Area= Width* Height
            int area= w * h;
            
            // finding maximum height
            maxHeight= max(maxHeight, area);

            if (heights[i]> heights[j]){
                j--;
            }
            else
                i++;

        }
        return maxHeight;
    }
};
