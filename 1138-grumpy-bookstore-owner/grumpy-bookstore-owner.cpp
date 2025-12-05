class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // int k=minutes;
        // vector<int>&arr=customers;
        // int prevsum=0;
        // int n=arr.size();
        // for(int i=0;i<k;i++){
        //     if(grumpy[i]==1)
        //     prevsum+=arr[i];
        // }
        // int maxsum=prevsum;
        // int maxidx=0;
        // int i=1;
        // int j=k;
        // while(j<n){
        //     int currsum=prevsum;
        //     if(grumpy[j]==1) currsum+=arr[j];
        //     if(grumpy[i-1]==1) currsum-=arr[i-1];
        //     if(maxsum<currsum){
        //         maxsum=currsum;
        //         maxidx=i;
        //     }
        // prevsum=currsum;
        // i++;
        // j++;
        
//         for(int i=maxidx;i<maxidx+k;i++){
//             grumpy[i]=0;
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             if(grumpy[i]==0) sum+=arr[i];
//         }
// return sum;
int k = minutes;
vector<int>&arr = customers;
int n =arr.size();
int prevloss = 0;
for(int i=0;i<k;i++){
    if(grumpy[i]==1)
     prevloss += arr[i];
}
int maxloss = prevloss;
int maxidx = 0;
int i =1;
int j =k;
while(j<n){
    int currloss = prevloss;
    if(grumpy[j] == 1) currloss+= arr[j];
    if(grumpy[i-1] == 1) currloss-= arr[i-1];
    if(maxloss < currloss) {
        maxloss = currloss;
        maxidx = i;
    }
    prevloss= currloss;
    i++;
    j++;
}

for(int i = maxidx; i < maxidx+k;i++){
    grumpy[i]=0;}
    int sum = 0;
    for(int i=0 ;i<n;i++){
        if( grumpy[i]==0) sum+=arr[i];
    


}

   return sum;

    }
};