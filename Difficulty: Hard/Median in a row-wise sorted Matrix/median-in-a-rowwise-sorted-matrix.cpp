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
                int l = 0;
                int h = c-1;
                int index = -1;
                while(l <= h){
                    int m = l + (h-l)/2;
                    if(i[m]<=mid){
                        index = m;
                        l = m + 1;
                    }
                    else{
                        h = m - 1;
                    }
                }
                count+=(index+1);
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
