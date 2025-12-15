class Solution {

   // Moore's Voting Algorithm
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        int num;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(cnt==0){
                num = arr[i];
                cnt = 1;
            }
            else if(arr[i]==num){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        cnt = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i]==num){
                cnt++;
            }
        }
        if(cnt>floor(n/2)) return num;
        else return -1;
    }
};
