//#include<bits/stdc++.h>
//using namespace std;
//bool binarySearch(vector<int> a,int target){
//
//			
//			int low=0;
//			int high=a.size()-1;
//			bool ans=false;
//			while(low<=high){
//				int mid=low+(high-low)/2;
//				if(a[mid]<target) low=mid+1;
//				else if(a[mid]>target) high=mid-1;
//				else if(a[mid]==target) {
//				ans=true;
//				break;
//	            }}
//	     return ans;
//		}
		

//int main(){
//	ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//	int n,k;
//	cin>>n>>k;
//	vector<int> a(n);
//	for (int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	vector<int> b(k);
//	for (int i=0;i<k;i++){
//		cin>>b[i];
//	}
//	for (int i=0;i<k;i++){
//		
//		if(binarySearch(a,b[i])) cout<<"YES"<<endl;
//	    else cout<<"NO"<<endl;
//	}
//	return 0;
//	
//}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> b(k);
	for (int i=0;i<k;i++){
		cin>>b[i];
	}
	for (int i=0;i<k;i++){
		bool ans=false;
		
			int target=b[i];
			int low=0;
			int high=n-1;
			
			while(low<=high){
				int mid=(low+high)/2;
				if(a[mid]<target) low=mid+1;
				else if(a[mid]>target) high=mid-1;
				else if(a[mid]==target) {
				ans=true;
				break;
				
	            }
	     
		}
		if(ans==true) cout<<"YES"<<'\n';
	    else if(ans==false) cout<<"NO"<<'\n';
	}
	
	
}