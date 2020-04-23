#include <iostream>
using namespace std;
int main() {
    int m;//共m種分類
    do{
        cout<<"有幾個分類?-->";
        cin>> m;
    }while(m<=0);

    int n;//共n筆帳
    do{
    cout<<"有幾筆帳?-->";
    cin>>n;
    }while(n<=0);


    int k[m];//開m格紀錄金額
    int p;//分類
    int c;//金額
    for(int i=0;i<n;i++){
        k[i]=0;//清空所有陣列
    }
    for(int i=0;i<n;i++){
        do{
        cout<<"請輸入第幾分類";
        cin>>p;//輸入第p分類
        }while(p<=0||p>m);
        
        do{
        cout<<"請輸入金額";
        cin>>c;//輸入金額
        }while(c<0);
        cout<<endl<<endl;
        k[p-1]+=c;
    }
    for(int i=0;i<m;i++){
        cout<<"第"<<i+1<<"類共"<<k[i]<<"元"<<endl;//列出第幾項共幾元
    }
}