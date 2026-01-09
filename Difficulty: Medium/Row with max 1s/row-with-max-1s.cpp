// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int r = arr.size();
        int c = arr[0].size();
        int index = -1;
        int max_num = 0;
        for(int i = 0 ; i < r ; i++){
            int low = 0;
            int high = c-1;
            int  temp = c;
            while(low<=high){
                int mid = (low+high)/2;
                //cout<<low<<" "<<mid<<" "<<high<<endl;
                if(arr[i][mid]==1){
                    temp = mid;
                    high = mid-1;
                }
                else{
                    low = mid + 1;
                }
            }
            int m = c - temp;
            if(max_num<m){
                max_num = m;
                index = i;
            }
        }
        return index;
    }
};