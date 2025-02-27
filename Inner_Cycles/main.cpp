#include <iostream>
using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
    void t31(), t32(), t33(), t34(), t35(), t36();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 36, 0-chiqish)" << endl;
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
            case 21:
                t21();
                break;
            case 22:
                t22();
                break;
            case 23:
                t23();
                break;
            case 24:
                t24();
                break;
            case 25:
                t25();
                break;
            case 26:
                t26();
                break;
            case 27:
                t27();
                break;
            case 28:
                t28();
                break;
            case 29:
                t29();
                break;
            case 30:
                t30();
                break;
            case 31:
                t31();
                break;
            case 32:
                t32();
                break;
            case 33:
                t33();
                break;
            case 34:
                t34();
                break;
            case 35:
                t35();
                break;
            case 36:
                t36();
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
    int n;
    cout << "Foydalanuvchi tomonidan kiritilgan N soni asosida\n"
            " quyidagi shaklga mos sonlarni chiqaruvchi dastur\n"
            " tuzing, Misol: N=5" << endl;
    cout << "1\n"
            "2 2\n"
            "3 3 3\n"
            "4 4 4 4\n"
            "5 5 5 5 5" << endl;
    cout << "_____________________________________________________________________________" << endl;
    cin >> n;
    for (int i = 1; i <= 4; ++i) {
        //local
        cout << "\n Hafta : " << i << "||";
        for (int j = 1; j <= 7; ++j) {
            cout << j << " - kun  ";
        }
    }
    cout << endl;
}

void t2() {
    int n, m;
    cout << "Qator :";
    cin >> n;
    cout << "Ustun :";
    cin >> m;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << " * ";
        }
        cout << endl;
    }
}

void t3() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t4() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t5() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) == n - 1 || i == j) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t6() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || j == n - 1 || i == n / 2 || j == n) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t7() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || j == n - 1 || i == j) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t8() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || j == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t9() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t10() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == n / 2) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t11() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || i == n - 1 || i == j) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t12() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || j == n - 1 || j + i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t13() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || i == n - 1 || j + i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t14() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t15() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j <= i) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t16() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j + i <= n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t17() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j + i >= n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}


void t18() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i || i == 0 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t19() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == 0 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t20() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t21() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == n - 1 || j == 0 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t22() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == n - 1 || j == 0 || i == n - 1 || i == n / 2 || j == n / 2) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t23() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == 0 || j == n - 1 || j == 0 || i == n - 1 || i == n / 2 || j == n / 2)) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t24() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == 0 || j == n - 1 || j == 0 || i == n - 1 || i == n / 2 || j == n / 2) || i == 0 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t25() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == 0 || j == n - 1 || j == 0 || i == n - 1 || i == n / 2 || j == n / 2) || i == 0 || i == n - 1 || j
                == 0 || j == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t26() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == 0 || j == n - 1 || j == 0 || i == n - 1 || i == n / 2 || j == n / 2) || j == 0 || j == n - 1) {
                cout << " # ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t27() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n / 2 || j == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t28() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n / 2 || i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t29() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!((i % 2 == 0 || j % 2 == 0) && (j % 2 != 0 || i % 2 != 0))) {
                cout << " + ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t30() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i % 2 == 0 || j % 2 == 0) && (j % 2 != 0 || i % 2 != 0)) {
                cout << " + ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t31() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!(i % 2 == 0 && j % 2 == 0)) {
                cout << " + ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t32() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || j + i == n - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}


void t33() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || j + i == n - 1 || i == 0 || j == 0 || j == n - 1 || i == n - 1) {
                cout << " * ";
            } else {
                cout << " - ";
            }
        }
        cout << endl;
    }
}

void t34() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == j || j + i == n - 1 || i == 0 || j == 0 || j == n - 1 || i == n - 1)) {
                cout << " * ";
            } else {
                cout << " - ";
            }
        }
        cout << endl;
    }
}

void t35() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(i == j || j + i == n - 1)) {
                cout << " + ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t36() {
    int n;
    cout << "N :";
    cin >> n;
    cout << "_____________________________________________________________________________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!((i % 2 == 0 || j % 2 == 0) && (j % 2 != 0 || i % 2 != 0))) {
                cout << " + ";
            } else if ((i == j || j + i == n - 1)) {
                cout << " + ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}
