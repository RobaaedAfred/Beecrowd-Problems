
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
   int a ,b,x,y;
   double c,z,p;
   cin>>a>>b>>c;
   cin>>x>>y>>z;
   p=(b*c)+(y*z);
   
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<p<<endl;

    return 0;
}
