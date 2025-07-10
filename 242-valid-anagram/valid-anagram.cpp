class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length()) return false;
        // unordered_map<char,long long>map1;
        // unordered_map<char,long long>map2;
        // for(long long i=0;i<s.length();i++){
        //     map1[s[i]]++;
        // }
        // for(long long i=0;i<t.length();i++){
        //     map2[t[i]]++;
        // }
        // for(auto x:map1){
        //     char ch1=x.first;
        //     char freq1=x.second;
        //     if(map2.find(ch1)!=map2.end()){
        //         long long freq2=map2[ch1];
        //         if(freq1!=freq2) return false;
        //     }
        //     else return false;
        // }
        // return true;
//  this above method can not able to pass all test cases due to which we would use second method

        // now we will use second method

    // if(s.length()!=t.length()) return false;
    // unordered_map<char,int>map1;
    // // unordered_map<char,int>map2;
    // for(int i=0;i<s.length();i++){
    //     map1[s[i]]++;
    // }
    // for(int i=0;i<t.length();i++){
    //     char ch=t[i];
    //     if(map1.find(ch)!=map1.end())
    //   {  map1[ch]--;
    //     if(map1[ch]==0) map1.erase(ch);}
    //     else return false;
    // }
    
    // if(map1.size()>0) return false;
    // return true;
    
    if(s.size()!=t.size()) return false;
    unordered_map<char,int>map1;
    for(int i=0;i<s.size();i++){
        map1[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        char ch=t[i];
        if(map1.find(ch)!=map1.end()) {
            map1[ch]--;
            if(map1[ch]==0) map1.erase(ch);
        }
        else return false;
    }
    if(map1.size()>0) return false;
    return true;

    }
};