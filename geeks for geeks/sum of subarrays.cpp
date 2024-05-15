class Solution{   
public:
    long long subarraySum(long long a[], long long n)
    {
        // Your code goes here
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i]*(n-i)*(i+1);
            sum%=1000000007;
        }
        return sum;
    }
};