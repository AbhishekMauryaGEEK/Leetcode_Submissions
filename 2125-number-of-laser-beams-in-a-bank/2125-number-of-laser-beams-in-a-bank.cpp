class Solution {
public:
    int numberOfBeams(vector<string>& bank)
    {
        vector<int>v;
        int x;
        for(int i=0;i<bank.size();i++)
        {
            x=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                x++;
            }
            if(x==0)
            continue;
            v.push_back(x);

        }
        int ans=0;

        for(int i=0;i+1<v.size();i++)
        {
           ans=ans+v[i]*v[i+1];
        }
        return ans;

    }
};