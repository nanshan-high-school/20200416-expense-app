#include <iostream>
using namespace std;

int main(){
    int catCount;
    cout << "請輸入共有幾個分類：";
    cin >> catCount;
    string name[100];
    for(int i = 0; i < catCount; i++){
        cout << "請輸入第" << i + 1 << "個分類的名稱：";
        cin >> name[i];
    }

    int value[100];
    int priceCount;
    cout << "請輸入共有幾筆帳：";
    cin >> priceCount;
    for(int i = 0; i < 100; i++){
        value[i] = 0;
    }

    for(int i = 0; i < priceCount; i++){
        cout << "請輸入第" << i + 1 << "筆資料：";
        int cat;
        cin >> cat;
        int valueTemp;
        cin >> valueTemp;
        value[cat - 1] += valueTemp;
    }

    cout << "\n";

    for(int i = 0; i < catCount; i++){
        cout << i + 1 << ". " << name[i] << "：" << value[i] << "\n";
    }
}
