class Solution {

// Dutch flag algortihm
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n = arr.size();
        int l = 0;
        int m = 0;
        int h = n-1;
        while(m <= h){
            if(arr[m]==0){
                swap(arr[m++],arr[l++]);
            }
            else if(arr[m]==1){
                m++;
            }
            else {
                swap(arr[m],arr[h--]);
            }
        }
    }
};
