#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    void t98(), t99(), t100(), t101(), t102(), t103(), t104(), t105(), t106(), t107(), t108(), t109();
    int choice;
    char toCont;
    do {
        cout << "___________________________________________" << endl;
        cout << "Matematik funksiyaga doir masalalar [98 - 109, 0-chiqish]" << endl;
        cin >> choice;
        switch (choice) {
            case 98:
                t98();
                break;
            case 99:
                t99();
                break;
            case 100:
                t100();
                break;
            case 101:
                t101();
                break;
            case 102:
                t102();
                break;
            case 103:
                t103();
                break;
            case 104:
                t104();
                break;
            case 105:
                t105();
                break;
            case 106:
                t106();
                break;
            case 107:
                t107();
                break;
            case 108:
                t108();
                break;
            case 109:
                t109();
                break;
            default:
                cout << "[98 - 109] oraliqda tanlang!" << endl;
        }
        cout << "___________________________________________" << endl;

        cout << "Do you want to continue? y/n" << endl;
        cin >> toCont;
        if (choice == 0) {
            toCont == 'n' || toCont == 'N';
            break;
        }
    } while (toCont == 'y' || toCont == 'Y');
    return 0;
}

void t98() {
    int a, b, c, d, e, f;
    cout << "6 ta songa qiymat bering! " << endl;
    cin >> a >> b >> c >> d >> e >> f;
    int mini = min(min(min(min(min(a, b), c), d), e), f);
    int maxi = max(max(max(max(max(a, b), c), d), e), f);
    cout << "Min : " << mini << endl;
    cout << "Max : " << maxi << endl;
}

void t99() {
    int a, b, c, d, e;
    cout << "Berilgan 5 ta sonni qabul qilib, shundan\n"
            " eng katta ikkinchi sonni topadigan dastur\n"
            " tuzing. Masalan: 6 3 8 7 5 →  7" << endl;
    cin >> a >> b >> c >> d >> e;
    int maxi = max(max(max(max(a, b), c), d), e);
    if (a == maxi) a = INT_MIN;
    else if (b == maxi) b = INT_MIN;
    else if (c == maxi) c = INT_MIN;
    else if (d == maxi) d = INT_MIN;
    else if (e == maxi) e = INT_MIN;
    int secondMax = max(max(max(max(a, b), c), d), e);
    cout << "Eng katta ikkinchi son: " << secondMax << endl;
}

void t100() {
    double a, b;
    cout << "A katetga qiymat bering : ";
    cin >> a;
    cout << "B katetga qiymat bering : ";
    cin >> b;
    double gipotenuza = sqrt(pow(a, 2) + pow(b, 2));
    double yuza = (a * b) / 2;
    double perimetr = a + b + gipotenuza;
    cout << "Gipotenuza : " << gipotenuza << endl;
    cout << "Yuza : " << yuza << endl;
    cout << "Perimetr : " << perimetr << endl;
}

void t101() {
    double num;
    cout << "Berilgan num sonini kiriting: ";
    cin >> num;
    cout << "Rounding using different methods:" << endl;
    cout << "Round: " << round(num) << endl;
    cout << "Floor: " << floor(num) << endl;
    cout << "Ceil: " << ceil(num) << endl;
}

void t102() {
    int a, n;
    cout << "asos kiriting :";
    cin >> a;
    cout << "daraja kiriting :";
    cin >> n;
    int x = pow(a, n);
    cout << "Natija : " << x << endl;
}

void t103() {
    int n;
    cout << "n :";
    cin >> n;
    double kvadrat = sqrt(n);
    double kub = cbrt(n);
    cout << "Kvadrat ildiz : sqrt(" << n << ") - " << kvadrat << endl;
    cout << "Kub ildiz : cbrt(" << n << ") - " << kub << endl;
}

void t104() {
    double a, b;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    double g = sqrt(a * b);
    cout << "O'rta geometrik natija :" << g << endl;
}

void t105() {
    int a, b, c, d;
    cout << "a, b, c, d sonlarini kiriting: ";
    cin >> a >> b >> c >> d;

    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4, [](int x, int y) { return x > y; });

    cout << "Kamayish tartibida: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void t106() {
    int N, count = -1;
    cout << "N :";
    cin >> N;
    for (int i = 0; i <= abs(N); i++) {
        double x = sqrt(i);
        count++;
        cout << "Ildiz osti " << count << " ning qiymati : " << x << endl;;
    }
}

void t107() {
    int a, b, c, d;
    cout << "a, b, c, d sonlarini kiriting: ";
    cin >> a >> b >> c >> d;

    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4, [](int x, int y) { return x < y; });
    cout << "O'sish tartibida: ";
    for (int i = 0; i < 4; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void t108() {
    double num;
    cout << "Sonni kiriting: ";
    cin >> num;
    double square = pow(num, 2);
    double cube = pow(num, 3);

    cout << "Sonning kvadrati: " << square << endl;
    cout << "Sonning kubi: " << cube << endl;
}

void t109() {
    int a, b, c, d;
    cout << "4 ta son kiriting :";
    cin >> a >> b >> c >> d;
    int maxi = max(max(max(a, b), c), d);
    int mini = min(min(min(a, b), c), d);
    if (mini == maxi) {
        cout << "Yig'indisi : " << a + b + c + d << endl;
    } else {
        cout << "Ayirmasi : " << maxi - mini << endl;
    }
}
