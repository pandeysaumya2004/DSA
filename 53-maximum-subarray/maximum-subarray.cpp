class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n=nums.size();
        // int maxi=INT_MIN;
        // int sum=0;
        // for(int i=0;i< n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         maxi=max(sum,maxi);
        //     }


        // }
        // return maxi;

        // int maxi=nums[0];
        // int current_sum=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     current_sum =max(nums[i],current_sum+nums[i]);
        //     maxi=max(maxi,current_sum);
        // }
        // return maxi;

       int maxi = nums[0];
       int current_sum = nums[0];
       for(int i=1;i<nums.size();i++){
        current_sum= max(nums[i],current_sum+nums[i]);
        maxi= max(maxi,current_sum);
       }
       return maxi;
    }
};