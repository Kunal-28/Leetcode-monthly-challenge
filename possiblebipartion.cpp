class Solution {

    bool bfs(vector<int> adj[],vector<int>& team,int sr)
    {
        queue<int> q; q.push(sr);

        while(!q.empty())
        {
            int a=q.front(); q.pop();

             if(team[a]==-1) team[a]=1;

                for(auto x:adj[a])
                {
                    if(team[x]==-1)
                    {
                        team[x]=1-team[a]; q.push(x);
                    }
                    else if(team[x]!=-1&&team[x]==team[a]) return false;

                }
        }
        return true;
    }
public:
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<int> adj[N+1];

        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        vector<int> team(N+1,-1);

        for(int i=1;i<=N;i++)
        {
            if(team[i]==-1)
            {
                if(!bfs(adj,team,i)) return false;
            }
        }

        return true;

    }
};
