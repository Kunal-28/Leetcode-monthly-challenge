class Solution {
public:


        static int dis(vector<int>&p){
            return p[0]*p[0]+p[1]*p[1];
        }

        static bool compare(vector<int>&p1 , vector<int>&p2){
            return dis(p1)<dis(p2);
        }


      vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {

        nth_element(points.begin(),points.begin()+K,points.end(),compare);
          return vector(points.begin(), points.begin() + K);
    }
};


