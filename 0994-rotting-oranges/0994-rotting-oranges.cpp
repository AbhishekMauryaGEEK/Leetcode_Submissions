class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2) 
                q.push({i,j});
                if(grid[i][j] == 1) 
                fresh++;
            }
        }
        int time = 0;
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty() && fresh>0){
            int sz = q.size();
            for(int k=0;k<sz;k++){
                auto [x,y] = q.front();
                q.pop();
                for(auto &d:dirs){
                    int nx = x + d[0], ny = y + d[1];
                    if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1){
                        grid[nx][ny] = 2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }
            time++;
        }
        return fresh==0 ? time : -1;
    }
};
