class Solution {
public:
    int numRabbits(vector<int>& answer) {
        unordered_map<int,int>mp;
        int result=0;
        for(int i=0;i<answer.size();i++){
            if(!mp[answer[i]+1]){
                result+=answer[i]+1;
                if(answer[i]==0) continue;
                mp[answer[i]+1]=1;
            }
            else{
                mp[answer[i]+1]++;
                int key=answer[i]+1;
                int val=mp[key];
                if(key==val){
                    mp.erase(key);
                }

            }

        } return result;
    }
};