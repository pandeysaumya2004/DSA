// class Solution {
// public:
// void combination(vector<vector<int>>&ans,vector<int>v,vector<int>& candidates,int target,int idx){
//     if(target==0){
//         ans.push_back(v);
//         return ;
//     }
//     if(target<0) return;
//     for(int i=idx;i<candidates.size();i++){
//         v.push_back(candidates[i]);
//         combination(ans,v,candidates,target-candidates[i],i);
//         v.pop_back();

//     }
// }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>>ans;
//         vector<int>v;
//         combination(ans,v,candidates,target,0);
//         return ans; 
//     }
// };


// class Solution {
// public:
//    vector<vector<int>>result;
//    void f(vector<int>&candidates,int t,int idx,vector<int>&subset){
//     if(t==0){
//         result.push_back(subset);
//         return;
//     }
//     if(idx==candidates.size()) return;
//     if(candidates[idx]<=t){
//         subset.push_back(candidates[idx]);
//           f(candidates,t-candidates[idx] ,idx,subset);
//           subset.pop_back();
//     }
   
//     f(candidates,t,idx+1,subset);
    
//    }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         sort(candidates.begin(),candidates.end());
//         vector<int>subset;
//         result.clear();
//         f(candidates,target,0,subset);
//         return result;
//     }
// };
class Solution {
public:
vector<vector<int>>result;
void f(vector<int>&candidates,int t,int idx, vector<int>&subset){
    if(t==0){
        result.push_back(subset);
        return;
    }
    if(idx == candidates.size()) return;
    if(candidates[idx]<=t){
        subset.push_back(candidates[idx]);
        f(candidates,t-candidates[idx],idx,subset);
        subset.pop_back();

    }
    f(candidates,t,idx+1,subset);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>subset;
        result.clear();
        f(candidates,target,0,subset);
        return result;
      
    }
};