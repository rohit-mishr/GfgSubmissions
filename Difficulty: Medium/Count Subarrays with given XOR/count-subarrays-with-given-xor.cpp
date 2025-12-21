class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int,int> map;
        long cnt = 0;
        int xr = 0;
        for(auto i : arr){
            xr^=i;
            if(xr==k){
                cnt++;
            }
            if(map.find(k^xr)!=map.end()){
                cnt+=map[k^xr];
            }
            map[xr]++;
        }
        return cnt;
    }
};