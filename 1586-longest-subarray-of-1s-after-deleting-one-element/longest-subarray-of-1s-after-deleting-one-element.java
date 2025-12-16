class Solution {
    public int longestSubarray(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=0;
        int maxlen=0;
        int zeroPros=-1;
        int count=0;
        while(j<n){
            int prev = zeroPros;
            if(nums[j]==0){
                count++;
                zeroPros=j;
            }
            if(count<=1) j++;
            else {
                maxlen =Math.max(maxlen,j-i);
                i=prev+1;
                count--;
                j++;
            }   
        }
        maxlen=Math.max(maxlen,j-i);

        return maxlen - 1;
        // int k=1;
        // int n=nums.length;
        // int zeroPros= -1;
        // int i=0;
        // int j=0;
        // int maxlen=0;
        // int count=0;
        // while(j<n){
        //     int prev=zeroPros;
        //     if(nums[j]==0){
        //         count++;
        //         zeroPros=j;
        //     }
        //     if(count<=1) j++;
        //     else{
        //         maxlen=Math.max(maxlen,j-i);
        //         i=prev+1;
        //         count--;
        //         j++;
        //     } 

        // }
        //  maxlen=Math.max(maxlen,j-i);
        
        //  return maxlen - 1;
        
    }
}