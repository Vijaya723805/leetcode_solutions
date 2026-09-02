class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>row1;
        vector<int>row2;
        vector<int>A;
        vector<int>B;
        map<int,int>freq1;
        map<int,int>freq2;
        for(int i=0;i<matches.size();i++){
            freq1[matches[i][0]]++;
            freq2[matches[i][1]]++;
            if(freq1[matches[i][0]]==1) A.push_back(matches[i][0]);
            if(freq2[matches[i][1]]==1) A.push_back(matches[i][1]);
        }
        sort(A.begin(),A.end());
        B.push_back(A[0]);
        for(int i=1;i<A.size();i++){
            if(A[i]!=A[i-1]) B.push_back(A[i]);
        }
        for(int i=0;i<B.size();i++){
            //cout<<B[i]<<endl;
            //cout<<"freq1 "<<freq1[B[i]]<<endl;
            //cout<<"freq2 "<<freq2[B[i]]<<endl;
            if(freq2[B[i]]==0) row1.push_back(B[i]);
            else if(freq2[B[i]]==1) row2.push_back(B[i]); 
        }
        sort(row1.begin(),row1.end());
        sort(row2.begin(),row2.end());
        vector<vector<int>> ans;
        ans.push_back(row1);
        ans.push_back(row2);
        return ans;
    }
};