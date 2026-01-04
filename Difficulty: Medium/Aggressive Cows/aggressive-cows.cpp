class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        int low = 1;
        int high = 0;
        int ans = 1;
        sort(stalls.begin(),stalls.end());
        high = stalls[n-1] - stalls[0];
        while(low<=high){
            int days = low + (high-low)/2;
            int num_cows = 1;
            int prev = 0;
            for(int i = 1 ; i < n ; i++){
                if(stalls[i] - stalls[prev]>=days){
                    num_cows++;
                    prev = i;
                    if(num_cows>=k) break;
                }
            }
            if(num_cows >= k){
                ans = days;
                low = days+1;
            }
            else{
                high = days - 1;
            }
        }
        return ans;
    }
};