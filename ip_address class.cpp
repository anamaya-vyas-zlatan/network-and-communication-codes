#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
void ClassD(int a , int b, int c, int d)
{
    int flag;
     char l ='.';
    if(a<128){
        cout<<a<<l<<b<<l<<c<<l<<d<<" Belongs to Class A"<<endl;
        flag =0;
    }
    else if(a>=128 && a<192){
        cout<<a<<l<<b<<l<<c<<l<<d<<" Belongs to Class B"<<endl;
        flag =1;
    }
    else if(a>=192 && a<224){
        cout<<a<<l<<b<<l<<c<<l<<d<<" Belongs to Class C"<<endl;
        flag =2;
    }
}
void AddressD(int a , int b, int c, int d)
{
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    int a1,b1,c1,d1;
    if(flag == 0){
        a1 = a&255;
        b1 = b&0;
        c1 = c&0;
        d1 = d&0;
        cout<<"Address of: "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a1<<l<<b1<<l<<c1<<l<<d1<<endl;
    }
    else if(flag == 1){
        a1 = a&255;
        b1 = b&255;
        c1 = c&0;
        d1 = d&0;
        cout<<"Address of: "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a1<<l<<b1<<l<<c1<<l<<d1<<endl;
    }
    else if(flag == 2){
        a1 = a&255;
        b1 = b&255;
        c1 = c&255;
        d1 = d&0;
        cout<<"Address of: "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a1<<l<<b1<<l<<c1<<l<<d1<<endl;
    }
}
void HostD(int a , int b, int c, int d)
{
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 0){
        cout<<"Host id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<b<<l<<c<<l<<d<<endl;
    }
    else if(flag == 1){
        cout<<"Host id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<c<<l<<d<<endl;
    }
    else if(flag == 2){
        cout<<"Host id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<d<<endl;
    }
}
void NetworkD(int a , int b, int c, int d)
{
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 2){
        cout<<"Network id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<l<<c<<endl;
    }
    else if(flag == 1){
        cout<<"Netwok id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<endl;
    }
    else if(flag == 0){
        cout<<"Network id of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<endl;
    }
}
First_AddressD(int a , int b, int c, int d){
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 2){
        cout<<"First Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<l<<c<<l<<'0'<<endl;
    }
    else if(flag == 1){
        cout<<"First Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<".0.1"<<endl;
    }
    else if(flag == 0){
        cout<<"First Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<".0.0.1"<<endl;
    }
}
Last_AddressD(int a , int b, int c, int d){
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 0){
        cout<<"Last Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<255<<l<<255<<".254"<<endl;
    }
    else if(flag == 1){
        cout<<"Last Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<".255.254"<<endl;
    }
    else if(flag == 2){
        cout<<"Last Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<".255.255.254"<<endl;
    }
}
RangeD(int a , int b, int c, int d){
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 0){
        cout<<"Range of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<0<<l<<0<<".0 - "<<a<<l<<255<<l<<255<<".255"<<endl;
    }
    else if(flag == 1){
        cout<<"Last Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<l<<0<<".0 - "<<a<<l<<b<<".255.255"<<endl;
    }
    else if(flag == 2){
        cout<<"Last Address of "<<a<<l<<b<<l<<c<<l<<d<<" is: "<<a<<l<<b<<l<<c<<".0 - "<<a<<".255.255.255"<<endl;
    }
}
No_of_HostsD(int a , int b, int c, int d){
    int flag;
    char l ='.';
    if(a<128){
        flag =0;
    }
    else if(a>=128 && a<192){
        flag =1;
    }
    else if(a>=192 && a<224){
        flag =2;
    }
    if(flag == 0){
        cout<<"Number of hosts for "<<a<<l<<b<<l<<c<<l<<d<<" are: 16777216(256^3)"<<endl;
    }
    else if(flag == 1){
        cout<<"Number of hosts for "<<a<<l<<b<<l<<c<<l<<d<<" are: 65536(256^2)"<<endl;
    }
    else if(flag == 2){
        cout<<"Number of hosts for "<<a<<l<<b<<l<<c<<l<<d<<" are: 256"<<endl;
    }
}
int main()
{
    int flag;
    int a,b,c,d;
    a1:cout<<"Enter the ip address with a space in between, for example(a b c d): "<<endl;
    cin>>a>>b>>c>>d;
    if(a<0||b<0||c<0||d<0){
        cout<<"Error!!, byte cannot be negative"<<endl;
        goto a1;
    }
    if(a>255||b>255||c>255||d>255){
        cout<<"Error!!, cannot process the byte"<<endl;
        goto a1;
    }
   int a2;
   do{
        cout<<"\nFor finding the class press '1'\n"<<endl;
        cout<<"For finding the Address of Network press '2'\n"<<endl;
        cout<<"For finding the Network Id press '3'\n"<<endl;
        cout<<"For finding the Host ID press '4'\n"<<endl;
        cout<<"For finding the First Address of Network press '5'\n"<<endl;
        cout<<"For finding the Last Address of Network press '6'\n"<<endl;
        cout<<"For finding the range of the network press '7'\n"<<endl;
        cout<<"For finding Total number of Hosts press '8'\n"<<endl;
        cout<<"For giving a new IP address press '9'\n"<<endl;
        cout<<"To Exit enter '10'\n"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>a2;
        switch(a2){
            case 1:
                ClassD(a,b,c,d);
                break;
            case 2:
                AddressD(a,b,c,d);
                break;
            case 3:
                NetworkD(a,b,c,d);
                break;
            case 4:
                HostD(a,b,c,d);
                break;
            case 5:
                First_AddressD(a,b,c,d);
                break;
            case 6:
                Last_AddressD(a,b,c,d);
                break;
            case 7:
                RangeD(a,b,c,d);
                break;
            case 8:
                No_of_HostsD(a,b,c,d);
                break;
            case 9:
                goto a1;
                break;
            case 10:
                exit(0);
            default:
                cout<<"Wrong choice";
                break;
        }
   }while(1);
}
