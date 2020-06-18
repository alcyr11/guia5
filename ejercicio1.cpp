#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

     int a,b,q,r;

     cout<<"\n Ingrese el primer numero: ";
     cin>>a;

     cout<<"\n ingrese el segundo numero ";
     cin>> b;

     q=a/b;

     r=a%b;

     while(r!=0)
     {      
           a=b;
           b=r;
           if(a>b)
           {
            
           
           q=a/b;

           r=a%b;
           }
     }
     cout<<"\n Resultado de MCD: " <<b;

      
      return 0 ;
}





















