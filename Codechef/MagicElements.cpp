#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int sum=0;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        sum+=arr[j];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]+k>sum-arr[i])
	        {
	         count+=1;
	        }
	    }
	    cout<<count<<endl;
	}


}