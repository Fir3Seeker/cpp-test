#include <iostream>
using namespace std;
int main()
{ double liczba10; 
 double ulamek;
    int n;
    int t[10]={0};
    int u[100]={0}; 
    int i=9;
cout<<"Podaj Liczbe";
cin>>liczba10; 
//cin>>n;
n=(int) liczba10; 
ulamek=liczba10 - n; 
while(n>0){ 
    t[i]=n%2;
    n=n/2;
    i--;}
for(int i=0; i<100; i++){ 
    ulamek=2*ulamek;
if(ulamek>=1) {u[i]=1; ulamek=ulamek-1;}
    else u[i]=0;
}
cout<<"Binarnie To:";
for(i=0;i<10;i++)cout<<t[i];
cout<<".";
for(i=0;i<100;i++)cout<<u[i];
    return 0;
}
