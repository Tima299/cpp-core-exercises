#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <limits>

int kinoteatr[10][10] = {0}, balance = 0, totalMoney = 0;
int r = 0, p = 0, age = 0, newR = 0, newP = 0, fillAmount = 0;
int yMarkers[10][10] = {0};
using namespace std;

void fillBalance();

void saveSeats();

void loadSeats();

void saveData();

void loadData();

void viewPlaces();

void bookPlaces();

void changePlace();

void cancelPlace();

void changePassword();

void hisobniKorish();

void clearYMarkers();

string asosiyParol = "root123";

bool isValidSeat(int row, int col) {
    return row >= 1 && row <= 10 && col >= 1 && col <= 10;
}

bool hasSufficientBalance(int amount) {
    if (balance < amount) {
        cout << "Balansingiz yetarli emas! Balansingizni to'ldiring: " << endl;
        fillBalance();
        return false;
    }
    return true;
}

template<typename T>
void safeInput(T &input, const string &prompt) {
    while (true) {
        cout << prompt;
        cin >> input;
        if (!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Noto'g'ri kiritish! Qayta urinib ko'ring.\n";
        } else {
            break;
        }
    }
}

void safeInput(string &input, const string &prompt) {
    cout << prompt;
    getline(cin, input);
    while (input.empty()) {
        cout << "Noto'g'ri kiritish! Qayta urinib ko'ring.\n";
        cout << prompt;
        getline(cin, input);
    }
}


void saveData() {
    ofstream outFile("data.txt");
    if (!outFile) {
        cout << "Error: Unable to save balance, TotalMoney and password to file.\n";
        return;
    }
    outFile << balance << endl;
    outFile << asosiyParol << endl;
    outFile << totalMoney << endl;
    outFile.close();
    cout << "Balans, umumiy sarf-xarajatlar va parol muvaffaqiyatli saqlandi!\n";
}

void loadData() {
    ifstream inFile("data.txt");
    if (!inFile) {
        cout << "Oldingi balans va parol mavjud emas. Yangi boshlayapmiz!\n";
        return;
    }
    inFile >> balance;
    inFile.ignore();
    getline(inFile, asosiyParol);
    inFile >> totalMoney;
    inFile.close();
    cout << "Balans, umumiy sarf-xarajatlar va parol muvaffaqiyatli yuklandi!\n";
}

void saveSeats() {
    ofstream outFile("seats.txt");
    if (!outFile) {
        cout << "Error: Unable to save seats to file.\n";
        return;
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            outFile << kinoteatr[i][j] << " ";
        }
        outFile << endl;
    }

    outFile << "YMarkers\n";
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            outFile << yMarkers[i][j] << " ";
        }
        outFile << endl;
    }

    outFile.close();
    cout << "Joylar va Y-markerlari muvaffaqiyatli saqlandi!\n";
}


void loadSeats() {
    ifstream inFile("seats.txt");
    if (!inFile) {
        cout << "Oldingi joylar mavjud emas. Yangi boshlayapmiz!\n";
        return;
    }

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (!(inFile >> kinoteatr[i][j])) {
                cout << "Error: Corrupted seat data in file.\n";
                return;
            }
        }
    }

    string marker;
    inFile >> marker;
    if (marker == "YMarkers") {
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (!(inFile >> yMarkers[i][j])) {
                    cout << "Error: Corrupted Y marker data in file.\n";
                    return;
                }
            }
        }
    } else {
        cout << "YMarkers section missing in file. Resetting Y markers.\n";
        clearYMarkers();
    }

    inFile.close();
    cout << "Oldingi joylar va Y-markerlari muvaffaqiyatli yuklandi!\n";
}

void clearYMarkers() {
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            yMarkers[i][j] = 0;
        }
    }
    cout << "All Y markers have been cleared.\n";
}


void viewPlaces() {
    cout << "    1 2 3 4 5 6 7 8 9 10\n";
    for (int i = 0; i < 10; ++i) {
        cout << setw(3) << i + 1 << setw(3);
        for (int j = 0; j < 10; ++j) {
            if (yMarkers[i][j] == 3) {
                cout << "Y "; // Show "Y" marker
            } else if (kinoteatr[i][j] == 0) {
                cout << "_ ";
            } else if (kinoteatr[i][j] == 1) {
                cout << "B ";
            } else if (kinoteatr[i][j] == 2) {
                cout << "K ";
            }
        }
        cout << endl;
    }
}


void bookPlaces() {
    safeInput(r, "Qatorni kiriting: ");
    safeInput(p, "O'rindiq raqamini kiriting: ");
    if (!isValidSeat(r, p) || kinoteatr[r - 1][p - 1] != 0) {
        cout << "Noto'g'ri yoki band qilingan joy! Qayta urinib ko'ring.\n";
        return;
    }
    safeInput(age, "Yoshingizni kiriting (12 yoshdan kichiklarga 15000 so'm, kattalarga 25000 so'm): ");
    if (age <= 12 && hasSufficientBalance(15000)) {
        kinoteatr[r - 1][p - 1] = 1;
        balance -= 15000;
        totalMoney += 15000;
        cout << "Muvaffaqiyatli bron qilindi!\n";
    } else if (age > 12 && hasSufficientBalance(25000)) {
        kinoteatr[r - 1][p - 1] = 2;
        balance -= 25000;
        totalMoney += 25000;
        cout << "Muvaffaqiyatli bron qilindi!\n";
    }
}

void changePlace() {
    safeInput(r, "O'zgartirmoqchi bo'lgan qatorni kiriting: ");
    safeInput(p, "O'zgartirmoqchi bo'lgan o'rindiqni kiriting: ");
    if (!isValidSeat(r, p) || kinoteatr[r - 1][p - 1] == 0) {
        cout << "Noto'g'ri yoki bo'sh joy! Qayta urinib ko'ring.\n";
        return;
    }

    safeInput(newR, "O'zgartirmoqchi bo'lgan YANGI qatorni kiriting: ");
    safeInput(newP, "O'zgartirmoqchi bo'lgan YANGI o'rindiqni kiriting: ");
    if (!isValidSeat(newR, newP) || kinoteatr[newR - 1][newP - 1] != 0) {
        cout << "Noto'g'ri yoki band qilingan yangi joy! Qayta urinib ko'ring.\n";
        return;
    }
    kinoteatr[newR - 1][newP - 1] = kinoteatr[r - 1][p - 1];
    kinoteatr[r - 1][p - 1] = 0;
    yMarkers[r - 1][p - 1] = 0;
    yMarkers[newR - 1][newP - 1] = 3;
    saveSeats();
    cout << "Joyingiz muvaffaqiyatli almashtirildi!\n";
}


void fillBalance() {
    cout << "Balansni qancha summa bilan to'ldirmoqchisiz? ";
    cin >> fillAmount;
    if (fillAmount > 0 && balance + fillAmount > INT_MAX) {
        cout << "Kiritilgan summa juda katta! Qayta urinib ko'ring.\n";
        return;
    }
    if (fillAmount > 0) {
        balance += fillAmount;
        cout << "Hisobingiz muvaffaqiyatli to'ldirildi! Hozirgi balans: " << balance << " so'm\n";
    } else {
        cout << "Noto'g'ri summa kiritildi.\n";
    }
}

void cancelPlace() {
    safeInput(r, "Qaysi qatorni bekor qilmoqchisiz? ");
    safeInput(p, "Qaysi o'rindiqni bekor qilmoqchisiz? ");
    if (kinoteatr[r - 1][p - 1] != 0) {
        kinoteatr[r - 1][p - 1] = 0;
        cout << "Joy muvaffaqiyatli bekor qilindi!\n";
    } else {
        cout << "Joy oldin bron qilinmagan!\n";
    }
}

void changePassword() {
    string oldPassword;
    safeInput(oldPassword, "Eski parolni kiriting: ");
    if (oldPassword == asosiyParol) {
        safeInput(asosiyParol, "Yangi parolni kiriting: ");
        cout << "Parol muvaffaqiyatli o'zgartirildi!\n";
    } else {
        cout << "Eski parol noto'g'ri!\n";
    }
}

void hisobniKorish() {
    cout << "Hozirgi balans: " << balance << " so'm\n";
    cout << "Jami sarflangan summa: " << totalMoney << endl;
}

int main() {
    loadSeats();
    loadData();
    int tanlov;
    string p;

    while (true) {
        cout << "Dasturga kirish parolini kiriting: ";
        cin >> p;
        if (p == asosiyParol) {
            cout << "\tCinematica'ga xush kelibsiz!\n\n";
            while (true) {
                cout << "\nMENU:\n"
                        "1. O'rindiqlarni ko'rish\n"
                        "2. Joylarni band qilish\n"
                        "3. Joyni o'zgartirish\n"
                        "4. Hisobni to'ldirish\n"
                        "5. Joyni bekor qilish\n"
                        "6. Parolni o'zgartirish\n"
                        "7. Balansni ko'rish\n"
                        "0. Chiqish\n\n"
                        "Tanlang: " << endl;
                cout << "\n-----------------------------------------------\n";
                safeInput(tanlov, "");

                switch (tanlov) {
                    case 1:
                        viewPlaces();
                        break;
                    case 2:
                        bookPlaces();
                        break;
                    case 3:
                        changePlace();
                        break;
                    case 4:
                        fillBalance();
                        break;
                    case 5:
                        cancelPlace();
                        break;
                    case 6:
                        changePassword();
                        break;
                    case 7:
                        hisobniKorish();
                        break;
                    case 0:
                        saveSeats();
                        saveData();
                        cout << "Cinematica'dan foydalanganingiz uchun rahmat! Xayr!\n";
                        return 0;
                    default:
                        cout << "Noto'g'ri tanlov! Qayta urinib ko'ring.\n";
                }
            }
        } else {
            cout << "Parol noto'g'ri! Qayta urinib ko'ring.\n";
        }
    }
    return 0;
}
