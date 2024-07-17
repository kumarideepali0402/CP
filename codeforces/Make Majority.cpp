#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int one=0;
    	int zero=0;
    	bool isZero=true;
    	for(int i=0;i<n;i++){
    		if(s[i]=='1'){
    			one++;
    			isZero=true;
			}
			else{
				if(isZero){
					zero++;
					isZero=false;
				}
			}
		}
		if(one>zero) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
    	
		
	}
	
	
}