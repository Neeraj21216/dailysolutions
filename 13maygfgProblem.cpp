//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
       string ans="1";
       //tc->o(n^2);
       //sc-o(1)
       for(int i=1;i<n;i++){
           string curr="";
           int count=1;
           int prev=ans[0]-'0';
           int j=1;
           int ans_size=ans.size();
           while(j<ans_size){
              
               if(ans[j]==ans[j-1]){
                   count++;
               }
               else{
                   //equal 
                   
                   curr+=(count+'0');
                   count=1;
                   curr+=(prev+'0');
                   prev=ans[j]-'0';
               }
               j++;
           }
           curr+=(count+'0');
           curr+=(prev+'0');
           ans=curr;
         //  cout<<ans<<i<<endl;
           
       }
       return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends