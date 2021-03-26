#ifdef _WIN32
#include<windows.h>
#else
#include<unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;
bool flag = true;
int pos = 0;
string sendersaw(string a){
    if(flag){
        int len = a.length();
        string b;
        b = a.substr(pos,1);
        pos++;
        flag = false;
        cout<<"Sending "<<b<<endl;
        return b;
    }

}
string recieversaw(string a){
    if(flag == false){
        string arr[1000];
        arr[pos-1] = a;
        flag = true;
        string c;
        c = "Acknowledgement: recieved " + arr[pos-1];
        return c;
    }
}
void sleepsaw(){
    Sleep(1000);
    cout<<"sending";
    Sleep(1000);
    cout<<".";
    Sleep(1000);
    cout<<".";
    Sleep(1000);
    cout<<"."<<endl;
}
int main(){
    cout<<"Enter the String: ";
    string a;
    cin>>a;
    string temp;
    int len = a.length();
    for(int i=0;i<len;i++){
        temp = sendersaw(a);
        sleepsaw();
        cout<<recieversaw(temp)<<endl;
    }
}
