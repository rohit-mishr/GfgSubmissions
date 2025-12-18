

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int  max = INT_MIN;
        int n = arr.size();
        vector<int> ans;
        for(int i = n-1 ; i >=0 ; i--){
            if(arr[i]>=max){
                max = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};