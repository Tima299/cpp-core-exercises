//Temur Eshboyev
//10/10/2024
//18:39:19
#include <iostream>
using namespace std;

int main() {
    void t49(), t50();
    void t51(), t52(), t53(), t54(), t55(), t56(), t57(), t58(), t59(), t60();
    void t61(), t62(), t63(), t64(), t65(), t66(), t67(), t68(), t69(), t70();
    void t71(), t72(), t73(), t74(), t75(), t76(), t77(), t78(), t79(), t80();
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(49 - 80, 0-chiqish)" << endl;
        cout << "_____________________________________________________________________________" << endl;
        cin >> task;
        switch (task) {
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
            case 53:
                t53();
                break;
            case 54:
                t54();
                break;
            case 55:
                t55();
                break;
            case 56:
                t56();
                break;
            case 57:
                t57();
                break;
            case 58:
                t58();
                break;
            case 59:
                t59();
                break;
            case 60:
                t60();
                break;
            case 61:
                t61();
                break;
            case 62:
                t62();
                break;
            case 63:
                t63();
                break;
            case 64:
                t64();
                break;
            case 65:
                t65();
                break;
            case 66:
                t66();
                break;
            case 67:
                t67();
                break;
            case 68:
                t68();
                break;
            case 69:
                t69();
                break;
            case 70:
                t70();
                break;
            case 71:
                t71();
                break;
            case 72:
                t72();
                break;
            case 73:
                t73();
                break;
            case 74:
                t74();
                break;
            case 75:
                t75();
                break;
            case 76:
                t76();
                break;
            case 77:
                t77();
                break;
            case 78:
                t78();
                break;
            case 79:
                t79();
                break;
            case 80:
                t80();
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

void t49() {
    int n;
    cout << "1 dan 100 gacha bo‘lgan toq sonlarni alohida va juft\n"
            " sonlarni alohida qatorda ekranga chiqaruvchi dastur tuzing." << endl;
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        cout << i << "      " << (i + 1) << " \n";
    }
}

void t50() {
    int n, sum = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 son kiritilguncha davom etadi. \n"
            "Kiritilgan musbat sonlarning yig’indisini toping." << endl;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        } else if (n > 0) {
            sum += n;
        }
    }
    cout << "Musbat sonlarning yig'indisi: " << sum << endl;
}

void t51() {
    int a, b;
    cout << "a dan b gacha butun sonlar berilgan (b>0) a sonini\n"
            " b marta chiqaruvchi pragramma tuzilsin." << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    for (int i = a; i <= b; ++i) {
        cout << a << " " << endl;
    }
}

void t52() {
    int a, b, sum = 0;
    cout << "a dan b gacha butun sonlar berilgan (a<b) a va b\n"
            " sonlari orasidagi barcha butun sonlarni yig’indisini\n"
            " chiqaruvchi programma tuzilsin. a va b yig’indiga kirmasin." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    for (int i = a + 1; i < b; ++i) {
        sum += i;
    }
    cout << "Yig'indi : " << sum << endl;
}

void t53() {
    int a, b, mul = 1;
    cout << "a va b butun sonlar berilgan (a<b). a dan b\n"
            " gacha bo’lgan barcha butun sonlarni ko’paytmasini\n"
            " chiqaruvchi dastur tuzing. (a va b ham ko’paytmaga kirsin)" << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    for (int i = a + 1; i < b; ++i) {
        mul += i;
    }
    cout << "Ko'paytmasi : " << mul << endl;
}

void t54() {
    int n, sum = 0;
    cout << "1 dan 100 gacha bo‘lgan toq sonlar ichidan 3 ga\n"
            " bo’linadigan ammo 5 ga bo‘linmaydigan sonlarning\n"
            " yig’indisini hisoblovchi dastur tuzing." << endl;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }
    cout << "Yig'indi : " << sum << endl;
}

void t55() {
    int a, count = 0;
    cout << "N natural soni berilgan. Uning tub yoki tub\n"
            " emasligini aniqlovchi dastur tuzing. Tub son\n"
            " - bu faqat o‘ziga va 1 ga qoldiqsiz bo‘linadigan son." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            count++;
        }
        if (count > 2) {
            cout << "Tub son emas!" << endl;
        }
    }
    cout << "Tub son!" << endl;
}

void t56() {
    int N, max = 0;
    cout << "Sizga butun N soni beriladi, sizning vazifangiz bu son\n"
            " qandaydir butun sonning kvadrati bo’la oladimi yoki yo’qligini\n"
            " tekshirishdan iborat" << endl;
    cin >> N;
    for (int i = 1; i * i <= N; ++i) {
        if (i * i == N) {
            max = i;
        }
    }
    if (max == 0) {
        cout << "Siz kiritgan songa hech bir son kvadrati bo'la olmaydi!" << endl;
    } else {
        cout << "Siz kiritgan son : " << max << " ning kvadrati bo'la oladi" << endl;
    }
    cout << "_______________________________________________________" << endl;
}

void t57() {
    int a, b;
    cout << "a va b sonlari berilgan. (a<b) a dan b gacha 4\n"
            " ga karrali sonlarni ekranga chiqaruvchi dastur\n"
            " tuzing. (a va b kirmasin)" << endl;
    cin >> a >> b;
    for (int i = a + 1; i < b; ++i) {
        if (i % 4 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t58() {
    int a, mul = 1;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi.\n"
            " Bu jarayon 0 kiritilguncha davom etadi.\n"
            " Shu kiritilgan sonlarning ko'paytmasini toping.\n"
            " Ko’paytmada 0 raqami hisobga olinmasin." << endl;
    while (true) {
        cin >> a;
        if (a == 0) {
            break;
        } else {
            mul *= a;
        }
    }
    cout << "Ko'paytmasi : " << mul << endl;
}

void t59() {
    int S, N, pow = 1;
    cout << "Butun turdagi S sonini N-darajasini aniqlaydigan\n"
            " dastur tuzing.math kutbxonasi funksiyalari ishlatilmasin.\n"
            " N-natural son" << endl;
    cout << "S :";
    cin >> S;
    cout << "N :";
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        pow *= S;
    }
    cout << pow << endl;
}

void t60() {
    cout << "Barcha 2 xonali sonlar ichida kamida 1 ta raqami\n"
            " 8 bo’lgan barcha sonlarni ekranga chiqaruvchi dastur\n"
            " tuzing." << endl;
    for (int i = 10; i < 100; i++) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        if (birlar == 8 || onlar == 8) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t61() {
    int n, k;
    cout << "n va k butun sonlari berilgan. Faqat ayirish\n"
            " va qo’shishdan foydalanib, n sonini k ga bo’lgandagi\n"
            " qoldiq va butun qismini ekranga chiqaruvchi programma tuzilsin." << endl;
    cout << "n : ";
    cin >> n;
    cout << "k : ";
    cin >> k;

    int quotient = 0;
    while (n >= k) {
        n = n - k;
        quotient++;
    }
    cout << "Butun qismi : " << quotient << endl;
    cout << "Qoldiq qismi : " << n << endl;
}

void t62() {
    cout << "Barcha 3 xonali sonlar ichida o’nlar xonasidagi raqam\n"
            " 7 ga teng bo’lgan barcha sonlarni ekranga chiqaruvchi\n"
            " dastur tuzing." << endl;
    for (int i = 100; i <= 999; ++i) {
        int onlar = i / 10 % 10;
        if (onlar == 7) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t63() {
    cout << "Barcha 3 xonali sonlar ichida yuzlar va birlar\n"
            " xonasidagi raqam 3 ga teng bo’lgan barcha sonlarni\n"
            " ekranga chiqaring." << endl;
    for (int i = 100; i <= 999; ++i) {
        int birlar = i % 10;
        int yuzlar = i / 100 % 10;
        if (yuzlar == 3 && birlar == 3) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t64() {
    cout << "Barcha 2 xonali sonlar ichida raqamlar yig’indisi 9 ga\n"
            " yoki 15 ga teng bo’lgan sonlarni ekranga chiqaring." << endl;
    for (int i = 10; i <= 99; i++) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int s = birlar + onlar;
        if (s == 9 || s == 15) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t65() {
    cout << "Barcha 3 xonali sonlar ichida raqamlar yig’indisi 20 ga\n"
            " teng bo’lgan sonlarni ekranga chiqaring." << endl;
    for (int i = 100; i <= 999; i++) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100 % 10;
        int s = birlar + onlar + yuzlar;
        if (s == 20) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t66() {
    int a, b, temp;
    cout << "Berilgan 2 ta sonning EKUBini topadigan dastur tuzing" << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    for (int i = 1; i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            temp = i;
        }
    }
    cout << "EKUB :" << temp << endl;
}

void t67() {
    int count;
    cout << "3 xonali sonlar ichida 3 ga va 5 ga bo’linadigan sonlar\n"
            " nechtaligini aniqlovchi dastur tuzing." << endl;
    for (int i = 100; i <= 999; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            count++;
        }
    }
    cout << "3 ga va 5 ga bo'linadigan 3 xonali sonlar soni: " << count << endl;
}

void t68() {
    int a, count = 0;
    cout << "Foydalanuvchi tomonidan sonlar kiritilaveradi. Bu jarayon musbat\n"
            " bo‘lmagan son kiritilguncha davom etadi. Kiritilgan musbat\n"
            " sonlarning sonini chiqaruvchi dastur tuzing." << endl;
    while (true) {
        cin >> a;
        if (a > 0) {
            count++;
        } else {
            break;
        }
    }
    cout << "Kiritilgan musbat sonlarning soni: " << count << endl;
}

void t69() {
    cout << "Barcha 2 xonali sonlar ichida raqamlar yig’indisi\n"
            " 12 dan katta bo’lgan barcha sonlarni ekranga chiqaring." << endl;
    for (int i = 10; i <= 99; i++) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int s = birlar + onlar;
        if (s >= 12) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t70() {
    int a, b, ekuk;
    cout << "Berilgan 2 ta sonning EKUKini topadigan dastur tuzing." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    int max = a * b;
    for (int i = 1; i <= max; i++) {
        if (i % a == 0 && i % b == 0) {
            ekuk = i;
            break;
        }
    }
    cout << "ekuk : " << ekuk << endl;
}

void t71() {
    cout << "Hamma raqami toq 4 xonali barcha sonlarni ekranga\n"
            " chiqaruvchi dastur tuzing." << endl;
    for (int i = 1000; i <= 9999; i++) {
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 100 % 10;
        int d = i / 1000 % 10;
        if (a % 2 != 0 && b % 2 != 0 && c % 2 != 0 && d % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t72() {
    int kg;
    cout << "1 kg konfet narxi berilgan (haqiqiy son).\n"
            " 1.1, 1.2, …, 2 kg konfet narxlarini ekranga\n"
            " chiqaruvchi programma tuzilsin." << endl;
    cout << "1kg konfet narxi :";
    cin >> kg;
    for (double i = 1.1; i <= 2.1; i += 0.1) {
        cout << i << " kg konfet narxi " << i * kg << " so'm!" << endl;
    }
}

void t73() {
    double n, S = 0.0;
    cout << "n butun soni berilgan. Quyidagi yig’indini\n"
            " hisoblovchi programma tuzilsin:\n"
            "S = 1 + 1/2 + 1/3 + .. 1/n." << endl;
    cin >> n;
    for (double i = 1; i <= n; i++) {
        S += 1 / i;
    }
    cout << "Siz kiritgan son : " << n << " va jami yig'indi " << S << endl;
}

void t74() {
    int kg;
    cout << "1 kg konfet narxi berilgan (haqiqiy son).\n"
            " 1.1, 1.2, …, 2 kg konfet narxlarini ekranga\n"
            " chiqaruvchi programma tuzilsin." << endl;
    cout << "1kg konfet narxi :";
    cin >> kg;
    for (double i = 0.1; i <= 1; i += 0.1) {
        cout << i << " kg konfet narxi " << i * kg << " so'm!" << endl;
    }
}

void t75() {
    int number;
    cout << "Sonni kiriting :";
    cin >> number;
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    cout << "Berilgan sonning xonalari soni: " << count << endl;
}

void t76() {
    int N;
    cout << "N soni berigan, N sonini N marotaba chiqaruvchi dastur tuzing." << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << N << " ";
    }
    cout << endl;
}

void t77() {
    int a, mul = 1;;
    cout << "Berilgan sonning bo’luvchilari ko’paytmasini topuvchi\n"
            " dastur tuzing." << endl;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            cout << i << " ";
            mul *= i;
        }
    }
    cout << endl;
    cout << "Ushbu sonlarning umumiy ko'paytmasi : " << mul << endl;
}

void t78() {
    double n, S = 1;
    cout << "n butun soni berilgan. Quyidagi ko’paytmani\n"
            " hisoblovchi programma tuzilsin:\n"
            " S = 1.1 * 1.2 * 1.3 * **** n gacha" << endl;
    cin >> n;
    for (double i = 1.1; i <= n + 0.1; i += 0.1) {
        S *= i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Ushbu sonlarning ko'paytmasi : " << S << endl;
}

void t79() {
    int N, sum = 0;
    cout << "N natural soni berilgan. Uning mukammal yoki\n"
            " mukammal emasligini aniqlang.Mukammal sonlar\n"
            " - oʻzidan farqli boʻluvchilarning yigʻindisiga\n"
            " teng natural sonlar.Masalan, 6=1+2+3, 28=1+2+4+7+14" << endl;
    cin >> N;
    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    if (sum == N) {
        cout << "Mukammal son!" << endl;
    } else {
        cout << "Mukammal son emas!" << endl;
    }
}

void t80() {
    int number;
    cout << "Sonni kiriting: ";
    cin >> number;

    int originalNum = number;
    int reversedNum = 0;
    while (number > 0) {
        int digit = number % 10;
        reversedNum = reversedNum * 10 + digit;
        number /= 10;
    }
    if (originalNum == reversedNum) {
        cout << originalNum << " palindrom son" << endl;
    } else {
        cout << originalNum << " palindrom emas" << endl;
    }
}
