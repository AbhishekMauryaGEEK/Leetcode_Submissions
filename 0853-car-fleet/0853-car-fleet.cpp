class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        if (n == 0)
            return 0;

        vector<pair<int, double>> cars(n);
        for (int i = 0; i < n; i++) {
            double arrivalTime =
                (double)(target - position[i]) / (double)speed[i];
            cars[i] = {position[i], arrivalTime};
        }
        sort(cars.begin(), cars.end());
        int numFleets = 1;
        double earliestTime = cars.back().second;
        for (int i = n - 2; i >= 0; i--) {
            if (cars[i].second > earliestTime) {
                numFleets++;
                earliestTime = cars[i].second;
            }
        }

        return numFleets;
    }
};
