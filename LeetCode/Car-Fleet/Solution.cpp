1 class Solution {
2 public:
3    int carFleet(int target, vector<int>& position, vector<int>& speed) {
4        int n=position.size();
5        vector<pair<int,int>>cars;
6
7        for(int i=0;i<n;i++){
8            cars.push_back({position[i],speed[i]});
9        }
10        //sort the cars ... greater<>() is a built-in comparator in C++ that sorts    elements in descending order.
11        sort(cars.begin(),cars.end(),greater<>());
12        int fleets=0;
13        double lastTime=0;
14        for(int i=0;i<n;i++){
15            double time=(double)(target-cars[i].first)/cars[i].second;
16
17            if(time>lastTime){
18                fleets++;
19                lastTime=time;
20            }
21
22        }
23    return fleets;
24    }
25 };