#include <iostream>
#include <string>
using namespace std;

int main() {
    int sortNumber;
    cout << "請輸入幾種分類:";
    cin >> sortNumber;

    string sort[sortNumber];
    for (int i = 0; i < sortNumber; i++) {\
        cout << "請輸入第" << i + 1 << "筆分類名稱:";
        cin >> sort[i];
    }

    int dataNumber;
    cout << "請輸入幾筆資料:";
    cin >> dataNumber;

    string dataName[dataNumber];
    string dataProject[dataNumber];
    int dataAmount[1000];
    for (int i = 0; i < dataNumber; i++) {
        cout << "請輸入第" << i + 1 << "筆資料名稱及细項:";
        cin >> dataName[i];
        cin >> dataProject[i];

        cout << "請輸入第" << i + 1 << "筆資料數目:";
        cin >> dataAmount[i];
    }

    
    int sortAmount[1000];
    for (int i = 0; i < sortNumber; i++) {
       for (int j = 0; j < dataNumber; j++) {
           if (dataName[j] == sort[i]) {
               sortAmount[i] += dataAmount[j];
           }
       }
    }

    for (int i = 0; i < sortNumber; i++) {
        cout << sort[i] << " :" << sortAmount[i] << "元:\n";
        cout << "細項:\n";
        for (int j = 0; j < dataNumber; j++) {
            if (dataName[j] == sort[i]) {
                cout << dataProject[j] << " = " << dataAmount[j] << "元\n";
            }
        }
    }
}