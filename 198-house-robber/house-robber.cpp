// it wiil give TLE

// class Solution {
// public:
//     int f(vector<int>& arr, int i) {
//         if(i>=arr.size()) return 0;
//         if(i==arr.size()-1) return arr[i];
//         if(i==arr.size()-2) return max(arr[i],arr[i+1]);
//         return max(arr[i] + f(arr,i+2),f(arr,i+1));
//     }

//     int rob(vector<int>& nums) {
//         return f(nums, 0); // start from the beginning
//     }
// };

// DP(top to down)

// vector<int>dp;
// class Solution {
// public:
//     int fdp(vector<int>& arr, int i) {
//        if(i>=arr.size()) return 0;
//        if(i==arr.size()-1) return arr[i];
//        if(i==arr.size()-2) return max(arr[i],arr[i+1]);
//        if(dp[i]!=-1) return dp[i];
//        return dp[i]=max(arr[i]+fdp(arr,i+2),fdp(arr,i+1));
//     }

//     int rob(vector<int>& nums) {
//        dp.clear();
//        dp.resize(105,-1);
//        return fdp(nums,0);
//     }
// };


//  Third method


vector<int>dp;
class Solution {
public:
    vector<int>dp;
int fbu(vector<int>&arr){
    int n=arr.size();
    if(n==1) return arr[0];
    dp.clear();
    dp.resize(n);
    // base case
    dp[n-1]=arr[n-1];
    dp[n-2]=max(arr[n-1],arr[n-2]);
    for(int i=n-3;i>=0;i--){
        dp[i]=max(arr[i]+dp[i+2],0+dp[i+1]);
    }
    return dp[0];
}

int rob(vector<int>&nums){
    return fbu(nums);
}
    
};
