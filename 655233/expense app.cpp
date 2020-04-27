#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum;

    cout << "請輸入幾類?";
    cin >> sum;
    cin.ignore();
    string num[sum];    

    for (int i = 0; i < sum; i++) {
        cout << i + 1 << "：";
        getline(cin,num[i]);
    }

    cout << "請輸入幾筆?";
    int item;
    int cost;
    int total[sum - 1];
    cin >> item;
    cin.ignore();
    string detail[item];
    
    for (int i = 0; i < sum; i++) {
        total[i] = 0;
    }      

    for (int j = 0; j < item; j++) {
        cout << "請輸入";
        cout << j + 1 << "：";
        int code;
        cin >> code;
        cin.ignore();
        cin >> cost;
        cin.ignore();
        cout << "此品項名稱?";
        getline(cin,detail[j]);
        total[code - 1] += cost;
    }

    for (int k = 0; k < sum; k++) {
        cout << num[k] << " ";
        cout << detail[k] << ":";
        cout << total[k] << endl;
    }
}
