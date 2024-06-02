class Solution {
public:
    int minimumChairs(string s) {
        int max=INT_MAX;
        int ans=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='E'){
                ans+=-1;
            }
            else ans+=1;
            if(ans<max) max=ans;
        }
        int k=(-1)*max;
        return k;
        
        
    }
};