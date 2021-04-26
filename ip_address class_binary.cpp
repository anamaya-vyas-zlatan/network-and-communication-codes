#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int conv_binary(int N)
{
   long long int B_Number = 0;
   long long int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
       long long int c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        cnt++;
    }
    return B_Number;
}
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}
void ClassB(int a , int b, int c, int d)
{
    int flag;
    char l ='.';
    int a1,b1,c1,d1;
    a1 = conv_binary(a);
    b1 = conv_binary(b);
    c1 = conv_binary(c);
    d1 = conv_binary(d);
    if(a<128){
        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" Belongs to Class A"<<endl;
        flag =0;
    }
    else if(a>=128 && a<192){
        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" Belongs to Class B"<<endl;
        flag =1;
    }
    else if(a>=192 && a<224){
        cout<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" Belongs to Class C"<<endl;
        flag =2;
    }
}
void AddressB(int a , int b, int c, int d)
{
    int a1,b1,c1,d1;
    a1 = conv_binary(a);
    b1 = conv_binary(b);
    c1 = conv_binary(c);
    d1 = conv_binary(d);
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
        a = a&255;
        b = b&0;
        c = c&0;
        d = d&0;
        a = conv_binary(a);
        b = conv_binary(b);
        c = conv_binary(c);
        d = conv_binary(d);
        cout<<"Address of: "<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" is: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
    else if(flag == 1){
        a = a&255;
        b = b&255;
        c = c&0;
        d = d&0;
        a = conv_binary(a);
        b = conv_binary(b);
        c = conv_binary(c);
        d = conv_binary(d);
        cout<<"Address of: "<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" is: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
    else if(flag == 2){
        a = a&255;
        b = b&255;
        c = c&255;
        d = d&0;
        a = conv_binary(a);
        b = conv_binary(b);
        c = conv_binary(c);
        d = conv_binary(d);
        cout<<"Address of: "<<a1<<" "<<b1<<" "<<c1<<" "<<d1<<" is: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
}
void NetworkB(int a , int b, int c, int d)
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 2){
        cout<<"Network id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" "<<c<<endl;
    }
    else if(flag == 1){
        cout<<"Netwok id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<endl;
    }
    else if(flag == 0){
        cout<<"Network id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<endl;
    }
}
void HostB(int a , int b, int c, int d)
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 0){
        cout<<"Host id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<b<<" "<<c<<" "<<d<<endl;
    }
    else if(flag == 1){
        cout<<"Host id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<c<<" "<<d<<endl;
    }
    else if(flag == 2){
        cout<<"Host id of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<d<<endl;
    }
}
First_AddressB(int a , int b, int c, int d){
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 2){
        cout<<"First Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" "<<c<<" "<<'0'<<endl;
    }
    else if(flag == 1){
        cout<<"First Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" 0 1"<<endl;
    }
    else if(flag == 0){
        cout<<"First Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" 0 0 1"<<endl;
    }
}
Last_AddressB(int a , int b, int c, int d){
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 0){
        cout<<"Last Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<11111111<<" "<<11111111<<" 11111110"<<endl;
    }
    else if(flag == 1){
        cout<<"Last Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" 11111111 11111110"<<endl;
    }
    else if(flag == 2){
        cout<<"Last Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" 11111111 11111111 11111110"<<endl;
    }
}
RangeB(int a , int b, int c, int d){
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 0){
        cout<<"Range of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<0<<" "<<0<<" 0 - "<<a<<" "<<11111111<<" "<<11111111<<" 11111111"<<endl;
    }
    else if(flag == 1){
        cout<<"Last Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" "<<0<<" 0 - "<<a<<" "<<b<<" 11111111 11111111"<<endl;
    }
    else if(flag == 2){
        cout<<"Last Address of "<<a<<" "<<b<<" "<<c<<" "<<d<<" is: "<<a<<" "<<b<<" "<<c<<" 0 - "<<a<<" 11111111 11111111 11111111"<<endl;
    }
}
No_of_HostsB(int a , int b, int c, int d){
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
    a = conv_binary(a);
    b = conv_binary(b);
    c = conv_binary(c);
    d = conv_binary(d);
    if(flag == 0){
        cout<<"Number of hosts for "<<a<<" "<<b<<" "<<c<<" "<<d<<" are: 16777216(256^3)"<<endl;
    }
    else if(flag == 1){
        cout<<"Number of hosts for "<<a<<" "<<b<<" "<<c<<" "<<d<<" are: 65536(256^2)"<<endl;
    }
    else if(flag == 2){
        cout<<"Number of hosts for "<<a<<" "<<b<<" "<<c<<" "<<d<<" are: 256"<<endl;
    }
}
int main()
{
    long long int a,b,c,d;
    a1:cout<<"Enter the binary ip address with a space in between, for example(a b c d): "<<endl;
    cin>>a>>b>>c>>d;
    int a2,b2,c2,d2;
    a2 = binaryToDecimal(a);
    b2 =binaryToDecimal(b);
    c2 = binaryToDecimal(c);
    d2 = binaryToDecimal(d);
    cout<<a2<<" "<<b2<<" "<<c2<<" "<<d2<<endl;
    if(a2<0||b2<0||c2<0||d2<0){
        cout<<"Error!!, byte cannot be negative"<<endl;
        goto a1;
    }
    if(a2>255||b2>255||c2>255||d2>255){
        cout<<"Error!!, cannot process the byte..."<<endl;
        goto a1;
    }
    int a3;
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
        cin>>a3;
        switch(a3){
            case 1:
                ClassB(a2,b2,c2,d2);
                break;
            case 2:
                AddressB(a2,b2,c2,d2);
                break;
            case 3:
                NetworkB(a2,b2,c2,d2);
                break;
            case 4:
                HostB(a2,b2,c2,d2);
                break;
           case 5:
                First_AddressB(a2,b2,c2,d2);
                break;
            case 6:
                Last_AddressB(a2,b2,c2,d2);
                break;
            case 7:
                RangeB(a2,b2,c2,d2);
                break;
            case 8:
                No_of_HostsB(a2,b2,c2,d2);
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
