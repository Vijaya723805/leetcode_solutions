class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int left=0;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<k;i++){
            freq1[s1[i]]++;
        }
        for(int right=0;right<s2.size();right++){
            char ch=s2[right];
            freq2[ch]++;
            if(right>=k-1){
                if(freq1==freq2) return true;
                if(freq2[s2[left]]==1) freq2.erase(s2[left]);
                else freq2[s2[left]]--;
                left++;
            }
        }
        return false;
    }
};