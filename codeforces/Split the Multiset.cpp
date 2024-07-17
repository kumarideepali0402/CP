#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,k;
		cin>>n>>k;
		int count=0;
	
		
		while(n>1){
			
			n-=k-1;
			count++;
		}
	
		cout<<count<<endl;

	}
}
