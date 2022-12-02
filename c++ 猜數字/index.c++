#include<iostream>
using namespace std;
int main(){
    int a,i,c,game;
    
    cout<<"請輸入 1 ~ 100 的整數:";
    cin>>a;
    while(a>=1||a<=100){
        cout<<"請猜一個整數：";
        cin>>c;
        if(c>a)
            cout<<"太大\n";
        else if (c<a)
            cout<<"太小\n";
        else (c==a){
            cout<<"恭喜你答對\n";
            cout<<"請在輸入一個數：";
            cin>>a;
        }
    }
    if(a>100||a<=0)
    cout<<"您的數字"<<a<<"過於 太大 or 太小 無法判斷\n";
}
