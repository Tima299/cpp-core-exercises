//Temur Eshboyev
// 2024 yil 17-noyabr
//soat 17:41:18
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

string cast(int a) {
    cout << "Son kiriting :";
    cin >> a;
    return to_string(a);
}

int cast(string a) {
    cout << "Son kiriting :";
    cin.ignore();
    getline(cin, a);
    return stoi(a);
}
string rev(string ch) {
    cout<<"String kiriting :";
    cin.ignore();
    getline(cin, ch);
    reverse(ch.begin(), ch.end());
    return ch;
}
int rev(int son) {
    cout<<"Raqamga qiymat bering!";
    cin>>son;
    int sum = 0 ;
    while(son>0) {
       int digit =  son %10;
     sum +=digit;     
        son/=10;
    }
    return sum;
}
float add(float a, float b) {
    return a + b;
}
float add(float a, float b, float c) {
    return a + b + c;
}
string add(string a, string b) {
    return a + b;
}
int findMax(int a, int b) {
    return max(a, b);
}
int findMax(int a, int b, int c) {
    return max(a, max(b, c));
}
int calc(int a, int b) {
    return a + b;
}
int calc(int a, int b, int c) {
    return a * b * c;
}
int mini(int a, int b) {
    return min(a, b);
}
int mini(int a, int b, int c) {
    return min(a, min(b, c));
}
int mini(int a, int b, int c, int d) {
    return min(a, min(b, min(c, d)));
}
int mini(int a, int b, int c, int d, int e) {
    return min(a, min(b, min(c, min(d, e))));
}
int mul(int a) {
    int result = 1;
    for (int i = 1; i <= a; i++) {
        result *= i;
    }
    return result;
}
int mul(int a, int b) {
    int result = 1;
    for (int i = a; i <= b; i++) {
        result *= i;
    }
    return result;
}
int mul(int a, int b, int c) {
    return a * b * c;
}
char replaceLetter(char ch) {
    if(islower(ch)) {
        return toupper(ch);
    }
    else {
        return tolower(ch);
    }
}
string replaceLetter(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}
void repeat(int a) {
    for (int i = 1; i <=10; ++i) {
        cout<<a<<" ";
    }cout<<endl;
}
void repeat(int a, int b) {
    for (int i = 1; i <= b; ++i) {
        cout<<a<<" ";
    }cout<<endl;
}
int shart(int a, int b) {
    return pow(a, b);
}
float shart(float a, float b) {
    return  abs(a - b);
}
int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 59, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1: {
                int num;
                cout << "Int to String\n";
                string strNatija = cast(num);
                cout << "Stringga aylantirilgan son: " << strNatija << endl;
            break;
            }
            case 2 : {
                string strNum;
                cout << "String to Int\n";
                int natija = cast(strNum);
                cout << "Intga aylantirilgan string: " << natija << endl;
                break;
            }
            case 3: {
                string str;
                cout<<"String kiritilsa "<<endl;
                string strNatija = rev(str);
                cout<<"Stringni teskarisi: "<<strNatija<<endl;
                break;
            }
            case 4: {
                int num;
                cout<<"Son kiritilsa : "<<endl;
                int raqam = rev(num);
                cout<<"Sonni raqamlar yig'indis : "<<raqam<<endl;
                break;
            }
            case 5: {
                float a, b;
                cout << "2 ta float son kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta float sonlar yig'indisi : " << add(a, b) << endl;
                break;
            }
            case 6: {
                float a, b, c;
                cout << "3 ta float son kiritilsa : " << endl;
                cin >> a >> b >> c;
                cout << "3 ta float sonlar yig'indisi : " << add(a, b, c) << endl;
                break;
            }
            case 7: {
                string a, b;
                cout << "2 ta string kiritilsa : " << endl;
                cin.ignore();
                getline(cin, a);
                getline(cin, b);
                cout << "2 ta stringlar yig'indisi : " << add(a, b) << endl;
                break;
            }
            case 8: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta int sonlar yig'indisi : " << findMax(a, b) << endl;
                break;
            }
            case 9: {
                int a, b, c;
                cout << "3 ta int kiritilsa : " << endl;
                cin >> a >> b >> c;
                cout << "3 ta int sonlar yig'indisi : " << findMax(a, b, c) << endl;
                break;
            }
            case 10: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta int sonlar yig'indisi : " << calc(a, b) << endl;
                break;
            }
            case 11: {
                int a, b, c;
                cout << "3 ta int kiritilsa : " << endl;
                cin >> a >> b >> c;
                cout << "3 ta int sonlar ko'paytmasi : " << calc(a, b, c) << endl;
                break;
            }
            case 12: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta int sonlar minimumi : " << mini(a, b) << endl;
                break;
            }
            case 13: {
                int a, b, c;
                cout << "3 ta int kiritilsa : " << endl;
                cin >> a >> b >> c;
                cout << "3 ta int sonlar minimumi : " << mini(a, b, c) << endl;
                break;
            }
            case 14: {
                int a, b, c, d;
                cout << "4 ta int kiritilsa : " << endl;
                cin >> a >> b >> c >> d;
                cout << "4 ta int sonlar minimumi : " << mini(a, b, c, d) << endl;
                break;
            }
            case 15: {
                int a, b, c, d, e;
                cout << "5 ta int kiritilsa : " << endl;
                cin >> a >> b >> c >> d >> e;
                cout << "5 ta int sonlar minimumi : " << mini(a, b, c, d, e) << endl;
                break;
            }
            case 16: {
                int a;
                cout << "Son kiritilsa : " << endl;
                cin >> a;
                cout << "Sonning faktoriali : " << mul(a) << endl;
                break;
            }
            case 17: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta int sonlar ko'paytmasi : " << mul(a, b) << endl;
                break;
            }
            case 18: {
                int a, b, c;
                cout << "3 ta int kiritilsa : " << endl;
                cin >> a >> b >> c;
                cout << "3 ta int sonlar ko'paytmasi : " << mul(a, b, c) << endl;
                break;
            }
            case 19: {
                char ch;
                cout << "Biror belgi kiritilsa : " << endl;
                cin >> ch;
                cout << "Belgi o'zgarishi : " << replaceLetter(ch) << endl;
                break;
            }
            case 20: {
                string s;
                cout << "String kiritilsa : " << endl;
                cin.ignore();
                getline(cin, s);
                cout << "String o'zgarishi : " << replaceLetter(s) << endl;
                break;
            }
            case 21: {
                int a;
                cout << "Son kiritilsa : " << endl;
                cin >> a;
                repeat(a);
                break;
            }
            case 22: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                repeat(a, b);
                break;
            }
            case 23: {
                int a, b;
                cout << "2 ta int kiritilsa : " << endl;
                cin >> a >> b;
                cout << "Darajaga ko'tarilgan son : " << shart(a, b) << endl;
                break;
            }
            case 24: {
                float a, b;
                cout << "2 ta float kiritilsa : " << endl;
                cin >> a >> b;
                cout << "2 ta float sonlar orasidagi masofa : " << shart(a, b) << endl;
                break;
            }
            default:
                cout << "_____________________________________________________________________________" << endl;
        }
        if (task != 0) {
            cout << "Do you want to run another program? y/n" << endl;
            cin >> toContinue;
        } else {
            toContinue == 'n';
        }
    } while ((toContinue == 'Y') || (toContinue == 'y'));

    return 0;
}
