#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    /*if(a==1) {cout<<"Qish fasli"<<endl;}
    else if(a==2) {cout<<"Bahor fasli"<<endl;}
    else if(a==3) {cout<<"Yoz fasli"<<endl;}
    else if(a==4) {cout<<"Kuz fasli"<<endl;}
    else  {cout<<"Xatolik!"<<endl;}*/

    switch(a) {
        case 1:
            cout<<"Qish fasli"<<endl;
        break;
        case 2:
            cout<<"Bahor fasli"<<endl;
        break;
        case 3:
            cout<<"Yoz fasli"<<endl;
        break;
        case 4:
            cout<<"Kuz fasli"<<endl;
        break;
        default:
            cout<<"Xatolik!"<<endl;
    }
    return 0;
}
