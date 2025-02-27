#include <cmath>
#include <iostream>
#include <stdint.h>
using namespace std;

int main() {
    void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
    void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
    void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 29, 0-chiqish)" << endl;
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
    int i;
    int count = 1;
    while (i < 50) {
        cout << "Temur - " << " " << count++ << endl;;
        i++;
    }
}

void t2() {
    int i = 20;
    while (i <= 50) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
        i++;
    }
}

void t3() {
    int i = 30;
    while (i <= 60) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
        i++;
    }
}

void t4() {
    int i = 70;
    while (i <= 100) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
        i++;
    }
}

void t5() {
    int i = 60;
    while (i >= 30) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
        i--;
    }
}

void t6() {
    int i = 100;
    while (i >= 70) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
        i--;
    }
}

void t7() {
    int i = 120;
    while (i >= 60) {
        if (i % 8 == 0) {
            cout << i << endl;
        }
        i--;
    }
}

void t8() {
    int n, i = 2;
    cout << "Son kiriting :" << endl;
    cin >> n;
    while (i <= n) {
        cout << i << endl;
        i += 2;
    }
}

void t9() {
    int n, i = 1, sum = 0;
    cout << "Son kiriting :" << endl;
    cin >> n;
    while (i <= n) {
        cout << i << endl;
        sum += i;
        i += 2;
    }
    cout << "Toq sonlarning jami yig'indisi : " << sum << endl;
}

void t10() {
    int n, r;
    cout << "Son kiriting : " << endl;
    cin >> n;
    while (n != 0) {
        r = n % 10;
        cout << r << " ";
        n /= 10;
    }
    cout << endl;
}

void t11() {
    int n, i = 1, count = 0;
    cout << "Son kiriting: " << endl;
    cin >> n;
    while (i <= n) {
        count++;
        n /= 10;
    }
    cout << "Son " << count << " ta xonali!" << endl;
}

void t12() {
    int n, sum = 0;
    cout << "n butun soni berilgan. Berilgan son raqamlari\n"
            " yig’indisini chiqaruvchi programma tuzilsin." << endl;
    cin >> n;
    if (n <= 0) {
        cout << "Iltimos, musbat butun son kiriting." << endl;
        return;
    }
    while (n > 0) {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << "Raqamlar yig'indisi : " << sum << endl;
}

void t13() {
    int n, count = 0;
    cout << "n butun soni berilgan. Berilgan son raqamlari sonini chiqaruvchi programma tuzilsin." << endl;
    cin >> n;
    while (n > 0) {
        int r = n % 10;
        count++;
        n /= 10;
    }
    cout << "Siz kiritgan sonning raqamlari soni " << count << " ta" << endl;
}

void t14() {
    int a, b, countA = 0, countB = 0;
    cout << "a va b butun sonlar berilgan. Berilgan sonlarni\n"
            " raqamlari soni teng bo’lsa, “TENG”, aks holda,\n"
            " “TENG EMAS” deb chiqaring. Masalan: 247 va 946 → \n"
            "TENG" << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    while (a > 0) {
        int r = a % 10;
        countA++;
        a = a / 10;
    }
    while (b > 0) {
        int r = b % 10;
        countB++;
        b = b / 10;
    }
    if (countA == countB) {
        cout << "TENG" << endl;
    } else if (countA != countB) {
        cout << "TENG EMAS" << endl;
    }
}

void t15() {
    int a, b, countA = 0, countB = 0;
    cout << "a va b butun sonlar berilgan. Berilgan sonlarni\n"
            " raqamlari yig’indisi teng bo’lsa, “TENG”, aks\n"
            " holda, “TENG EMAS” deb chiqaring. Masalan:\n"
            " 247 va 94 → TENG" << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    while (a > 0) {
        int r = a % 10;
        countA += r;
        a = a / 10;
    }
    while (b > 0) {
        int r = b % 10;
        countB += r;
        b = b / 10;
    }
    if (countA == countB) {
        cout << "TENG" << endl;
    } else if (countA != countB) {
        cout << "TENG EMAS" << endl;
    }
}

void t16() {
    int n, sum = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 raqami kiritilguncha davom ettirilsin.\n"
            " 0 raqami kirtilgandan so‘ng esa kirtilgan musbat sonlarning\n"
            " yig‘indisini hisoblovchi dastur tuzilsin." << endl;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        sum += n;
    }
    cout << "Yig'indi : " << sum << endl;
}

void t17() {
    int son, count = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 raqami kiritilguncha davom ettirilsin.\n"
            " 0 raqami kirtilgandan so‘ng esa kirtilgan manfiy\n"
            " sonlarning nechtaligini hisoblovchi dastur tuzilsin." << endl;
    while (true) {
        cin >> son;
        if (son == 0) {
            break;
        }
        if (son < 0) {
            count += abs(son);
        }
    }
    cout << "Kiritilgan manfiy sonlarning yig'indisi : " << -count << endl;
}

void t18() {
    int n, mul = 1;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 kiritilguncha davom etadi.\n"
            " Shu kiritilgan sonlarning ko'paytmasini toping.\n"
            " Ko’paytmada 0 raqami hisobga olinmasin." << endl;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        mul *= n;
    }
    cout << "Sonlarning ko'paytmasi : " << mul << endl;
}

void t19() {
    int n, count = 0;
    cout << "Foydalanuvchi tomonidan butun sonlar kiritilaveradi.\n"
            " Bu jarayon manfiy son kiritilguncha davom etadi.\n"
            " Shu sonlarning ichida nechtasi 3 ga karrali ekanligini\n"
            " aniqlovchi dastur tuzing." << endl;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        if (n % 3 == 0) {
            count++;
        }
    }
    cout << "Siz kiritgan 3 ga karalli sonlar jami : " << count << " ta" << endl;
}

void t20() {
    int n, count = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon musbat bo‘lmagan son kiritilguncha \n"
            "davom etadi. Kiritilgan musbat sonlarning sonini\n"
            " chiqaruvchi dastur tuzing." << endl;
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        if (n > 0) {
            count++;
        }
    }
    cout << "Siz kiritgan musbat sonlar jami : " << count << " ta" << endl;
}

void t21() {
    int n, max = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 raqami kiritilguncha davom ettirilsin.\n"
            " 0 raqami kirtilgandan so‘ng esa kirtilgan sonlarning \n"
            "ichidan eng kattasini aniqlovchi dastur tuzilsin." << endl;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (max < n) {
            max = n;
        }
    }
    cout << "Siz kiritgan eng katta son : " << max << endl;
}

void t22() {
    int n, min = INT32_MAX;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 raqami kiritilguncha davom ettirilsin.\n"
            " 0 raqami kirtilgandan so‘ng esa kirtilgan sonlarning \n"
            "ichidan eng kichigini aniqlovchi dastur tuzilsin." << endl;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (min > n) {
            min = n;
        }
    }
    cout << "Siz kiritgan eng kichik son : " << min << endl;
}

void t23() {
    int N, count = 0;
    cout << "N soni berilgan. Shu son 3 ning nechinchi darajasi\n"
            " ekanligini toping." << endl;
    cin >> N;
    while (N > 1) {
        if (N % 3 != 0) {
            cout << "Siz kiritgan son 3 ning darajasi emas!" << endl;
            return;
        }
        N = N / 3;
        count++;
    }
    cout << "Siz kiritgan son 3 ning " << count << " darajasi!" << endl;
}

void t24() {
    int n, k, r, count = 0;
    cout << "n va k butun sonlari berilgan. Faqat ayirish\n"
            " va qo’shishdan foydalanib, n sonini k ga\n"
            " bo’lgandagi qoldiq va butun qismini ekranga\n"
            " chiqaruvchi programma tuzilsin." << endl;
    cout << "n :";
    cin >> n;
    cout << "k :";
    cin >> k;
    while (n >= k) {
        n = n - k;
        count++;
    }
    r = n;

    cout << "Siz kiritgan N sonini K ga bo'lgandagi butun qismi " << count << " va qoldiq " << r << "!" << endl;
}

void t25() {
    int n, i = 1;
    cout << "n soni berilgan. 1 dan n gacha barcha sonlarni ekranga\n"
            " chiqaring. Bunda agar son 3 ga bolinsa ekranga shu son\n"
            " o’rniga “Fizz”, agar son 4 ga bo’linsa, o’rniga “Buzz”,\n"
            " agar ham 3ga ham 4ga bolinsa, “FizzBuzz” sozini ekranga\n"
            " chiqaring. Misol: n = 6   -> 1, 2, “Fizz”, “Buzz”, 5,\n"
            " “Fizz”" << endl;
    cin >> n;
    while (n >= i) {
        if (i % 3 == 0 && i % 4 == 0) {
            cout << "FizzBuzz ";
        } else if (i % 3 == 0) {
            cout << "Fizz ";
        } else if (i % 4 == 0) {
            cout << "Buzz ";
        } else {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
}

void t26() {
    int year, count = 0;
    cout << "Yil kiriting : " << endl;
    cin >> year;
    while (true) {
        year++;
        int b = year % 10;
        int o = year / 10 % 10;
        int y = year / 100 % 10;
        int m = year / 1000 % 10;
        if (b != o && b != y && b != m && o != y && o != m && y != m) {
            cout << "Keyingi ajoyib yil: " << year << endl;
            break;
        }
    }
}

void t27() {
    int n, r, count = 0;
    cout << "n butun soni berilgan. Berilgan son\n"
            " raqamlari orasida 2 raqami bor yo’qligini\n"
            " aniqlovchi programma tuzilsin." << endl;
    cin >> n;
    bool hasTwo = false;
    while (n > 0) {
        r = n % 10;
        if (r == 2) {
            hasTwo = true;
            count++;
        }
        n /= 10;
    }
    if (hasTwo) {
        cout << "Berilgan sonda 2 raqami qatnashgan!" << endl;
        cout << "Berilgan sonda 2 raqami " << count << " marta qatnashgan!" << endl;
    } else {
        cout << "Berilgan sonda 2 raqami qatnashmagan!" << endl;
    }
}

void t28() {
    int n, r, count = 0;
    bool hasOdd = false;
    cout << "n butun soni berilgan. Berilgan son\n"
            " raqamlari orasida toq raqamlar bor\n"
            " yo’qligini aniqlovchi programma tuzilsin." << endl;
    cin >> n;
    while (n > 0) {
        r = n % 10;
        if (r % 2 != 0) {
            hasOdd = true;
            count++;
        }
        n /= 10;
    }
    if (hasOdd == true) {
        cout << "Berilgan sonda toq son mavjud" << endl;
        cout << "Jami toq sonlar " << count << " ta" << endl;
    }
    if (hasOdd == false) {
        cout << "Berilgan sonda toq son mavjud emas" << endl;
    }
}

void t29() {
    int n;
    cout << "4 xonali son kiritiladi. Shu sondan katta birinchi palindrom sonni chiqaring." << endl;
    cin >> n;
    while (true) {
        n++;
        int temp = n;
        int reversed = 0;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        if (n == reversed) {
            cout << "Keyingi palindrom son: " << n << endl;
            break;
        }
    }
}
