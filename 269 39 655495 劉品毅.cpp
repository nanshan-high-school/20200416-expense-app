#include <iostream>
using namespace std;

int main() {
  cout<<"請問有幾個分類";
  int type;
  cin>>type;

  cout<<"請問有幾筆帳";
  int accout;
  cin >> accout;

  int item[type][accout];

  for(int i = 0;i < accout;i++){
      cout << "請輸入種類";
      int choise = 0;
      cin >> choise;

      cout<<"請輸入帳目";
      int coin;
      cin >> coin;

      for (int j = 0; j < coin; j++){
          accout += coin;
      }
  }//未完成
}
