class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int sum=0;
        int minsize=INT_MAX;
        int size;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                size=j-i+1;
                minsize=min(minsize,size);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minsize==INT_MAX) return 0;
        return minsize;
    //   int n=nums.size();
    //   int i=0;
    //   int j=0;
    //   int sum=0;
    //   int minsize=INT_MAX;
    //   int size;
    //   while(j<n){
    //     sum+=nums[j];
    //     while(sum>=target){
    //         size=j-i+1;
    //         minsize=min(minsize,size);
    //         sum-=nums[i];
    //         i++;
    //     }
    //     j++;
    //   }
    //   if(minsize==INT_MAX ) return 0;
    //   return minsize;
    }
};