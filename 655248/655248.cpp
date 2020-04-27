#include <iostream>
using namespace std;

int main() {
    int sort = 0; 
    int number = 0;
    int store[100][100];
    int sortCacular = 0;
    int price = 0,sum=0;
    string nameBuffer;
    string name[100][100];
    int amountBySort[100] = {0};

    //cout << "請輸入類別數";
    //cin >> sort;
    cout << "請輸入個數";
    cin >> number;

    cout << "開始輸入商品類別 名稱 價格\n";
    for (int i = 0; i < number; i++){
        cin >> sortCacular;
        cin >> nameBuffer;
        cin >> price;
        store[sortCacular - 1][amountBySort[sortCacular - 1]] = price;
        name[sortCacular - 1][amountBySort[sortCacular - 1]] = nameBuffer; 
        amountBySort[sortCacular - 1]++;

             
    }
    //檢查輸出每類商品個數
    //for (int i = 0; i < 10; i++)
        //cout << amountBySort[i];
    
    for (int i = 0; i < 100; i++){
        if (amountBySort[i] > 0){
            sum = 0;
            for (int j = 0; j < amountBySort[i]; j++){                  
                        cout << "名稱" << name[i][j] << '\n';
                        cout << "價格:" << store[i][j] << '\n' ;
                        sum+=store[i][j];                        
            }
            cout << "類別" << i+1 << "小計:" << sum << '\n';
        }
    }       
}