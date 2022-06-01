//Problem Link:- https://leetcode.com/problems/snakes-and-ladders/
//Code:-
typedef  pair<int,int> pi;
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int rows=board.size(),cols=board[0].size(),target=rows*cols,r,c,p;
        vector<int> vis(target+1);
        priority_queue<pi,vector<pi>,greater<pi>> q;
        q.push({0,1});
        vis[1]=true;
        
        while(!q.empty()){
            auto step_pos=q.top();
            q.pop();
            int s=step_pos.first/1000 +1;
            
            for(int i=1;i<=6;i++){
                auto p=step_pos.second+i;
                if(vis[p]){
                    continue;
                }
                vis[p]=true;
                
                r=rows-(p-1)/cols-1;
                c=(p-1)%cols;
                
                if((rows-r-1)%2){
                    c=cols-c-1;
                }
                
                int ladder=board[r][c];
                if(ladder>0 and ladder<=target){
                    p=ladder;
                }
                
                if(p==target){
                    return s;
                }
                
                q.push(make_pair(s*1000+500-p,p));
            }
        }
        return -1;
    }
};
