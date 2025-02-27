#include <iostream>
#include <cmath>
using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    void t21();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 17, 0-chiqish)" << endl;
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
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j) {
                cout << son << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
        son++;
    }
}

void t2() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j) {
                cout << son << " ";
                son++;
            } else {
                cout << "";
            }
        }
        cout << endl;
        son = 1;
    }
}

void t3() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i + j) >= n - 1) {
                cout << son << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
        son++;
    }
}

void t4() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == j || i + j == n - 1)) {
                cout << n << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t5() {
    int n, N;
    cout << "Consider (N<M)" << endl;
    cout << "N :";
    cin >> n;
    cout << "M :";
    cin >> N;
    cout << endl;
    int son = n;
    for (int i = N; i >= n; --i) {
        for (int j = N; j >= n; --j) {
            if (i <= j) {
                cout << son << " ";
                son++;
            } else {
                cout << "";
            }
        }
        cout << endl;
        son = n;
    }
}

void t6() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 2;
    for (int i = 2; i <= n + 1; ++i) {
        for (int j = 2; j <= n + 1; ++j) {
            if (i >= j) {
                cout << son << " ";
                son += 2;
            } else {
                cout << "";
            }
        }
        cout << endl;
        son = 2;
    }
}

void t7() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == 0 || j == 0 || i == n - 1 || j == n - 1)) {
                cout << n << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t8() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j) {
                cout << son << " ";
            } else {
                cout << "";
            }
        }
        cout << endl;
        son--;
    }
}

void t9() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j) {
                cout << son << " ";
                son++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
        son = i + 2;
    }
}

void t10() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = n;
    for (int i = n; i > 0; --i) {
        for (int j = n; j > 0; --j) {
            if (i >= j) {
                cout << son << " ";
                son--;
            } else {
                cout << "";
            }
        }
        cout << endl;

        son = i - 1;
    }
}

void t11() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j) {
                cout << son << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
        son += 2;
    }
}

void t12() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    int son = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0 || j == n / 2) {
                cout << " T ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
        son++;
    }
}

void t13() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    char harf = 'A';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j >= n - 1) {
                cout << harf << " ";
            } else {
                cout << "";
            }
        }
        cout << endl;
        harf++;
    }
}

void t14() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    char harf = 'A';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j >= n - 1) {
                cout << harf << " ";
                harf++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t15() {
    char x = 'X';
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == j || i + j == n - 1)) {
                cout << x << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t16() {
    int n;
    cout << "N: ";
    cin >> n;
    cout << endl;
    char harf = 'A';
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j >= n - 1) {
                cout << harf << " ";
                harf++;
            } else {
                cout << "";
            }
        }
        cout << endl;
        harf = 'A';
    }
}

void t17() {
    int n;
    cout << "Nechta :";
    cin >> n;
    char harf = 'A' + n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j <= n - 1) {
                cout << harf << " ";
            } else {
                cout << "";
            }
        }
        cout << endl;
        harf--;
    }
}

void t18() {
    int n;
    cout << "n :";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            cout << i << " va " << j << ";  ";
        }
    }
    cout << endl;
}

void t19() {
    for (int i = 2; i <= 9; ++i) {
        for (int j = 1; j <= 10; ++j) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "-----------" << endl;
    }
}

void t20() {
    int a, b, count =0;
    cout << "a va b sonlar berilgan. a dan b gacha barcha\n"
            " mukammal sonlarni chiqaring. Mukammal sonlar\n"
            " – o’zidan tashqari barcha boluvchilari yigindisi\n"
            " sonni oziga teng bolgan sonlar, masalan: 6, 28…" << endl;
    cin >> a >> b;
    if (max(a, b) == b) {
        for (int i = a; i < b; ++i) {
            int sum = 0;
            for (int j = 1; j < i; ++j) {
                if (i % j == 0) {
                    sum += j;
                }
            }
            if (sum == i) {
                    count++;
                cout <<count<< "-murakkab son"<<" : " << sum << endl;
            }
        }
    } else {
        cout << "b uchun berilgan qiymat a dan katta bo'lishi kerak!" << endl;
    }
}
void t21() {
    int n;
    cout<<"n :";
    cin>>n;
    for(int i = 1; i<=n; ++i) {
        for(int j = 0; j<i; ++j) {
            cout<<  i <<" ";
        }
    }cout<<endl;
}
