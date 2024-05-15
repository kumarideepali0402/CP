#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    int max=0;
	    cin>>x>>y;
	    for(int i=0;i<y;i++){
	    if(x>=1000) x=2*x;
	    else x=x+1000;
	    }
	    cout<<x<<endl;
	}

}