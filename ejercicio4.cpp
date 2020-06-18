#include <iostream>
using namespace std;
int main(){
    int d,m,a,opcion;
    cout<<"Digite dia, mes y anno: \n";
    cin>>d>>m>>a;
    while(m<=0||m>=13)
    {
        cout<<"Digite el dia, mes y anno: \n";
        cin>>d>>m>>a;
    }
    if((a%400==0)||(a%4==0)&&(a%100!=0)){
        opcion=1;
    }
    else{
        opcion=2;
    }
    switch(m){
        case 1:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 2:{
            if(opcion==1){
                while(d<=0||d>=30){
                    cout<<"Digite el dia, mes y anno: \n";
                    cin>>d>>m>>a;
                }
            }
            else{
                while(d<=0||d>=29){
                    cout<<"Digite el dia, mes y anno: \n";
                    cin>>d>>m>>a;
                }
            }
            break;
        }
        case 3:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 4:{
            while(d<=0||d>=31){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 5:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 6:{
            while(d<=0||d>=31){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 7:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno; \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 8:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 9:{
            while(d<=0||d>=31){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 10:{
            while(d<=0||d>=32){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        case 11:{
            while(d<=0||d>=31){
                cout<<"Digite el dia, mes y anno: \n";
                cin>>d>>m>>a;
            }
            break;
        }
        
        
    }
    switch(opcion){
        case 1:{
            if((m==1||m==3||m==5||m==7||m==8||m==10)&&(d==31))
            {
                m++;
            }
            else if ((m==4||m==6||m==9||m==11)&& d==30){
                m++;
            }
            else if(m==2 && d==29){
                m++;
                d=0;
            }
            else{cout<<"Datos incorrectos";
            }
            if (m==12 && d==31){
                d=0;
                ++a;
                m=0;
                m++;
            }
            cout<<"La fecha un dia despues es: \n"<<++d<<" / "<<m<<" / "<<a;
            break;
        }
        case 2: {
            if((m==1||m==3||m==5||m==7||m==8||m==10)&&(d==31)){
                m++;
            }
            else if ((m==4||m==6||m==9||m==11)&& d==30){
                m++;
            }
            else if(m==2&&d==28){
                m++;
                d=0;
            }
            else{
                cout<<"Datos correctos";
            }
            if(m==12&&d==31){
                a++;
                m=0;
                m++;
                d=0;
            }cout<<"La fecha un dia despues es: \n"<<++d<<" / "<<m<<" / "<<a;
            break;
        }
        default: {
            cout<<"No es igual";
            break;
        }
 
   }


return 0;
}

