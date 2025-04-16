class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>v;
        // for(int i=0;i<=nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target)
        //         {  v.push_back(i);
        //          v.push_back(j);
        //          return v;
        //         }
        //     }
        // } return v;


        //Second method

    //     vector<int>ans;
    //     int n=nums.size();
    //     unordered_map<int,int>m;
    //     for(int i=0;i<n;i++){
    //         int rem=target-nums[i];
    //         if(m.find(rem)!=m.end()){
    //             ans.push_back(m[rem]);
    //             ans.push_back(i);

    //         }
    //         else m[nums[i]]=i;
    //     }
    
    // return ans;

    vector<int>ans;
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int rem=target-nums[i];
        if(m.find(rem)!=m.end()){
            ans.push_back(m[rem]);
            ans.push_back(i);
        }
        else m[nums[i]]=i;
    }
    return ans;
    }
};