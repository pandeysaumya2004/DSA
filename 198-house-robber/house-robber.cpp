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

vector<int>dp;
class Solution {
public:
    int fdp(vector<int>& arr, int i) {
       if(i>=arr.size()) return 0;
       if(i==arr.size()-1) return arr[i];
       if(i==arr.size()-2) return max(arr[i],arr[i+1]);
       if(dp[i]!=-1) return dp[i];
       return dp[i]=max(arr[i]+fdp(arr,i+2),fdp(arr,i+1));
    }

    int rob(vector<int>& nums) {
       dp.clear();
       dp.resize(105,-1);
       return fdp(nums,0);
    }
};