class Solution {
public:
    int maxArea(vector<int>& height) {
        int right=height.size()-1,left=0;
        int rem=0;
        while(left<right){
            int water= min(height[left],height[right])*(right-left);
             rem = max(rem,water);
            if(height[left]<height[right]) 
            left++;
            else right--;
        }
        return rem;
        
    }
};