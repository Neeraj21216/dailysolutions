
class Solution {
    public:
        int lengthAfterTransformations(string s, int t) {
            vector<long long   >freq(26,0);
            for(auto i:s){
                freq[i-'a']++;
            }
            //t.c->0(n*26);
            //s.c->o(1);

           int mod=1e9+7;
            while(t--){
              
               vector<long long >c(26,0);
               for(int i=0;i<26;i++){
                if(freq[i]==0)continue;
                long long   count=freq[i];
                if(i==25){
                    c[0]=c[0]+(count%mod);
                    c[1]=c[1]+count%mod;
                }
                else{
                    c[i+1]=c[i+1]+(count%mod);
                }
                freq[i]=0;
               }
               for(int i=0;i<26;i++){
                freq[i]+=c[i];
               }
            }
            int    ans=0;
            for(auto i:freq){
                ans=ans+(i%mod);  
                ans=ans%mod  ;        
            }
            return (int )ans;
            
        }
    };