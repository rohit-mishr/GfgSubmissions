class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            int count = 1;
            int sum = 0;
            for(int i : arr){
                if(sum+i > mid){
                    count++;
                    sum = i;
                }
                else{
                    sum+=i;
                }
                if(count>k) break;
            }
            if(count<=k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};



