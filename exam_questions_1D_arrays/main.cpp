#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
    void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
    void t41(), t42(), t43(), t44(), t45(), t46(), t47(), t48(), t49(), t50();
    void t51(), t52();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 52, 0-chiqish)" << endl;
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
            case 37:
                t37();
                break;
            case 38:
                t38();
                break;
            case 39:
                t39();
                break;
            case 40:
                t40();
                break;
            case 41:
                t41();
                break;
            case 42:
                t42();
                break;
            case 43:
                t43();
                break;
            case 44:
                t44();
                break;
            case 45:
                t45();
                break;
            case 46:
                t46();
                break;
            case 47:
                t47();
                break;
            case 48:
                t48();
                break;
            case 49:
                t49();
                break;
            case 50:
                t50();
                break;
            case 51:
                t51();
                break;
            case 52:
                t52();
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
    int n, m, sum = 0;
    cout << "n x m matritsa berilgan. Matritsani o’rtadagi qatori va oxiridagi"
            " ustunidagi elementlar yig’indisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    cout << "Matrissani elemntlar bilan to'ldiring, umumiy " << n * m << "ta element kiritishingiz lozim!" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Qo'shilayotgan elementlar : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == n / 2 || j == m - 1) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Yig'indi : " << sum << endl;
    cout << endl;
}

void t2() {
    int n, m, sum = 0;
    cout << "n xm matritsa berilgan. Matritsani chegarasidagi elementlar yig’indisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    cout << "Matrissani elemntlar bilan to'ldiring, umumiy " << n * m << "ta element kiritishingiz lozim!" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Qo'shilayotgan elementlar : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || j == 0 || j == m - 1 || i == n - 1) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Yig'indi : " << sum << endl;
    cout << endl;
}

void t3() {
    int n, m, sum = 0;
    cout << "Misol tarzida berilgan quyidagi matritsaning qora bilan belgilangan o’rindagi"
            " sonlarining yig’indisini topuvchi dastur tuzing. Dastur ixtiyoriy"
            " NxN matritsa uchun ishlashi kerak. N-toq son." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    cout << "Matrissani elemntlar bilan to'ldiring, umumiy " << n * m << "ta element kiritishingiz lozim!" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Qo'shilayotgan elementlar : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j == 0 || j == m - 1 || i + j == n - 1) {
                sum += arr[i][j];
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Yig'indi : " << sum << endl;
    cout << endl;
}

void t4() {
    int n, m, mul = 1;
    cout <<
            "Butun sonli n*m o‘lchamli massivni birinchi va oxirgi qatoridagi sonlarni ko’paytmasini topuvchi dastur tuzing."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    cout << "Matrissani elemntlar bilan to'ldiring, umumiy " << n * m << "ta element kiritishingiz lozim!" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ko'paytirilayotgan elementlar : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 || i == n - 1) {
                mul *= arr[i][j];
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "Ko'paytmasi : " << mul << endl;
    cout << endl;
}

void t5() {
    int n, m, k, mul = 1;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv va k soni berilgan. "
            "Matritsaning k-qatoridagi elementlar kopaytmasini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "k ga qiymat bering: ";
    cin >> k;
    if (k < n) {
        cout << "Berilgan massiv :" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "k-qatordagi elementlar : " << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i + 1 == k) {
                    cout << arr[i][j] << " ";
                    mul *= arr[i][j];
                }
            }
            cout << endl;
        }
        cout << "k-qatorni ko'paytmasi : " << mul << endl;
    } else {
        cout << "k soni m dan katta!" << endl;
    }
}

void t6() {
    int n, m, k, sum = 0, count = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv va k soni berilgan. Matritsaning"
            " k-qatoridagi elementlar o’rta arifmetigini toping" << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "k ga qiymat bering: ";
    cin >> k;
    if (k < n) {
        cout << "Berilgan massiv :" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "k-qatordagi elementlar : " << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (i + 1 == k) {
                    cout << arr[i][j] << " ";
                    sum += arr[i][j];
                    count++;
                }
            }
            cout << endl;
        }
        cout << "k-qatorni o'rta arifmetigi : " << sum / count << endl;
    } else {
        cout << "k soni m dan katta!" << endl;
    }
}

void t7() {
    int n, m, count = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning toq elementlar sonini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] % 2 != 0) {
                count++;
            }
        }
        cout << endl;
    }

    cout << "toq elementlar soni : " << count << endl;
}

void t8() {
    int n, m, count = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning "
            "juft elementlar sonini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << endl;
    }

    cout << "juft elementlar soni : " << count << endl;
}

void t9() {
    int n, m, countMinus = 0, countPlus = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning "
            "musbat va manfiy elementlar sonini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] > 0) {
                countPlus++;
            }
            if (arr[i][j] < 0) {
                countMinus++;
            }
        }
        cout << endl;
    }

    cout << "musbat elementlar soni : " << countPlus << endl;
    cout << "manfiy elementlar soni : " << countMinus << endl;
}

void t10() {
    int n, m, count3div = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning 3 ga karrali elementlar sonini toping." <<
            endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] % 3 == 0) {
                count3div++;
            }
        }
        cout << endl;
    }

    cout << "3ga karrali elementlar soni : " << count3div << endl;
}

void t11() {
    int n, m, sum = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning hamma elementlar yigindisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "massiv elementlar yig'indisi : " << sum << endl;
}

void t12() {
    int n, m, sum = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning"
            " juft elementlar yigindisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] % 2 == 0)
                sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "massiv juft elementlar yig'indisi : " << sum << endl;
}

void t13() {
    int n, m, sum = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning "
            "toq elementlar yigindisini toping" << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] % 2 != 0)
                sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "massiv toq elementlar yig'indisi : " << sum << endl;
}

void t14() {
    int n, m, sumPlus = 0, sumMinus = 0;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning "
            "musbat va manfiy elementlar sonini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] > 0) {
                sumPlus += arr[i][j];
            }
            if (arr[i][j] < 0) {
                sumMinus += arr[i][j];
            }
        }
        cout << endl;
    }

    cout << "musbat elementlar yig'indisi : " << sumPlus << endl;
    cout << "manfiy elementlar yig'indisi : " << sumMinus << endl;
}

void t15() {
    int n, m, sumPlus = 0;
    srand(time(0));
    cout <<
            "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning har bir qatoridagi musbat elementlar sonini toping."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sumPlus = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] > 0) {
                sumPlus++;
            }
        }
        cout << " ------> " << i + 1 << "-qator musbat elementlar soni : " << sumPlus << endl;
        cout << endl;
    }
}

void t16() {
    int n, m, sumMinus = 0;
    srand(time(0));
    cout <<
            "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning har bir qatoridagi manfiy elementlar sonini toping."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sumMinus = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] < 0) {
                sumMinus++;
            }
        }
        cout << " ------> " << i + 1 << "-qator manfiy elementlar soni : " << sumMinus << endl;
        cout << endl;
    }
}

void t17() {
    int n, m, countOdd = 0, countEven = 0;;
    srand(time(0));
    cout <<
            "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning har bir qatoridagi toq va juft elementlar sonini toping."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        countOdd = 0;
        countEven = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] % 2 != 0) {
                countOdd++;
            }
            if (arr[i][j] % 2 == 0) {
                countEven++;
            }
        }
        cout << " ------> " << i + 1 << "-qator toq = " << countOdd << ", juft = " << countEven << endl;
        cout << endl;
    }
}

void t18() {
    int n, m, sum = 0;;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning har bir qatoridagi elementlar yigindisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        cout << " ------> " << i + 1 << "-qator elementlar yig'indisi : " << sum << endl;
        cout << endl;
    }
}

void t19() {
    int n, m, sum = 0;;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning har bir qatoridagi musbat elementlar yigindisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] > 0)
                sum += arr[i][j];
        }
        cout << " ------> " << i + 1 << "-qator musbat elementlar yig'indisi : " << sum << endl;
        cout << endl;
    }
}

void t20() {
    int n, m, sum = 0;;
    srand(time(0));
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning har bir qatoridagi manfiy elementlar yigindisini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] < 0)
                sum += arr[i][j];
        }
        cout << " ------> " << i + 1 << "-qator manfiy elementlar yig'indisi : " << sum << endl;
        cout << endl;
    }
}

void t21() {
    int n, m, sumOdd = 0, sumEven = 0;;
    srand(time(0));
    cout <<
            "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning har bir qatoridagi toq va juft elementlar yig'indisini toping."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sumOdd = 0;
        sumEven = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] % 2 != 0) {
                sumOdd += arr[i][j];
            }
            if (arr[i][j] % 2 == 0) {
                sumEven += arr[i][j];
            }
        }
        cout << " ------> " << i + 1 << "-qator toq = " << sumOdd << ", juft = " << sumEven << endl;
        cout << endl;
    }
}

void t22() {
    int n, m, sumPositive = 0, sumNegative = 0;;
    srand(time(0));
    cout <<
            "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning har bir qatoridagi musbat va manfiy elementlar ko’paytmasini  toping."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        sumPositive = 0;
        sumNegative = 0;
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << "  ";
            if (arr[i][j] > 0) {
                sumPositive += arr[i][j];
            }
            if (arr[i][j] < 0) {
                sumNegative += arr[i][j];
            }
        }
        cout << " ------> " << i + 1 << "-qator musbat = " << sumPositive << ", manfiy = " << sumNegative << endl;
        cout << endl;
    }
}

void t23() {
    int n, m, k, sumPositive = 0, sumNegative = 0;;
    srand(time(0));
    cout <<
            "M x N o‘lchamli butun sonli matritsa va K soni berilgan. Matritsa ichida K soni bor yoki yo’qligini aniqlovchi dastur tuzing."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "Qaysi son bor yo'qligini tekshirmoqchisiz?";
    cin >> k;
    bool isExists = false;
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (arr[i][j] == k) {
                isExists = true;
            }
        }
        cout << endl;
    }
    if (isExists) {
        cout << k << " soni massiv tarkibida bor!" << endl;
    } else {
        cout << k << " soni massiv tarkibida yo'q!" << endl;
    }
}

void t24() {
    int n, m, k, mul = 1;
    srand(time(0));
    cout << "M x N o‘lchamli matritsa va k butun soni berilgan. Matritsaning k-ustunidagi"
            " barcha sonning qiymatini nolga tenglab chiquvchi dastur tuzilsin." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }
    cout << "k ga qiymat bering: ";
    cin >> k;
    if (k < n) {
        cout << "Berilgan massiv :" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        //cout << "k-qatordagi elementlar : " << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (j + 1 == k) {
                    arr[i][j] = 0;
                }
            }
            cout << endl;
        }
        cout << "O'zgarishdan keyingi massiv :" << endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "k soni m dan katta!" << endl;
    }
}

void t25() {
    int n, m;
    string k = "str";
    cout <<
            "M x N o‘lchamli satrlardan iborat matritsa va str satri berilgan. Matritsa ichida str satri bor yoki yo’qligini aniqlovchi dastur tuzing."
            << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    string arr[n][m];
    cout << "massivni so'zlar bilan to'ldiring : ";
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            getline(cin, arr[i][j]);
        }
    }
    bool isExists = false;
    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "[" << arr[i][j] << "]  ";
            if (arr[i][j] == k) {
                isExists = true;
            }
        }
        cout << endl;
    }
    cout << endl;
    if (isExists) {
        cout << "[" << k << "] so'zi massiv tarkibida bor!" << endl;
    } else {
        cout << "[" << k << "] so'zi massiv tarkibida yo'q!" << endl;
    }
}

void t26() {
    int n, m, min = INT_MAX;
    srand(time(0));
    cout << "Matritsa berilgan. Matritsani eng kichik elementi turgan indeksini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 9 + 1;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (min > arr[i][j]) {
                min = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "eng kichik elementi : " << min << endl;
}

void t27() {
    int n, m, max = INT_MIN;
    srand(time(0));
    cout << "Matritsa berilgan. Matritsani eng kichik elementi turgan indeksini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % 90 + 10;
        }
    }

    cout << "Berilgan massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << "eng kichik elementi : " << max << endl;
}

void t28() {
    int n, m, maxNegative = INT_MIN;
    int minI = 0, minJ = 0;
    srand(time(0));
    cout << "Matritsa berilgan. Matritsani eng katta manfiy elementi turgan indeksini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = -(rand() % (90) + 10);
        }
    }

    cout << "Berilgan massiv :" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (maxNegative <= arr[i][j]) {
                maxNegative = arr[i][j];
                minI = i;
                minJ = j;
            }
        }
        cout << endl;
    }
    cout << "eng katta manfiy elementi : " << maxNegative << endl;
    cout << "Indeksi : [" << minI << "][" << minJ << "]" << endl;
}

void t29() {
    int n, m, minPositive = INT_MAX;
    int minI = 0, minJ = 0;
    srand(time(0));
    cout << "Matritsa berilgan. Matritsani eng kichik musbat elementi turgan indeksini toping." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = (rand() % (90) + 10);
        }
    }

    cout << "Berilgan massiv :" << endl;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
            if (minPositive > arr[i][j]) {
                minPositive = arr[i][j];
                minI = i;
                minJ = j;
            }
        }
        cout << endl;
    }
    cout << "eng katta manfiy elementi : " << minPositive << endl;
    cout << "Indeksi : [" << minI << "][" << minJ << "]" << endl;
}

void t30() {
    int n, m, min = INT_MAX, max = INT_MIN;
    srand(time(0));
    cout << "M x N butun sonli array1 va array2 (2 ta MxN o’lchamli massiv"
            " bo’ladi) massivlari berilgan. array1 massiv tarkibidagi eng "
            "katta element bilan array2 massivdagi eng kichik elementni "
            "ko’paytmasini chiqaruvchi dastur tuzing." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    int arr2[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr2[i][j] = (rand() % (9) + 1);
        }
    }
    cout << "ARRAY-1 : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (max < arr1[i][j]) {
                max = arr1[i][j];
            }
        }
        cout << endl;
    }
    cout << "ARRAY-2 : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr2[i][j] << " ";
            if (min > arr2[i][j]) {
                min = arr2[i][j];
            }
        }
        cout << endl;
    }
    cout << "Array1 ni eng katta elementi : " << max << endl;
    cout << "Array2 ni eng kichik elementi : " << min << endl;
    cout << "Ularni ko'paytmasi : " << max * min << endl;
}

void t31() {
    int n, m, max = INT_MIN;
    cout << "Matritsa berilgan. Matritsani eng katta elementlarini hammasini 100 ga oshiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (max < arr1[i][j]) {
                max = arr1[i][j];
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (max == arr1[i][j]) {
                arr1[i][j] += 100;
            }
        }
    }
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t32() {
    int n, m, max = INT_MIN, indexI = 0, indexJ = 0;
    cout << "Matritsa berilgan. Matritsani eng katta elementlaridan birinchisini 1000 ga oshiring" << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (max < arr1[i][j]) {
                max = arr1[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    arr1[indexI][indexJ] += 1000;
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t33() {
    int n, m, max = INT_MIN, indexI = 0, indexJ = 0;
    cout << "Matritsa berilgan. Matritsani eng katta elementlaridan oxirgisini 1000 ga oshiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (max <= arr1[i][j]) {
                max = arr1[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    arr1[indexI][indexJ] += 1000;
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t34() {
    int n, m, min = INT_MAX;
    cout << "Matritsa berilgan. Matritsani eng kichik elementlarni hammasini 0 ga almashtiring" << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (min > arr1[i][j]) {
                min = arr1[i][j];
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (min == arr1[i][j]) {
                arr1[i][j] += 100;
            }
        }
    }
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t35() {
    int n, m, min = INT_MAX, indexI = 0, indexJ = 0;
    cout << "Matritsa berilgan. Matritsani eng katta elementlaridan oxirgisini 0 ga almashtiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (min >= arr1[i][j]) {
                min = arr1[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    arr1[indexI][indexJ] = 0;
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t36() {
    int n, m, min = INT_MAX, indexI = 0, indexJ = 0;
    cout << "Matritsa berilgan. Matritsani eng kichik elementlarni birinchisini 0 ga almashtiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << arr1[i][j] << " ";
            if (min > arr1[i][j]) {
                min = arr1[i][j];
                indexI = i;
                indexJ = j;
            }
        }
        cout << endl;
    }
    arr1[indexI][indexJ] = 0;
    cout << "_______________________________________\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
}

void t37() {
    int n, m, k;
    cout << "Matritsa va k soni berilgan. Matritsani k-qatoridagi hamma elementlarni 10 martaga oshiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    cout << "'K'ga qiymat bering :";
    cin >> k;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr1[i][j] << setw(3);
            if (k == i + 1) {
                arr1[i][j] *= 10;
            }
        }
        cout << endl;
    }
    cout << "_____________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(5) << arr1[i][j] << setw(5);
        }
        cout << endl;
    }
    cout << endl;
}

void t38() {
    int n, m, k;
    cout << "Matritsa va k soni berilgan. Matritsani k-ustunidagi hamma elementlarni 0 ga almashtiring." << endl;
    cout << "ustunlar sonini kiriting :";
    cin >> n;
    cout << "qatorlar sonini kiriting :";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr1[i][j] = (rand() % (9) + 1);
        }
    }
    cout << "'K'ga qiymat bering :";
    cin >> k;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr1[i][j] << setw(3);
            if (k == j + 1) {
                arr1[i][j] = 0;
            }
        }
        cout << endl;
    }
    cout << "_____________________________" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr1[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << endl;
}

void t39() {
    int n, m, max = INT_MIN, min = INT_MAX,
            indexMaxI = 0, indexMaxJ = 0,
            indexMinI = 0, indexMinJ = 0;
    cout << "Matritsa berilgan. Matritsani birinchi uchragan eng katta elementini "
            "joyini oxirgi uchragan eng kichik elementi bilan joylarini almashtiring." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Quyidagi Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (max < arr[i][j]) {
                max = arr[i][j];
                indexMaxI = i;
                indexMaxJ = j;
            }
            if (min >= arr[i][j]) {
                min = arr[i][j];
                indexMinI = i;
                indexMinJ = j;
            }
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matritsani birinchi uchragan eng katta elementi :" << max << endl;
    cout << "Matritsani oxirgi uchragan eng kichik elementi :" << min << endl;

    swap(arr[indexMaxI][indexMaxJ], arr[indexMinI][indexMinJ]);
    /*int temp = arr[indexMaxI][indexMaxJ];
    arr[indexMaxI][indexMaxJ] = arr[indexMinI][indexMinJ];
    arr[indexMinI][indexMinJ] = temp;*/

    cout << "Joylari almashgandan so'ng : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << endl;
}

void t40() {
    int n, m, max = INT_MIN;
    cout << "Matritsa berilgan. Matritsani har bir qatordagi eng katta elementni toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Natijaviy Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        cout << "       MAX ----> " << max << endl;

        max = INT_MIN;
    }
    cout << endl;
}

void t41() {
    int n, m, min = INT_MAX;
    cout << "Matritsa berilgan. Matritsani har bir qatordagi eng kichik elementni toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Natijaviy Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << "       MIN ----> " << min << endl;

        min = INT_MAX;
    }
    cout << endl;
}

void t42() {
    int n, m, min = INT_MAX, max = INT_MIN;
    int indexMinI = 0;
    int indexMinJ = 0;
    int indexMaxI = 0;
    int indexMaxJ = 0;
    cout << "Matritsa berilgan. Matritsani har bir qatordagi eng katta "
            "elementni va eng kichik elementni joyini almashtiring." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (arr[i][j] < min) {
                min = arr[i][j];
                indexMinI = i;
                indexMinJ = j;
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
                indexMaxI = i;
                indexMaxJ = j;
            }
        }
        cout << "      -->  almashtirilayotgani : " << min << " va " << max << endl;
        swap(arr[indexMaxI][indexMaxJ], arr[indexMinI][indexMinJ]);
        min = INT_MAX;
        max = INT_MIN;
    }
    cout << endl;
    cout << "Natijaviy massiv : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
}

void t43() {
    int n, m;
    int sum = 0;
    cout << "Matritsa berilgan. Matritsani har bir qatordagi elementlar yig’indisini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            sum += arr[i][j];
        }
        cout << "      -->  yig'indi : " << sum << endl;
        sum = 0;
    }
    cout << endl;
}

void t44() {
    int n, m;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi elementlar yig’indisini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            sum += arr[i][j];
        }
        cout << j + 1 << "-ustun yig'indisi :" << sum << endl;
    }
    cout << endl;
}

void t45() {
    int n, m;
    int count = 0;
    cout << "Matritsa berilgan. Matritsani har bir qatordagi juft elementlar sonini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        count = 0;
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
            if (arr[i][j] % 2 == 0) count++;
        }
        cout << "      -->  juft elementlar soni : " << count << endl;
    }
    cout << endl;
}

void t46() {
    int n, m, toq = 0, juft = 0;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi toq va juft elementlar sonini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < n; ++j) {
        toq = 0;
        juft = 0;
        for (int i = 0; i < m; ++i) {
            if (arr[i][j] % 2 == 0) {
                juft++;
            } else if (arr[i][j] % 2 != 0) {
                toq++;
            }
        }
        cout << j + 1 << "-ustun ---> (toq:" << toq << ", juft:" << juft << ") elementlar soni" << endl;
    }
    cout << endl;
}

void t47() {
    int n, m;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. Matritsaning "
            "har bir ustunidagi musbat elementlar yigindisini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (21) - (10);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < m; ++i) {
            if (arr[i][j] > 0) {
                sum += arr[i][j];
            }
        }
        cout << j + 1 << "-ustun ---> musbat elementlar soni : " << sum << endl;
    }
    cout << endl;
}

void t48() {
    int n, m, toq = 0, juft = 0;
    cout << "N x M o’lchamdagi butun sonli massiv berilgan. "
            "Matritsaning har bir ustundagi toq va juft elementlar "
            "yigindisini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < n; ++j) {
        toq = 0;
        juft = 0;
        for (int i = 0; i < m; ++i) {
            if (arr[i][j] % 2 == 0) {
                juft += arr[i][j];
            } else if (arr[i][j] % 2 != 0) {
                toq += arr[i][j];
            }
        }
        cout << j + 1 << "-ustun ---> (toq:" << toq << ", juft:" << juft << ") elementlar yig'indisi" << endl;
    }
    cout << endl;
}

void t49() {
    int n, m;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi elementlar o’rta arifmetigini toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < n; ++j) {
        double mean = 0, count = 0;
        for (int i = 0; i < m; ++i) {
            mean += arr[i][j];
            count++;
        }
        cout << j + 1 << "-ustun ---> elementlar o'rta arifmetigi : " << mean / count << endl;
    }
    cout << endl;
}

void t50() {
    int n, m;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi eng katta elementni toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;

    for (int j = 0; j < n; ++j) {
        int max = INT_MIN;
        for (int i = 0; i < m; ++i) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        cout << j + 1 << "-ustun ---> eng katta elementi : " << max << endl;
    }
    cout << endl;
}

void t51() {
    int n, m;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi eng kichik elementni toping." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;

    for (int j = 0; j < n; ++j) {
        int min = INT_MAX;
        for (int i = 0; i < m; ++i) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
        cout << j + 1 << "-ustun ---> eng kichik elementi : " << min << endl;
    }
    cout << endl;
}

void t52() {
    int n, m;
    cout << "Matritsa berilgan. Matritsani har bir ustundagi eng kichik "
            "va eng katta elementlarni almashtiring." << endl;
    cout << "Ustunga qiymat bering :";
    cin >> n;
    cout << "Qatorga qiymat bering :";
    cin >> m;
    if (n <= 0 || m <= 0) {
        cout << "Noto'g'ri o'lchamlar! Qator va ustunlar musbat bo'lishi kerak." << endl;
        return;
    }
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (9) + (1);
        }
    }
    cout << "Berilgan Massiv :" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << "______________________________" << endl;
    for (int j = 0; j < m; ++j) {
        int min = INT_MAX;
        int max = INT_MIN;
    int indexMaxI=-1;
    int indexMinI=-1;
        for (int i = 0; i < n; ++i) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                indexMinI = i;
            }
            if ( arr[i][j]>max) {
                max = arr[i][j];
                indexMaxI = i;
            }
        }
        cout << j + 1 << "-ustun ---> almashadigan elementlar : " << min << " va " << max << endl;
        if (indexMinI != -1 && indexMaxI != -1) {
            swap(arr[indexMinI][j], arr[indexMaxI][j]);
        }
    }
    cout << endl;
    cout << "Natijaviy massiv : " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << arr[i][j] << setw(3);
        }
        cout << endl;
    }
    cout << endl;
}
