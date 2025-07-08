// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& words) {
//      int count=0;
//      int n=words.size();
//      for(int i=0;i<n-1;i++){
//         string rev=words[i];
//         reverse(rev.begin(),rev.end());
//         for(int j=i+1;j<n;j++){
//            if (rev==words[j]) count++;
//         }
//      }
//      return count;
//     }
// };

// Second method

// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {
//     unordered_set<string>s;
//     int count=0;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//       string rev=arr[i];
//       reverse(rev.begin(),rev.end());
//       if(rev==arr[i]) continue;
//       if(s.find(rev)!=s.end()){
//         count++;
//         s.erase(arr[i]);
//       }
//     }
//     return count;
//     }
// };

// third method

// class Solution {
// public:
//     int maximumNumberOfStringPairs(vector<string>& arr) {
//         int n = arr.size();
//         int count = 0;
//         unordered_set<string> s;
//         for (int i = 0; i < n; i++) {
//             string rev = arr[i];
//             reverse(rev.begin(), rev.end());
//             if (s.find(rev) != s.end())
//                 count++;
//             else
//                 s.insert(arr[i]);
//         }
//          return count;
//     }
   
// };

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int count=0;
        unordered_set<string>s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(arr[i]==rev) continue;
            if(s.find(rev)!=s.end()){
                count++;
                s.erase(arr[i]);
            }

        }
              
        return count;
        
    }
   
};
