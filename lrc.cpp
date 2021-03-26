#include<bits/stdc++.h>
using namespace std;

int main()lrc
{
    cout<<"Enter the number of msgs: ";
    int r,c;
    cin>>r;
    cout<<"Enter number of bits in each msg: "<<endl;
    cin>>c;
    int arr[r+1][c];
    cout<<"press space after entering each bit in the msg"<<endl;
    for(int i=0;i<r;i++){
            cout<<"Enter message["<<i+1<<"] : ";
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"LRC calculation : "<<endl;
    int count =0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(arr[j][i] == 1){
                count++;
            }
        }
       if(count%2 ==0){
        arr[r][i] = 0;
       }
       else{
        arr[r][i] = 1;
       }
       count = 0;
    }

    for(int i=0;i<r;i++){
            cout<<"     ";
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"----------------------"<<endl;
    cout<<"lrc= ";
    for(int i = 0;i<c;i++){
        cout<<arr[r][i]<<" ";
    }
    cout<<"\n"<<endl;
    cout<<"The message we will send : \n";
    for(int i=0; i<c;i++){
        cout<<arr[r][i]<<" ";
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<"\n";
    for(int i=0;i<2*c-1;i++){
        cout<<"*";
    }
    cout<<"\nHere the first "<<c<<" digits are the lrc and the rest are msg1, masg2... and so on upto msg"<<r;

}




 /*   int count = 0;
    for(int i=0;i<c;i++){
        for(int j=0;j<r ;j++){
            if(arr[i][j] == 1){
                count++;
            }
            if(count%2==0){
                arr[i][r] = 0;
            }
            else{
                arr[i][r] = 1;
            }
            count =0;
        }*/

   // }
