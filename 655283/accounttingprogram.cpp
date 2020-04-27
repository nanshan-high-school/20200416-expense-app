#include <iostream>
#include <string>
using namespace std;

int main() {
int time = 0;
int num = 0;

cout << "category amount : ";
cin >> time;

string categoryname[time];
long long all[time];
int categoryidentity[time];

cin.ignore();

for (int i = 0; i < time; i++) {
    cout  << "\n" << "category " << i + 1 << " name : ";
    getline (cin , categoryname[i]);
}

cout << "\n" << "account amount : ";
cin >> num;

string accountname[num];
int account[num];

for (int j = 0; j < num; j++) {
    all[j] = 0;
    account[j] = 0;
}

for (int j = 0; j < num; j++) {
    cout << "\n" << j + 1 << " account identity :";
    cin >> categoryidentity[j];

    cout << j + 1 << " account name ";
    cin >> accountname[j];
    
    cout << j + 1 << " account price : ";
    cin >> account[j];
}

for (int i = 0; i < time; i++) {
    for (int k = 0; k < num; k++) {
        if (categoryidentity[k] == (i + 1)) {
            all[i] += account[k];
        }
    }
}

for (int i = 0; i < time; i++) {
    cout << "\n" << categoryname[i] <<" total price : ";
    cout <<all[i] << "\n";

    for (int k = 0; k < num; k++) {
        if (categoryidentity[k] == (i + 1)) {
            cout << accountname[k] << "\n" ;
        }
    }
}

}
