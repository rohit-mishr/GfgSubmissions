class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int n = 0;
        int m = 0;
        int low = 0;
        int high = 0;
        if(a.size()>b.size()){
            swap(a,b);
        }
        n = a.size();
        m = b.size();
        high = min(k,n);
        low = max(0,k-m);
        while(low<=high){
            int cut1 = low + (high-low)/2;
            int cut2 = k - cut1;
            int l1 = (cut1==0)?INT_MIN:a[cut1-1];
            int l2 = (cut2==0)?INT_MIN:b[cut2-1];
            int r1 = (cut1==min(k,n))?INT_MAX:a[cut1];
            int r2 = (cut2==m)?INT_MAX:b[cut2];
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
            else if(l1>r2){
                high = cut1 - 1;
            }
            else {
                low = cut1 + 1;
            }
        }
    }
};