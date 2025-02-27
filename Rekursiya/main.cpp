// Temur Eshboyev
// 22/11/2024
// 18:24:31
#include <iostream>
#include <string>
using namespace std;

int yigindi(int n) {
    if (n == 0) return 0;
    return n + yigindi(n - 1);
}

int fact2(int n) {
    if (n <= 0) return 1;
    return n * fact2(n - 2);
}

int daraja(int x, int n) {
    if (n == 0) return 1;
    return x * daraja(x, n - 1);
}

int raqamlarYigindisi(int n) {
    if (n == 0) return 0;
    return n % 10 + raqamlarYigindisi(n / 10);
}

int fibonachchi(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonachchi(n - 1) + fibonachchi(n - 2);
}

void oralikniChopEt(int a, int b) {
    if (a > b) return;
    cout << a << " ";
    oralikniChopEt(a + 1, b);
}

int oralikYigindisi(int a, int b) {
    if (a > b) return 0;
    return a + oralikYigindisi(a + 1, b);
}

int oralikKoPaytmasi(int a, int b) {
    if (a > b) return 1;
    return a * oralikKoPaytmasi(a + 1, b);
}

int kvadratlarYigindisi(int n) {
    if (n == 0) return 0;
    return n * n + kvadratlarYigindisi(n - 1);
}

void teskariChopEt(int n) {
    if (n == 0) return;
    cout << n % 10;
    teskariChopEt(n / 10);
}

int raqamlarKoPaytmasi(int n) {
    if (n == 0) return 1;
    return (n % 10) * raqamlarKoPaytmasi(n / 10);
}

int qoldiq(int a, int b) {
    if (a < b) return a;
    return qoldiq(a - b, b);
}

int butunQism(int a, int b) {
    if (a < b) return 0;
    return 1 + butunQism(a - b, b);
}

int koPaytir(int a, int b) {
    if (b == 0) return 0;
    return a + koPaytir(a, b - 1);
}

void oktal(int n) {
    if (n == 0) return;
    oktal(n / 8);
    cout << n % 8;
}

int satrdagiRaqamlarSoni(string s, int index = 0) {
    if (index == s.length()) return 0;
    return isdigit(s[index]) + satrdagiRaqamlarSoni(s, index + 1);
}

int satrdagiRaqamlarYigindisi(string s, int index = 0) {
    if (index == s.length()) return 0;
    if (isdigit(s[index])) return (s[index] - '0') + satrdagiRaqamlarYigindisi(s, index + 1);
    return satrdagiRaqamlarYigindisi(s, index + 1);
}

string teskariSatr(string s, int index = 0) {
    if (index == s.length()) return "";
    return teskariSatr(s, index + 1) + s[index];
}

int unliHarflarSoni(string s, int index = 0) {
    if (index == s.length()) return 0;
    char c = tolower(s[index]);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') + unliHarflarSoni(s, index + 1);
}
int ikkinchiMaksimal(int arr[], int n, int max1 = INT_MIN, int max2 = INT_MIN) {
    if (n == 0) return max2;
    if (arr[n - 1] > max1) {
        max2 = max1;
        max1 = arr[n - 1];
    } else if (arr[n - 1] > max2 && arr[n - 1] != max1) {
        max2 = arr[n - 1];
    }
    return ikkinchiMaksimal(arr, n - 1, max1, max2);
}

int main() {
    int vazifa;
    char davomEtish;
    do {
        cout << "Qaysi mashqni bajarishni xohlaysiz? (1 - 20, 0 - chiqish)" << endl;
        cin >> vazifa;
        switch (vazifa) {
            case 1: {
                int n;
                cin >> n;
                cout << yigindi(n) << endl;
                break;
            }
            case 2: {
                int n;
                cin >> n;
                cout << fact2(n) << endl;
                break;
            }
            case 3: {
                int x, n;
                cin >> x >> n;
                cout << daraja(x, n) << endl;
                break;
            }
            case 4: {
                int n;
                cin >> n;
                cout << raqamlarYigindisi(n) << endl;
                break;
            }
            case 5: {
                int n;
                cin >> n;
                cout << fibonachchi(n) << endl;
                break;
            }
            case 6: {
                int a, b;
                cin >> a >> b;
                oralikniChopEt(a, b);
                cout << endl;
                break;
            }
            case 7: {
                int a, b;
                cin >> a >> b;
                cout << oralikYigindisi(a, b) << endl;
                break;
            }
            case 8: {
                int a, b;
                cin >> a >> b;
                cout << oralikKoPaytmasi(a, b) << endl;
                break;
            }
            case 9: {
                int n;
                cin >> n;
                cout << kvadratlarYigindisi(n) << endl;
                break;
            }
            case 10: {
                int n;
                cin >> n;
                teskariChopEt(n);
                cout << endl;
                break;
            }
            case 11: {
                int n;
                cin >> n;
                cout << raqamlarKoPaytmasi(n) << endl;
                break;
            }
            case 12: {
                int a, b;
                cin >> a >> b;
                cout << qoldiq(a, b) << endl;
                break;
            }
            case 13: {
                int a, b;
                cin >> a >> b;
                cout << butunQism(a, b) << endl;
                break;
            }
            case 14: {
                int a, b;
                cin >> a >> b;
                cout << koPaytir(a, b) << endl;
                break;
            }
            case 15: {
                int n;
                cin >> n;
                oktal(n);
                cout << endl;
                break;
            }
            case 16: {
                string s;
                cin >> s;
                cout << satrdagiRaqamlarSoni(s) << endl;
                break;
            }
            case 17: {
                string s;
                cin >> s;
                cout << satrdagiRaqamlarYigindisi(s) << endl;
                break;
            }
            case 18: {
                string s;
                cin >> s;
                cout << teskariSatr(s) << endl;
                break;
            }
            case 20: {
                int n;
                cout << "Massiv hajmini kiriting: ";
                cin >> n;
                int arr[n];
                cout << "Massiv elementlarini kiriting: ";
                for (int i = 0; i < n; i++) cin >> arr[i];
                cout << "Ikkinchi maksimal element: " << ikkinchiMaksimal(arr, n) << endl;
                break;
            }
        }
        cin >> davomEtish;
    } while (davomEtish == 'y');
    return 0;
}
