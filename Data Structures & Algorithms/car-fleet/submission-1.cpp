class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> info;
        int n = position.size();
        for(int i=0;i<n;i++)
        {
            info.push_back({position[i],speed[i]});
        }
        sort(info.begin(),info.end());
        double lastTime = 0;
        int fleet = 0;
        for(int i=n-1;i>=0;i--)
        {
            double t = (double)(target - info[i].first)/(double)info[i].second;
            if(t > lastTime)
            {
                fleet++;
                lastTime = t;
            }
        }
        return fleet;
    }
};
