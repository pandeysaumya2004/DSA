// class Solution {
// public:
//     bool check( long long mid,vector<int>& time, int totalTrips){
//         int n=time.size();
//         long long trips=0;
//         for(int i=0;i<n;i++){
//             trips+=mid/(long long)time[i];
//         }
//         if(trips<(long long)totalTrips) return false;
//         else return true;
//     }
//     long long minimumTime(vector<int>& time, int totalTrips) {
        
//         int n=time.size();
//         int mx=-1;
//         for(int i=0;i<n;i++){
//             mx=max(mx,time[i]);
//         }
//         long long lo=1;
//         long long hi=(long long)mx*(long long)totalTrips;
//         long long ans=-1;
//         while(lo<=hi){
//             long long mid=lo+(hi-lo)/2;
//             if(check(mid,time,totalTrips)){
//                 ans=mid;
//                 hi=mid-1;
//             }
//             else{
//                 lo=mid+1;
//             }
//         } 
//     return ans;
//     }
// };


class Solution {
public:
    // Helper function to check if mid time allows enough trips
    bool check(long long mid, vector<int>& time, int total) {
        long long trips = 0;
        for (int i = 0; i < time.size(); i++) {
            trips += mid / (long long)time[i];
        }
        return trips >= (long long)total;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int mx = -1;
        for (int i = 0; i < time.size(); i++) {
            mx = max(mx, time[i]); // fixed shadowing: removed "int"
        }

        long long lo = 1;
        long long hi = (long long)mx * (long long)totalTrips;
        long long ans = -1; // declare ans here

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            if (check(mid, time, totalTrips)) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        return ans; // move return here
    }
};
