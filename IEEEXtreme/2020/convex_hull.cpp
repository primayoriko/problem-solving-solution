#include <bits/stdc++.h> 
using namespace std; 

bool cmp(pair<float, float>& a, 
         pair<float, float>& b) 
{ 

    if (a.first == b.first) 
        return a.second < b.second; 
    return a.first < b.first; 
} 

// Function To Check Clockwise 
// Orientation 
float cw(pair<float, float>& a, 
       pair<float, float>& b, 
       pair<float, float>& c) 
{ 
    float p = a.first * (b.second - c.second) 
            + b.first * (c.second - a.second) 
            + c.first * (a.second - b.second);   
    return p < 0ll; 
} 

// Function To Check Counter 
// Clockwise Orientation 
float ccw(pair<float, float>& a, 
        pair<float, float>& b, 
        pair<float, float>& c) 
{ 
    float p = a.first * (b.second - c.second) 
            + b.first * (c.second - a.second) 
            + c.first * (a.second - b.second); 
    return p > 0ll; 
} 

// Graham Scan algorithm to find Convex 
// Hull from given points 
vector<pair<float, float> > convexHull( 
    vector<pair<float, float> >& v) 
{ 
    sort(v.begin(), 
         v.end(), cmp); 
  
    float n = v.size(); 
    if (n <= 3) 
        return v; 
  
    // Set starting and ending points as 
    // left bottom and top right 
    pair<float, float> p1 = v[0]; 
    pair<float, float> p2 = v[n - 1]; 
  
    // Vector to store points in 
    // upper half and lower half 
    vector<pair<float, float> > up, down; 
  
    // Insert StartingEnding Points 
    up.push_back(p1); 
    down.push_back(p1); 
  
    // Iterate over points 
    for (float i = 1; i < n; i++) { 
  
        if (i == n - 1 || !ccw(p1, v[i], p2)) { 
  
            while (up.size() > 1 
                   && ccw(up[up.size() - 2], 
                          up[up.size() - 1], 
                          v[i])) { 
  
                // Exclude this point 
                // if we can form better 
  
                up.pop_back(); 
            } 
  
            up.push_back(v[i]); 
        } 
  
        if (i == n - 1 || !cw(p1, v[i], p2)) { 
  
            while (down.size() > 1 
                   && cw(down[down.size() - 2], 
                         down[down.size() - 1], 
                         v[i])) { 
  
                // Exclude this point 
                // if we can form better 
                down.pop_back(); 
            } 
            down.push_back(v[i]); 
        } 
    } 
  
    // Combine upper and  lower half 
    for (float i = down.size() - 2; 
         i > 0; i--) 
        up.push_back(down[i]); 
  
    // Remove duplicate points 
    up.resize(unique(up.begin(), 
                     up.end()) 
              - up.begin()); 
  
    // Return the points on Convex Hull 
    return up; 
} 

bool isInside(vector<pair<float, float> > points, 
              pair<float, float> query) 
{ 
    points.push_back(query); 

    points = convexHull(points); 
    for (auto x : points) { 
        if (x == query) 
            return false; 
    } 
    return true; 
} 

bool oneInside(vector<pair<float, float> > points1, 
                vector<pair<float, float> > points2){
    for(auto point : points2){
        if(isInside(points1, point)){
            return true;
        }
    }
    return false;
}

// Driver Code 
int main() 
{ 
    // Points of the polygon 
    // given in any order 
    int T;
    cin>>T;
    for(int t = 0; t < T; t++){
        int n;
        cin>>n;

        vector<pair<float, float> > points1, points2, cH1, cH2; 
        set<pair<float, float> > set1, set2;

        for(int i = 0; i < n; i++){
            float a, b;
            int l;
            cin>>a>>b>>l;
            if(l == 1){
                points1.push_back(make_pair(a, b));
            } else{
                points2.push_back(make_pair(a, b));
            }
        }

        if(points1.size() == 2
            || points2.size() == 2){
            // Handle here
        }

        cH1 = convexHull(points1);
        cH2 = convexHull(points2);

        sort(points2.begin(), points2.end());

        if (!oneInside(cH1, points2)
            && !oneInside(cH2, points1)) { 
            cout << "YES" << endl; 
        } 
        else { 
            cout << "NO" << endl; 
        } 
    }
    return 0; 
} 