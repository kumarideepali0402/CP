#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		int x;
		cin>>x;
		int l=-1;
		int r=n;
		while(l+1<r){
			int m=(l+r)/2;
			if(a[m]>x) r=m;
			else l=m;
			
		}
		cout<<r<<endl;
	}
}
