class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        int low = INT_MAX;
        int high = INT_MIN;
        int half = r*c/2;
        int ans = 0;
        for(auto i : mat){
            low = min(low,i[0]);
            high = max(high,i[c-1]);
        }
        while(low<=high){
            int mid = low + (high-low)/2;
            int count = 0;
            for(auto i : mat){
                count+= (upper_bound(i.begin(),i.end(),mid) - i.begin());
            }
            if(count > half){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
