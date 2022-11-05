
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int main()
{
    double x2,x1,y2,y1,a,b,z;
    cin>>x1>>y1>>x2>>y2;
    a=(x2-x1)*(x2-x1);
    b=(y2-y1)*(y2-y1);
    z=sqrt(a+b);
    cout<<fixed<<setprecision(4)<<z<<endl;
    return 0;
}