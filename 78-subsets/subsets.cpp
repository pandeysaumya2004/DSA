class Solution {
public:
// void helper(vector<int>ans,vector<vector<int>>&finalans,vector<int>&nums,int idx){
//     if(idx==nums.size()){
//         finalans.push_back(ans);
//         return;

//     }
//     helper(ans,finalans,nums,idx+1);
//     ans.push_back(nums[idx]);
// helper(ans,finalans,nums,idx+1);
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>ans;
//         vector<vector<int>>finalans;
//         helper(ans,finalans,nums,0);
//         return finalans;
//     }
void helper(vector<int>ans,vector<vector<int>>&finalans,vector<int>&nums,int idx){
    if(idx==nums.size()){
        finalans.push_back(ans);
        return;
    }
    helper(ans,finalans,nums,idx+1);
    ans.push_back(nums[idx]);
    helper(ans,finalans,nums,idx+1);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<int>ans;
    vector<vector<int>>finalans;
    helper(ans,finalans,nums,0);
    return finalans;
}
};


