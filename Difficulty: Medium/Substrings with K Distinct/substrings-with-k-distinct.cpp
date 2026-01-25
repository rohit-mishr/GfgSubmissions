class Solution {
  public:
    int atmostKdistinct(string &s, int k){
        int n = s.size();
        int ans = 0;
        int cnt = 0;
        int start = 0;
        int end = 0;
        int arr[26] = {0};
        while(end<n){
            if(arr[s[end]-'a']==0){
                cnt++;
            }
            arr[s[end]-'a']++;
            while(cnt>k){
                arr[s[start]-'a']--;
                if(arr[s[start]-'a']==0){
                    cnt--;
                }
                start++;
            }
            if(cnt<=k){
                ans+= (end-start+1);
            }
            end++;
        }
        return ans;
    }
    int countSubstr(string& s, int k) {
        // code here
        int ans = atmostKdistinct(s,k) - atmostKdistinct(s,k-1);
        return ans;
    }
};