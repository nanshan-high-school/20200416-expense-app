#include <iostream>
using namespace std;
int main() {
  cout<<"請問有幾個分類";
  int type;
  cin>>type;
  cout<<"請問有幾筆帳";
  int bill;
  cin>>bill;
  int x[type][bill];
  for(int i=0;i<bill;i++){
      cout<<"請選擇要輸入的品項";
      int choose=0;
      cin>>choose;
      cout<<"請輸入帳目";
      int money;
      cin>>money;
      int y=0;
      for(;x[choose][y]!=0;y++){
          

      }
      money=x[choose][y];
      cout<<x[0][0]<<endl;
      cout<<x[0][1]<<endl;//未完成
      

  }
