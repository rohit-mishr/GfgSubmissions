class Solution {
  public:
    int merge_func(vector<int> &arr , int left , int right){
        if(left>=right){
            return 0;
        }
        int mid  = (right + left)/2;
        int n = mid-left+1;
        int cnt_total = 0;
        int cnt1 = merge_func(arr,left,mid);
        int cnt2 = merge_func(arr,mid+1,right);
        cnt_total = cnt1 + cnt2;
        int i = left;
        int j = mid+1;
        vector<int> temp;
        temp.reserve(right-left+1);
        while(i <= mid && j <= right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
                cnt_total+=(n - (i-left));
            }
        }
        while(i <= mid){
             temp.push_back(arr[i++]);
        }
        while(j <= right){
            temp.push_back(arr[j++]);
        }
        for(int it = 0; it < right-left+1 ; it++){
            arr[left+it] = temp[it];
        }
        return cnt_total;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int cnt = merge_func(arr,0,n-1);
        return cnt;
    }
};