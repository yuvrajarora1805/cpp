#include<iostream>
#include<cmath>
using namespace std ;
int main (){
    int a,b,c,d ;
     cout<<"enter coordinates of first point ";
     cin>>a>>b ;
      cout<<"Enter the coordinates of second point ";
      cin>>c>>d;
    
      cout<<"The distance between two points is "<< sqrt(pow(c - a, 2) + pow(d - b, 2));

      return 0;
     

}