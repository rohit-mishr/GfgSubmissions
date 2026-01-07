// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int r = arr.size();
        int c = arr[0].size();
        int index;
        int max_num = 0;
        for(int i = 0 ; i < r ; i++){
            int low = 0;
            int high = c-1;
            if(arr[i][c-1]==0){
                low = c;
            }
            else
            while(low<high){
                int mid = (low+high)/2;
                //cout<<low<<" "<<mid<<" "<<high<<endl;
                if(arr[i][mid]==1){
                    high = mid;
                }
                else{
                    low = mid + 1;
                }
            }
            int m = c - low;
            if(max_num<m){
                max_num = m;
                index = i;
            }
        }
        return index;
    }
};