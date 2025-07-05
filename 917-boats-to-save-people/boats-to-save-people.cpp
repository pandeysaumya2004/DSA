class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
    // sort(people.begin(),people.end());
    // int i=0;int j=people.size()-1;
    // int bt=0;
    // while(i<=j){
    //     if(people[i]+people[j]<=limit){
    //         i++;
    //         j--;
    //         bt++;
    //     }
    //     else{
    //         j--;
    //         bt++;
    //     }
    // }
    // return bt;
   sort(people.begin(),people.end());
   int i=0,j=people.size()-1;
   int bt=0;
  while(i<=j){
    if(people[i]+people[j]<=limit){
        bt++;
        i++;
        j--;
    }
    else{
        j--;
        bt++;
    }
  } return bt;

    }
};