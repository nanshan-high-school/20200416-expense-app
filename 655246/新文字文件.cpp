#include <iostream>
using namespace std;

int main() {
    int sort = 0;
    string aa[100];
    int item = 0;
    int total[100][2] = {0};

    for (int i = 0; i < sort; i++){
        cout << "No." << i + 1 << "kinds:";
        cin >> aa[i];
    }

    cout << "the total item:";
    cin >> item;

    for (int i = 0; i < item; i++){
        cout << i + 1 << "No. kind of check:";
        cin >> total[i][0];
        cout << i + 1 <<"amount:";
        cin >> total[i][1];
    }     

    int end[100] = {0};
    for (int i = 0; i < sort; i++){
        for (int j = 0; j < item; j++){
            if (total[i][0] == i + 1){
                end [i] += total[j][1];
            }
            
        }
        
    }
    
}