class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>rad,dir;
        int n=senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R') rad.push(i);
            else dir.push(i);
        }     
        while(!dir.empty() && !rad.empty()){
            if(rad.front()<dir.front()){
                rad.push(n++);
            }
            else dir.push(n++);
            rad.pop();
            dir.pop();
        }
        if(rad.empty()) return "Dire";
        else return "Radiant";
    }
};