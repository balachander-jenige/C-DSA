class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        if (arr.size()<k){
            return 0;
        }
        // code here
        int max=0,sum=0;
        for (int i=0;i<k;i++){
            sum+=arr[i];
            
        }
        max=sum;
        for (int j=k;j<arr.size();j++)
        {
            sum=sum+arr[j]-arr[j-k];
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }
};