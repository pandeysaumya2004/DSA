// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int lo=0;
//         int hi=n-1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//           if(nums[mid]==target) return true;
//           if(nums[hi]==nums[mid]&&(nums[lo]==nums[mid])){
//             hi--;
//             lo++;
//           }
//         else if(nums[mid]<=nums[hi]){
//             if(target>=nums[mid]&&(target<=nums[hi]))
//             //mid to hi
//             lo=mid+1;
//             else {
//                 hi=mid-1;
//             }
//             }
//         else 
//         // (nums[hi]<=nums[mid])
//         {
//             if(target>=nums[lo]&&(target<=nums[mid])){
//                 hi=mid-1;
//             }
//             else{
//                 lo=mid+1;
//             }



//             }

          
//         } 
//         return false;
//     }
// };


class Solution {
public:
    bool search(vector<int>& nums, int target) {
      int lo=0;
      int hi=nums.size()-1;
      while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) return true;
        if(nums[mid]==nums[hi] && (nums[mid]==nums[lo])){
            lo++;
            hi--;
        }
        else if(nums[mid]<=nums[hi]){
            if(nums[mid]<=target && target <= nums[hi]){
                lo=mid+1;
            }
            else {hi=mid-1;}
        }
        else{
            if(nums[mid]>=target && nums[lo]<=target){
                hi=mid-1;
            }
            else {
                lo=mid+1;
            }

        } 
      }
      return false;
        
      
    }
};