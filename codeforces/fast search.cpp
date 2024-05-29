#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		int tl,tr;
		cin>>tl>>tr;
		int l=-1;
		int r=n;
		while(l+1<r){
			int m=(l+r)/2;
			if (a[m]>=tl) r=m;
			else l=m;
		}
		int li=r;
		
		int g=-1;
		int h=n;
		while(g+1<h){
			int m=(g+h)/2;
			if (a[m]>tr) h=m;
			else g=m;
		}
		int lr=g;
		cout<<lr-li+1;
		
	}
}