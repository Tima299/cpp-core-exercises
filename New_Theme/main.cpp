#include <iostream>
#include <cmath>
using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 20, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
            case 1:
                t1();
                break;
            case 2:
                t2();
                break;
            case 3:
                t3();
                break;
            case 4:
                t4();
                break;
            case 5:
                t5();
                break;
            case 6:
                t6();
                break;
            case 7:
                t7();
                break;
            case 8:
                t8();
                break;
            case 9:
                t9();
                break;
            case 10:
                t10();
                break;
            case 11:
                t11();
                break;
            case 12:
                t12();
                break;
            case 13:
                t13();
                break;
            case 14:
                t14();
                break;
            case 15:
                t15();
                break;
            case 16:
                t16();
                break;
            case 17:
                t17();
                break;
            case 18:
                t18();
                break;
            case 19:
                t19();
                break;
            case 20:
                t20();
                break;
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

void t1() {
    int a, b, c, d, e;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    cout << "c :";
    cin >> c;
    cout << "d :";
    cin >> d;
    cout << "e :";
    cin >> e;
    int x = max(max(max(max(a, b), c), d), e);
    cout << "Max : " << x << endl;
}

void t2() {
    int a, b, c, d, e, f;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    cout << "c :";
    cin >> c;
    cout << "d :";
    cin >> d;
    cout << "e :";
    cin >> e;
    cout << "f :";
    cin >> f;
    int x = (min(min(min(min(min(a, b), c), d), e), f));
    cout << "Min : " << x << endl;
}

void t3() {
    int N, count = 0;
    cout << "N :";
    cin >> N;
    for (int i = 0; i <= abs(N); i++) {
        double x = sqrt(i);
        count++;
        cout << "Ildiz osti " << count << " ning qiymati : " << x << endl;;
    }
}

void t4() {
    int a, b;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    if (max(a, b) == b) {
        for (int i = a; i <= b; ++i) {
            double x = cbrt(i);
            cout << "Kub ildiz osti " << i << " ning qiymati : " << x << endl;
        }
    } else {
        cout << "b soni a sonidan kichik bo'lishi mumkin emas!" << endl;
    }
}

void t5() {
    int a, b;
    cout << "a katetga qiymat bering :";
    cin >> a;
    cout << "b katetga qiymat bering :";
    cin >> b;
    double c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "To'g'ri burchakli uchburchakning gipotenuzasi : " << c << endl;
}

void t6() {
    int n;
    cout << "n :";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        double kvadrat = sqrt(i);
        double kub = cbrt(i);
        cout << "Kvadrat ildiz : sqrt(" << i << ") - " << kvadrat << endl;
        cout << "Kub ildiz : cbrt(" << i << ") - " << kub << endl;
        cout << "_____________________________________________________________________________" << endl;
    }
}

void t7() {
    double a;
    do {
        cout << "a :";
        double expression = pow(a, 3) - 3 * a;
        cin >> a;
        if (a < 0) {
            cout << "Exiting, as non-positive input detected." << endl;
            break;
        }
        if (expression >= 0) {
            double x = sqrt(expression) + 5;
            cout << "Natija : " << x << " -> Formula :  (sqrt(pow(a, 3) - 3 * a) + 5)" << endl;
        } else {
            cout << "Ildiz osti musbat son bo'lishi kerak!" << endl;
        }
    } while (true);
}

void t8() {
    int a, b, c, d, e;
    cout << "5 ta son kiriting :";
    cin >> a >> b >> c >> d >> e;
    int m = max(max(max(max(a, b), c), d), e);
    cout << "Max : " << m << endl;
}

void t9() {
    int a, expr;
    cout << "a :";
    cin >> a;
    expr = 2 * abs(a) + cbrt(pow(a, 4) - pow(a, 2)) + 2;
    cout << "Natija : " << expr << endl;
}

void t10() {
    int a, b, c, d, e, f;
    cout << "6 ta son kiriting :";
    cin >> a >> b >> c >> d >> e >> f;
    int m = min(min(min(min(min(a, b), c), d), e), f);
    cout << "Min : " << m << endl;
}

void t11() {
    double a;
    while (true) {
        cout << "a :";
        cin >> a;
        if (a == 0) {
            break;
        }
        double exp = (pow(a, 2) + 3 * a) / (sqrt(a + 2));
        cout << "Natija : " << exp << endl;
    }
}

void t12() {
    double N;
    cout << "N :";
    cin >> N;
    for (double i = 0; i <= N; ++i) {
        double x = sqrt(i);
        cout << "sqrt(" << i << ") = " << x << endl;
    }
}

void t13() {
    while (true) {
        long double a;
        cout << "a :";
        cin >> a;
        if (a == 0) {
            break;
        }
        long double exp = pow(a, pow(a, 2)) + 3 * sqrt(a);
        cout << "Natija : " << exp << endl;
    }
}

void t14() {
    int a, b;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    if (max(a, b) == b) {
        for (int i = a; i <= b; ++i) {
            double x = cbrt(i);
            cout << "Kub ildiz osti " << i << " ning qiymati : " << x << endl;
        }
    } else {
        cout << "b soni a sonidan kichik bo'lishi mumkin emas!" << endl;
    }
}

void t15() {
    double a;
    while (true) {
        cout << "a :";
        cin >> a;
        if (a == 0) {
            break;
        }
        double expr = pow(a, ((2 * a + 1) / 3)) + cbrt(pow(a, 7));
        cout << "Natija : " << expr << endl;
    }
}

void t16() {
    int a, b;
    cout << "a katetga qiymat bering :";
    cin >> a;
    cout << "b katetga qiymat bering :";
    cin >> b;
    double c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "To'g'ri burchakli uchburchakning gipotenuzasi : " << c << endl;
}

void t17() {
    double a;
    while (true) {
        cout << "a :";
        cin >> a;
        if (a == 0) {
            break;
        }
        double expr = pow(a, sqrt(a + 2)) * abs(a);
        cout << "Natija : " << expr << endl;
    }
}

void t18() {
    int n;
    cout << "n :";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        double kvadrat = sqrt(i);
        double kub = cbrt(i);
        cout << "Kvadrat ildiz : sqrt(" << i << ") - " << kvadrat << endl;
        cout << "Kub ildiz : cbrt(" << i << ") - " << kub << endl;
        cout << "_____________________________________________________________________________" << endl;
    }
}

void t19() {
    double a;
    while (true) {
        cout << "a :";
        cin >> a;
        if (a == 0) {
            break;
        }
        double expr = abs(cbrt(a - 3) * pow(a, 6));
        cout << "Natija : " << expr << endl;
    }
}

void t20() {
    int a, b, c, d;
    cout << "a, b, c, d larga qiymat bering: ";
    cin >> a >> b >> c >> d;

    int max1 = max(max(a, b), max(c, d));
    int min1 = min(min(a, b), min(c, d));
    int middleHigher, middleLower;

    if ((a != max1) && (a != min1)) {
        middleLower = a;
    } else if ((b != max1) && (b != min1)) {
        middleLower = b;
    } else if ((c != max1) && (c != min1)) {
        middleLower = c;
    } else {
        middleLower = d;
    }

    if ((a != max1) && (a != min1) && (a != middleLower)) {
        middleHigher = a;
    } else if ((b != max1) && (b != min1) && (b != middleLower)) {
        middleHigher = b;
    } else if ((c != max1) && (c != min1) && (c != middleLower)) {
        middleHigher = c;
    } else {
        middleHigher = d;
    }
    cout << "Eng kattasi = " << max1 << endl;
    cout << "Kattaroq = " << middleHigher << endl;
    cout << "Kichikroq = " << middleLower << endl;
    cout << "Eng kichik = " << min1 << endl;
}
