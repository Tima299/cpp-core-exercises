#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    void t81(), t82(), t83(), t84(), t85(), t86(), t87(), t88(), t89(), t90();
    void t91(), t92(), t93(), t94(), t95(), t96(), t97();
    int choice;
    char keepContinue;
    do {
        cout << "_______________________________________________________" << endl;
        cout << "Ichma-ich sikllar, imtihon savollari(81-97), 0 -chiqish" << endl;
        cin >> choice;
        switch (choice) {
            case 81:
                t81();
                break;
            case 82:
                t82();
                break;
            case 83:
                t83();
                break;
            case 84:
                t84();
                break;
            case 85:
                t85();
                break;
            case 86:
                t86();
                break;
            case 87:
                t87();
                break;
            case 88:
                t88();
                break;
            case 89:
                t89();
                break;
            case 90:
                t90();
                break;
            case 91:
                t91();
                break;
            case 92:
                t92();
                break;
            case 93:
                t93();
                break;
            case 94:
                t94();
                break;
            case 95:
                t95();
                break;
            case 96:
                t96();
                break;
            case 97:
                t97();
                break;
            default:
                cout << "[81 - 97]" << endl;
        }
        if (choice != 0) {
            cout << "Davom etishni xohlaysizmi? [y/n]" << endl;
            cin >> keepContinue;
        } else if (keepContinue == 'n' or keepContinue == 'N') {
            cout << "_______________________________________________________" << endl;
            break;
        }
    } while (keepContinue == 'Y' || keepContinue == 'y');

    return 0;
}

void t81() {
    int N;
    cout << "N :";
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j <= i) {
                cout << count << " ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
        count++;
    }
}

void t82() {
    int N;
    cout << "N :";
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j >= i) {
                cout << count << " ";
                count++;
            } else {
                cout << "";
            }
        }
        cout << endl;
        count = 1;
    }
}

void t83() {
    int N;
    cout << "N :";
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == i) {
                cout << count << "  ";
            } else {
                cout << "      ";
            }
        }
        cout << endl;
        count++;
    }
}

void t84() {
    int N;
    cout << "N :";
    cin >> N;
    int count = N;
    for (int i = N; i > 0; i--) {
        for (int j = N; j > 0; j--) {
            if (i == j) {
                cout << count << " ";
            } else {
                cout << "      ";
            }
        }
        cout << endl;
        count--;
    }
}

void t85() {
    int N;
    cout << "N :";
    cin >> N;
    int count = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j <= N - 1) {
                cout << count << " ";
            }
        }
        cout << endl;
        count++;
    }
}

void t86() {
    int N;
    cout << "N :";
    cin >> N;
    int count = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j <= N - 1) {
                cout << count << " ";
            }
        }
        cout << endl;
        count--;
    }
}

void t87() {
    int N;
    cout << "N :";
    cin >> N;
    int count = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j >= N - 1) {
                cout << "@ ";
            }
        }
        cout << endl;
        count--;
    }
}

void t88() {
    int N;
    cout << "N :";
    cin >> N;
    char h = 'A'+N-1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i + j <= N - 1) {
                cout << h << " ";
            }
        }
        cout << endl;
        h--;
    }
}

void t89() {
    int N;
    cout << "N :";
    cin >> N;
    cout << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (N < 10) {
                if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
                    cout << N << " ";
                } else {
                    cout << "  ";
                }
            } else {
                if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
                    cout << N << " ";
                } else {
                    cout << "   ";
                }
            }
        }
        cout << endl;
    }
}

void t90() {
    cout << setw(6) << " ";
    for (int i = 2; i <= 9; ++i) {
        cout << setw(6) << i;
    }
    cout << endl;

    for (int j = 1; j <= 10; ++j) {
        cout << setw(6) << j;
        for (int i = 2; i <= 9; ++i) {
            cout << setw(6) << j * i;
        }
        cout << endl;
    }
    cout << endl;
}

void t91() {
    int N;
    cout << "N :";
    cin >> N;
    cout << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}

void t92() {
    int N;
    cout << "N :";
    cin >> N;
    cout << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == 0 || j == N - 1 || i == N / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void t93() {
    int N;
    cout << "N :";
    cin >> N;
    cout << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == i || i + j == N - 1) {
                cout << " * ";
            } else {
                cout << "     ";
            }
        }
        cout << endl;
    }
}

void t94() {
    int N;
    cout << "N :";
    cin >> N;
    int count = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j + i >= N - 1) {
                cout << count << " ";
            } else {
                cout << "";
            }
        }
        cout << endl;
        count--;
    }
}

void t95() {
    int N;
    cout << "N :";
    cin >> N;
    int count = N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j + i <= N - 1) {
                cout << "*" << " ";
            } else {
                cout << "";
            }
        }
        cout << endl;
        count--;
    }
}

void t96() {
    int a, b;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    if (a > b) {
        cout << "a <= b!" << endl;
    }
    for (int i = a; i <= b; ++i) {
        cout << i << " ";
    }
    cout << endl;
}

void t97() {
    int N;
    cout << "N :";
    cin >> N;
    for (int i = 2; i <= N; ++i) {
        int count = 0;
        for (int num = 1; num <= i; ++num) {
            if (i % num == 0) {
                count += 1;
            }
        }
        if (count == 2) {
            cout << i << " ";
        }
    }
    cout << endl;
}
