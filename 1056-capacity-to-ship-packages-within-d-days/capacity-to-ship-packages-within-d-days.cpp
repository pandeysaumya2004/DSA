class Solution {
public:
    bool check(int mid,vector<int>&weight,int days){
        int m=mid;
        int n=weight.size();
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=weight[i]) 
            {
                m-=weight[i];
            }
            else {
                m=mid;
                m-=weight[i];
                count++;

            }
        }
        if(count>days) return false;
        else return true;
    


    }



    int shipWithinDays(vector<int>& weights, int days) {
    int n=weights.size();
    int sum=0;
    int MAX=INT_MIN;
    for(int i=0;i<n;i++){
        if(MAX<weights[i]) MAX=weights[i];
        sum+=weights[i];
    }
    int lo = MAX;
    int hi = sum;
    int mini = sum;

    while(lo<=hi){
        int mid= lo+(hi-lo)/2;
        if(check(mid,weights,days)){
            mini=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    return mini;


    }
};