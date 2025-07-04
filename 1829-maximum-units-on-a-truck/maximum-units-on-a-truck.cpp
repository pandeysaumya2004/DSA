// bool cmp(vector<int>&a,vector<int>&b){
//     return a[1]>b[1];
// }
// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
//         sort(boxTypes.begin(),boxTypes.end(),cmp);
    
//     int profit=0;
//     for(int i=0;i<boxTypes.size();i++){
//         if(boxTypes[i][0]<=truckSize){
//             profit+=boxTypes[i][0]*boxTypes[i][1];
//             truckSize-=boxTypes[i][0];
//         }
//         else{
//             profit+=boxTypes[i][1]*truckSize;
//             truckSize=0;
//         }
//         if(truckSize==0) break;

//     }
//     return profit;
//     }
// };

bool cmp(vector<int>&a,vector<int>&b){
    return a[1]>b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int profit=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<=truckSize){
                profit+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
               profit+=boxTypes[i][1]*truckSize;
               truckSize=0;
            }
        }
        return profit;
    }
};