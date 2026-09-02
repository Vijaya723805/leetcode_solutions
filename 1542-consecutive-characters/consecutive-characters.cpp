class Solution {
public:
    int maxPower(string s) {
        int cnt=1;
        int maximum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
            else{
                maximum=max(maximum,cnt);
                cnt=1;
            }
        }  
        return max(maximum,cnt);
    }
};