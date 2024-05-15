class Solution {
public:
    void reversepart(int i,int j,vector<int>& v){
        while(i<=j){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()) k=k%nums.size();
        reversepart(0,nums.size()-k-1, nums);
        reversepart(nums.size()-k,nums.size()-1,nums);
        reversepart(0,nums.size()-1,nums);
        
    }
};