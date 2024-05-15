#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	long long sum=0;
	for(int i=0;i<n;i++){
	    sum+=arr[i];
	}
	return sum;

}
