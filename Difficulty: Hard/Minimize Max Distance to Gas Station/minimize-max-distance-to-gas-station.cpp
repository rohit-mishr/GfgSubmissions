class Solution {
  public:
    double minMaxDist(vector<int> &stations, int K) {
        int n = stations.size();
        long double low =  0;
        long double high = 0; 
        for(int i = 0 ; i < n-1 ; i++){
            high = max(high,(long double)(stations[i+1]-stations[i]));
        }
 
        while(high - low > 1e-6){
            long double mid = low + (high-low)/2;
            int count = 0;
            for(int i = 0 ; i < n-1 ; i++){
                int required = (stations[i+1]-stations[i])/mid;
                if(stations[i+1]-stations[i] == mid*required){
                    required--;
                }
                count+=required;
            }
            if(count>K){
                low = mid;
            }
            else{
                high = mid;
            }
        }
        return high;
    }
};