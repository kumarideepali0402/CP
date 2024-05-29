#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> b(k);
	for(int i=0;i<k;i++){
		cin>>b[i];
	
		int t=b[i];
		int l=-1;
		int r=n;
		while(l+1<r){
		
		int m=(l+r)/2;
		if (a[m]>t) r=m;
		else l=m;
	}
	
	cout<<l+1<<'\n';
		
		
	}
	return 0;
}

