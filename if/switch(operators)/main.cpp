#include <iostream>
using namespace std;

void t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35();
void t36(), t37(), t38(), t39(), t40();
void t41(), t42(), t43(), t44(), t45();
void t46(), t47(), t48();

int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(25 - 48, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
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

void t25() {
    int numbers[5];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    cout << "5 ta butun son berilgan. Shu sonlar orasida\n"
            " nechta musbat va nechta manfiy, nechta nol\n"
            " raqami borligini aniqlovchi dastur tuzing" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; ++i) {
        switch (numbers[i] > 0 ? 1 : (numbers[i] < 0 ? -1 : 0)) {
            case 1:
                positiveCount++;
                break;
            case -1:
                negativeCount++;
                break;
            case 0:
                zeroCount++;
                break;
        }
    }
    cout << "Musbat raqamlar: " << positiveCount << endl;
    cout << "Manfiy raqamlar: " << negativeCount << endl;
    cout << "Nollar: " << zeroCount << endl;
}

void t26() {
    int month;
    cout << "Foydalanuvchi tomonidan oyning raqami kiritilsa\n"
            " u qaysi faslga kirishini aniqlovchi dastur tuzing." << endl;
    cin >> month;
    string season;
    switch (month) {
        case 12:
        case 1:
        case 2:
            season = "Qish";
            break;
        case 3:
        case 4:
        case 5:
            season = "Bahor";
            break;
        case 6:
        case 7:
        case 8:
            season = "Yoz";
            break;
        case 9:
        case 10:
        case 11:
            season = "Kuz";
            break;
        default:
            season = "Noto'g'ri oy raqami";
            break;
    }
    if (month >= 1 && month <= 12) {
        cout << "Bu oy " << season << " fasliga kiradi." << endl;
    } else {
        cout << season << endl;
    }
}

void t27() {
    int a;
    cout << "Berilgan 4 xonali sonda minglar yoki birlar xonasida 3\n"
            " raqami ishtirok etgan yoki etmaganligini aniqlaydigan\n"
            " dastur tuzing." << endl;
    cin >> a;
    int birlar = a % 10;
    int onlar = a / 10 % 10;
    int yuzlar = a / 100 % 10;
    int minglar = a / 1000 % 10;
    if (minglar == 3 || birlar == 3) {
        cout << "Berilgan 4 xonali sonda 3 raqami bor" << endl;
    }
}

void t28() {
    int score;
    cout << "Imtihondan olingan ballni kiriting (0-100): ";
    cin >> score;
    int grade;
    switch (score / 10) {
        case 10:
        case 9:
        case 8:
            grade = 5;
            break;
        case 7:
            grade = 4;
            break;
        case 6:
            grade = 3;
            break;
        case 5:
            grade = 3;
            break;
        default:
            grade = 2;
            break;
    }

    if (score >= 0 && score <= 100) {
        cout << "Sizning baho: " << grade << endl;
    } else {
        cout << "Noto'g'ri ball kiritildi." << endl;
    }
}

void t29() {
    int a, b, c;
    cout << "3 ta son kiriting" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "=" << endl;
    } else if (a != b && a != c) {
        cout << a << endl;
    } else if (b != a && b != c) {
        cout << b << endl;
    } else if (c != a && c != b) {
        cout << c << endl;
    }
    cout << endl;
}

void t30() {
    int a, b;
    cout << "2 ta butun son kiriting: ";
    cin >> a >> b;
    int sum = a + b;
    switch (sum) {
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            cout << 20 << endl;
            break;
        default:
            cout << sum << endl;
            break;
    }
}

void t31() {
    int num;
    cout << "Butun son kiriting: ";
    cin >> num;
    int result;
    if (num > 0) {
        result = num * 15;
    } else if (num < 0) {
        result = abs(num);
    } else {
        result = num;
    }
    cout << "Natija: " << result << endl;
}

void t32() {
    int A;
    cout << "Butun son kiriting: ";
    cin >> A;
    double result;
    if (A > 0) {
        result = A + 1;
    } else if (A < 0) {
        result = abs(A) + 2;
    } else {
        result = A / 100.0;
    }
    cout << "Natija: " << result << endl;
}

void t33() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;
    if (abs(a - b) >= 10 || abs(a - c) >= 10 || abs(b - c) >= 10) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

void t34() {
    int number;
    cout << "3 xonali son kiriting: ";
    cin >> number;
    if (number >= 100 && number <= 999) {
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        int largest = digit1;

        if (digit2 > largest) {
            largest = digit2;
        }
        if (digit3 > largest) {
            largest = digit3;
        }
        cout << "Eng katta raqam: " << largest << endl;
    } else { cout << "Too small!" << endl; }
}

void t35() {
    int num;
    cout << "Yoshni kiriting (10-60): ";
    cin >> num;


    string result;

    switch (num / 10) {
        case 1: result = "o'n";
            break;
        case 2: result = "yigirma";
            break;
        case 3: result = "o'ttiz";
            break;
        case 4: result = "qirq";
            break;
        case 5: result = "ellik";
            break;
        case 6: result = "oltmish";
            break;
        default: cout << "Noto'g'ri yosh kiritildi" << endl;
    }

    switch (num % 10) {
        case 1: result += " bir";
            break;
        case 2: result += " ikki";
            break;
        case 3: result += " uch";
            break;
        case 4: result += " to'rt";
            break;
        case 5: result += " besh";
            break;
        case 6: result += " olti";
            break;
        case 7: result += " yetti";
            break;
        case 8: result += " sakkiz";
            break;
        case 9: result += " to'qqiz";
            break;
    }

    cout << num << " - " << result << " yosh" << endl;
}

void t36() {
    int a, b;
    cout << "2 ta son kiriting: ";
    cin >> a >> b;
    bool result = false;

    if (a == 7 || b == 7 || (a + b) == 7 || abs(a - b) == 7) {
        result = true;
    }

    cout << (result ? "true" : "false") << endl;
}

void t37() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;
    int positiveCount = 0;
    if (a > 0) positiveCount++;
    if (b > 0) positiveCount++;
    if (c > 0) positiveCount++;

    if (positiveCount == 2) {
        cout << "Yig'indisi: " << (a + b + c) << endl;
    } else {
        cout << "Ko'paytmasi: " << (a * b * c) << endl;
    }
}

void t38() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;

    int product = 1;
    bool isProductCalculated = false;

    if (a != b && a != c) {
        product *= a;
        isProductCalculated = true;
    }
    if (b != a && b != c) {
        product *= b;
        isProductCalculated = true;
    }
    if (c != a && c != b) {
        product *= c;
        isProductCalculated = true;
    }

    if (isProductCalculated) {
        cout << "Ko'paytma: " << product << endl;
    } else {
        cout << "Barcha sonlar teng yoki ko'paytmaga ishtirok etmaydi." << endl;
    }
}

void t39() {
    int a, b;
    cout << "2 ta son kiriting: ";
    cin >> a >> b;
    if (a > 21 && b > 21) {
        cout << 0 << endl;
    } else {
        int closest = (a <= 21 && (21 - a) <= (21 - b)) ? a : b;
        if (b <= 21 && (21 - b) < (21 - a)) {
            closest = b;
        }
        cout << closest << endl;
    }
}

void t40() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;
    if ((a + b == c) || (a + c == b) || (b + c == a)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

void t41() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;
    int sum1 = a + b;
    int sum2 = a + c;
    int sum3 = b + c;

    if (sum1 >= sum2 && sum1 >= sum3) {
        cout << a << " " << b << endl;
    } else if (sum2 >= sum1 && sum2 >= sum3) {
        cout << a << " " << c << endl;
    } else {
        cout << b << " " << c << endl;
    }
}

void t42() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;
    int sum1 = a + b;
    int sum2 = a + c;
    int sum3 = b + c;

    if (sum1 <= sum2 && sum1 <= sum3) {
        cout << a << " " << b << endl;
    } else if (sum2 <= sum1 && sum2 <= sum3) {
        cout << a << " " << c << endl;
    } else {
        cout << b << " " << c << endl;
    }
}

void t43() {
    int year;
    cout << "Yilni kiriting: ";
    cin >> year;

    bool isLeap = false;

    if (year % 400 == 0) {
        isLeap = true;
    } else if (year % 100 == 0) {
        isLeap = false;
    } else if (year % 4 == 0) {
        isLeap = true;
    } else {
        isLeap = false;
    }

    cout << (isLeap ? "true" : "false") << endl;
}

void t44() {
    int A, B;
    cout << "2 ta natural son kiriting: ";
    cin >> A >> B;

    bool isSquare = (A == B * B) || (B == A * A);

    cout << (isSquare ? "true" : "false") << endl;
}

void t45() {
    int numbers[5];
    int sum = 0;

    cout << "5 ta son kiriting: ";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; ++i) {
        if (numbers[i] > 0 && numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    cout << "Toq musbat sonlarning yig'indisi: " << sum << endl;
}

void t46() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;

    if (a < b && b < c) {
        a *= 2;
        b *= 2;
        c *= 2;
    } else {
        a = -a;
        b = -b;
        c = -c;
    }

    cout << "Yangi sonlar: " << a << " " << b << " " << c << endl;
}

void t47() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;

    if ((a < b && b < c) || (a > b && b > c)) {
        a *= 3;
        b *= 3;
        c *= 3;
    } else {
        a = -a;
        b = -b;
        c = -c;
    }

    cout << "Yangi sonlar: " << a << " " << b << " " << c << endl;
}

void t48() {
    int a, b, c;
    cout << "3 ta son kiriting: ";
    cin >> a >> b >> c;

    double average = (a + b + c) / 3.0;

    cout << "O'rtacha: " << average << endl;
}
