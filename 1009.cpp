
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char A[30];
    double b,c,d;
    cin>>A;
    cin>>b>>c;
    d=b+(c*15)/100;
    
   
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<d<<endl;
    return 0;
}
