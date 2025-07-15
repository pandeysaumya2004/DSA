class Solution {
public:
    bool closeStrings(string str1, string str2) {
    //     if(str1.length()!=str2.length()) return false;
    //    unordered_map<char,int>mp1,mp2;
    //     for(int i=0;i<str1.size();i++){
    //     mp1[str1[i]]++;
    //     mp2[str2[i]]++;
    //     }
    //     for(auto x :mp1){
    //         char ch=x.first;
    //         if(mp2.find(ch)==mp2.end()) 
    //         return false;
    //     }
    //     unordered_map<int,int>h1,h2;
    //     for(auto x:mp1){
    //         int freq=x.second;
    //         h1[freq]++;
    //     }
    //     for(auto x:mp2){
    //         int freq=x.second;
    //         h2[freq]++;
    //     }
    //     for(auto x:h1){
    //         int key=x.first;
    //         if(h2.find(key)==h2.end()) return false;
    //         if(h2[key]!=h1[key]) return false;
    //     }
    //     return true;
    if(str1.length()!=str2.length()) return false;
    unordered_map<char,int>m1,m2;
    for(int i=0;i<str1.length();i++){
        m1[str1[i]]++;
        m2[str2[i]]++;
    }
    for(auto x:m1){
        char ch=x.first;
        if(m2.find(ch)==m2.end()){
            return false;
        }
 }
    unordered_map<int,int>h1,h2;
    for(auto x:m1){
        int freq=x.second;
        h1[freq]++;
    }
for(auto x:m2){
    int freq=x.second;
    h2[freq]++;
}
for(auto x:h1){
    int key=x.first;
    if(h2.find(key)==h2.end()) return false;
    if(h2[key]!=h1[key]) return false;
}
return true;
    }
};