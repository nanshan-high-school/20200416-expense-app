#include <iostream>
using namespace std;
int main() {
    int m;//�@m�ؤ���
    do{
        cout<<"���X�Ӥ���?-->";
        cin>> m;
    }while(m<=0);

    int n;//�@n���b
    do{
    cout<<"���X���b?-->";
    cin>>n;
    }while(n<=0);


    int k[m];//�}m��������B
    int p;//����
    int c;//���B
    for(int i=0;i<n;i++){
        k[i]=0;//�M�ũҦ��}�C
    }
    for(int i=0;i<n;i++){
        do{
        cout<<"�п�J�ĴX����";
        cin>>p;//��J��p����
        }while(p<=0||p>m);
        
        do{
        cout<<"�п�J���B";
        cin>>c;//��J���B
        }while(c<0);
        cout<<endl<<endl;
        k[p-1]+=c;
    }
    for(int i=0;i<m;i++){
        cout<<"��"<<i+1<<"���@"<<k[i]<<"��"<<endl;//�C�X�ĴX���@�X��
    }
}