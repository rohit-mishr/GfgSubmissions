class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        int ans = low;
        if(k>n){
            return -1;
        }
        while(low<=high){
            int mid = low + (high-low)/2;
            int count = 1;
            long long sum = 0;
            for(int i : arr){
                if(sum+i > mid){
                    count++;
                    sum = i;
                }
                else {
                    sum+=i;
                }
            }
            if(count>k){
                low = mid + 1;
            }
            else if(count <= k){
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }
};