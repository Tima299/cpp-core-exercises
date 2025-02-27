#include <iostream>
using namespace std;
bool str(string s) {
    /*int count=0;
    size_t pos = s.find("acer");
    while(pos!=string::npos) {
        count++;
        pos = s.find("acer", 4);
    }
    int count2=0;
    size_t pos2 = s.find("java");
    while(pos2!=string::npos) {
        count2++;
        pos2 = s.find("java", 4);
    }*/
    int count =0, count2=0;
    for (int i = 0; i < s.length(); ++i) {
        if(s.substr(i, 4)=="acer") {
            count++;
            i=i+4;
        }
        if(s.substr(i, 4)=="java") {
            count2++;
            i=i+4;
        }
    }
    if(count==count2) {
        return true;
    }else {
        return false;
    }

}
int main() {
    string s;

    cout<<"Satr kiriting: ";
    cin.ignore();
    getline(cin, s);
cout<<boolalpha<<str(s)<<endl;;
    return 0;
}
