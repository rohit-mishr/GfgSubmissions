class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int left = 0;
        int mid = (n-1)/2;
        int right = n-1;
        while(left<=right){
            if(arr[mid]>target){
                if(mid == 0 || arr[mid-1]<=target)
                return mid;
                else{
                    right = mid -1;
                    mid = (left + right)/2;
                }
            }
            else{
                left = mid +1;
                mid = (left + right)/2;
            }
        }
        return n;
    }
};
