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

    //cout << "�п�J���O��";
    //cin >> sort;
    cout << "�п�J�Ӽ�";
    cin >> number;

    cout << "�}�l��J�ӫ~���O �W�� ����\n";
    for (int i = 0; i < number; i++){
        cin >> sortCacular;
        cin >> nameBuffer;
        cin >> price;
        store[sortCacular - 1][amountBySort[sortCacular - 1]] = price;
        name[sortCacular - 1][amountBySort[sortCacular - 1]] = nameBuffer; 
        amountBySort[sortCacular - 1]++;

             
    }
    //�ˬd��X�C���ӫ~�Ӽ�
    //for (int i = 0; i < 10; i++)
        //cout << amountBySort[i];
    
    for (int i = 0; i < 100; i++){
        if (amountBySort[i] > 0){
            sum = 0;
            for (int j = 0; j < amountBySort[i]; j++){                  
                        cout << "�W��" << name[i][j] << '\n';
                        cout << "����:" << store[i][j] << '\n' ;
                        sum+=store[i][j];                        
            }
            cout << "���O" << i+1 << "�p�p:" << sum << '\n';
        }
    }       
}