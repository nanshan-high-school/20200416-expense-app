#include <iostream>
using namespace std;

int main() {
  int cat;
  cout << "幾個分類：";
  cin >> cat;
  
  string names[cat];
  for (int i = 0; i < cat; i++) {
    cout << "分類" << i + 1 << " 名字：";
    cin >> names[i];
  }

  int item;
  cout << "幾筆帳：";
  cin >> item;

  int items[item][2];
  for (int i = 0; i < item; i++) {
    for (int j = 0; j < 2; j++) {
      items[i][j] = 0;
    }
  }

  string name[item];
  
  for (int i = 0; i < item; i++) {
    cout << "帳" << i + 1 << " 名稱 分類(編號) 價錢：";
    cin >> name[i];
    cin >> items[i][0];
    cin >> items[i][1];
  }
  
  int total = 0;

  for (int i = 0; i < cat; i++) {
    cout << endl << "分類" << i + 1 << " 名字：" << names[i] << endl;
    for (int j = 0; j < item; j++) {
      if (items[j][0] == i + 1) {
        cout << " 帳" << j + 1 << " 名稱 " << name[j] << " 價錢 " << items[j][1] << endl;
        total += items[j][1];
      }
    }
    cout << "總價 "  << total;
    total = 0;
    cout << endl;
  }
}
