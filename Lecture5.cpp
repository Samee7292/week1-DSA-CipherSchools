#include<bits/stdc++.h>
using namespace std;
 int rainWater(vector<int> &heights)
 {#include<bits/stdc++.h>
using namespace std;
 int rainWater(vector<int> &heights)
 {
    int n = heights.size();
    vectorcint> 1Max(n), rMax(n);
    // Calculate 1Max, rMax
    1Max[0] - heights[0];
     for (int i = 1; i < n; i ++)
     {
     1Max[i]= max(heights[i] - lMax[ i - 1]); 
     rMax[n - i - 1]=max(heights[n - i- 1],rMax[n - i]);
     }
                        I
     int water=0;
    for (int 1 - 1; i < n; i++)
     {
        water += (min(1Max[i], rMax(i)) - heights(1));
     }
     return water;
 }
int main()
 {
 }
    int n = heights.size();
    vectorcint> 1Max(n), rMax(n);
    // Calculate 1Max, rMax
    1Max[0] - heights[0];
     for (int i = 1; i < n; i ++)
     {
     1Max[i]= max(heights[i] - lMax[ i - 1]); 
     rMax[n - i - 1]=max(heights[n - i- 1],rMax[n - i]);
     }
                        I
     int water=0;
    for (int 1 - 1; i < n; i++)
     {
        water += (min(1Max[i], rMax(i)) - heights(1));
     }
     return water;
 }
int main()
 {
 }