#include <iostream>
using namespace std;

int main() {
    int kinds;
    cout << "輸入幾種項目:";
    cin >> kinds;

    string item[kinds + 1];
    for(int i = 1; i <= kinds; i++){
        cout << "輸入第" << i << "項名稱:";
        cin >> item[i];
    }

    int number;
    cout << "\n要記帳幾項:";
    cin >> number;

    int cash[kinds + 1];

    for(int i = 1; i <= number; i++){
        cash[i] = 0;
    }

    for(int a,b,i = 1; i <= number; i++){
        cout << "\n第" << i << "項\n編號:";
        cin >> a;

        cout << "錢:";
        cin >> b;
        cash[a] += b;
    }
    
    cout << "\n";
    for(int i = 1; i <= kinds; i++){
        cout << item[i] << "項" << cash[i] << "元\n";
    }
}
