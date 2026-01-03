class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int low = 1;
        int high = m/n;
        if(m < 2){
            return m;
        }
        while(low<=high){
            int mid = low + (high-low)/2;
            long long ans = pow(mid,n);
            if(ans==m){
                return mid;
            }
            else if(ans < m){
                low = mid + 1;
            }
            else {
                high = mid -1;
            }
        }
        return -1;
    }
};