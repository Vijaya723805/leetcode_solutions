class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int>A;
        for(int i=0;i<n;i++){
            int k=A.size();
            if(operations[i]=="C"){
                A.pop_back();
            }
            else if(operations[i]=="D"){
                A.push_back(A.back()*2);
            }
            else if(operations[i]=="+"){
                A.push_back(A[k-1]+A[k-2]);
            }
            else A.push_back(stoi(operations[i]));
        } 
        int sum=0;
        for(int i=0;i<A.size();i++){
            sum+=A[i];
        }
        return sum;
    }
};