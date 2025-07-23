class Solution {
public:
// typedef pair<int,int>pi;
typedef pair<int,int>pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // int n=arr.size();
        // vector<int>ans(k);
        // if(x<arr[0]){
        //     for(int i=0;i<k;i++){
        //         ans[i]=arr[k];         
        //     }
        //     return ans;
        // }
        // if(x>arr[n-1]){
        //     int i=n-1;
        //     int j=k-1;
        //     while(j>=0){
        //         ans[i]=arr[j];
        //         i--;
        //         j--;

        //     }return ans;
        // }
        // int lo=0;
        // int hi=n-1;
        // bool flag= false;
        // int t=0;
        // int mid=-1;
        // while(lo<=hi){
        //     mid=lo+(hi-lo)/2;
        //     if(arr[mid]==x){
        //    flag =true;
        //    ans[t]=arr[mid];
        //    t++;
        //    break;
        //     }
        //     else if(arr[mid]>x) hi=mid-1;
        //     else lo=mid+1;
        // }
        // int lb=hi;
        // int ub=lo;
        // if(flag==true){
        //     lb=mid-1;
        //     ub=mid+1;
        // }
        // while(t<k&&(lb>=0)&&(ub<=n-1)){
        //     int d1=abs(x-arr[lb]);
        //     int d2=abs(x-arr[ub]);
        //     if(d1<=d2){
        //         ans[t]=arr[lb];
        //         lb--;
        //     }
        //     else{
        //     ans[t]=arr[ub];
        //     ub++;}
        //     t++;
            
        // }
        // if(lb<0){
        //     while(t<k){
        //         ans[t]=arr[ub];
        //         ub++;
        //         t++;
        //     }
        // }
        // if(ub>n-1){
        //     while(t<k){
        //         ans[t]=arr[lb];
        //         lb--;
        //         t++;
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;

        //Second option

    //     priority_queue<pi>pq;

    //     for(int ele :arr){
    //         int distance =abs(x-ele);
    //         pq.push({distance,ele});
    //         if(pq.size()>k) pq.pop();
    //     }
    //     vector<int>ans;
    //     while(pq.size()>0){
    //         int ele= pq.top().second;
    //         ans.push_back(ele);
    //         pq.pop();
            

    //     }
    //    sort(ans.begin(),ans.end());
    //     return ans;
 
    priority_queue<pi>pq;
    for(int ele:arr){
        int distance=abs(x-ele);
        pq.push({distance,ele});
        if(pq.size()>k) pq.pop();
    }
    vector<int>ans;
    while(pq.size()>0){
        int ele=pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
 return ans;
    }
};