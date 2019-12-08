/* https://en.wikibooks.org/wiki/Algorithm_Implementation/Geometry/Convex_hull/Monotone_chain */
#include<bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)
struct Point
{
    double x, y;
    Point()
    {
        this->x=0.0,this->y=0.0;
    }
    Point(double ax,double ay)
    {
        this->x=ax,this->y=ay;
    }
      bool operator <(const Point &p) const
    {
        return x < p.x || (x == p.x && y < p.y);
    }
};
double cross(const Point &O, const Point &A, const Point &B)
{
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}
double dist(Point a,Point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
vector<Point> convex_hull(vector<Point> P)
{
    int n = P.size(), k = 0;
    if (n == 1) return P;
    vector<Point> H(2*n);
      sort(P.begin(), P.end());
      for (int i = 0; i < n; ++i)
    {
        while (k >= 2 && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
      for (int i = n-2, t = k+1; i >= 0; i--)
    {
        while (k >= t && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
      H.resize(k-1);
    return H;
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int cs=1; cs<=test; cs++)
    {
        int n;
        double d;
        scanf("%d%lf",&n,&d);
        vector<Point>p,h;
        for(int i=0; i<n; i++)
        {
            double x,y;
            scanf("%lf%lf",&x,&y);
            Point P(x,y);
            p.push_back(P);
          }
        h=convex_hull(p);
h.push_back(h[0]);
        double ans=2.0*PI*d;
        if(n==2)
        {
            ans+=2.0*dist(p[0],p[1]);
        }
        else
        {
              for(int i=0; i<h.size()-1; i++)
            {
                //cout<<h[i].x<< " "<<h[i].y<<endl;
                ans+=(dist(h[i],h[i+1]));
            }
        }
        printf("Case %d: %.10f\n",cs,ans);
      }
}
 
