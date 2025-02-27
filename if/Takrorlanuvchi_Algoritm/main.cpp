//Temur Eshboyev
//09/10/2024
//01:45:15
#include <iostream>
using namespace std;
void t1(), t2(), t3(), t4(), t5(), t6(), t7(), t8(), t9(), t10();
void t11(), t12(), t13(), t14(), t15(), t16(), t17(), t18(), t19(), t20();
void t21(), t22(), t23(), t24(), t25(), t26(), t27(), t28(), t29(), t30();
void t31(), t32(), t33(), t34(), t35(), t36(), t37(), t38(), t39(), t40();
void t41(), t42(), t43(), t44(), t45(), t46(), t47(), t48(), t49(), t50();
void t51(), t52(), t53(), t54(), t55(), t56(), t57(), t58(), t59();

int main() {
    int task;
    char toContinue;
    do {
        cout << "Nechanchi mashqni ishlatib ko'rmoqchisiz?(1 - 59, 0-chiqish)" << endl;
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
    int number;
    string name;
    int count = 1;
    cout << "Ismingizni kiriting : " << endl;
    cin >> name;
    cout << "Necha marta ismingizni ekranga chiqarmoqchsiz?" << endl;
    cin >> number;
    for (int i = 1; i <= number; ++i) {
        cout << "Ismingiz: " << name << " va bu " << count++ << "-chi marta ekranga chiqishi" << endl;
    }
}

void t2() {
    for (int i = 20; i <= 50; ++i) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

void t3() {
    for (int i = 100; i <= 130; ++i) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}

void t4() {
    for (int i = 30; i <= 60; ++i) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }
}

void t5() {
    for (int i = 70; i <= 100; ++i) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
    }
}

void t6() {
    for (int i = 60; i <= 120; ++i) {
        if (i % 8 == 0) {
            cout << i << endl;
        }
    }
}

void t7() {
    for (int i = 100; i <= 200; ++i) {
        if (i % 10 == 0) {
            cout << i << endl;
        }
    }
}

void t8() {
    for (int i = 60; i >= 30; --i) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }
}

void t9() {
    for (int i = 100; i >= 70; --i) {
        if (i % 4 == 0) {
            cout << i << endl;
        }
    }
}

void t10() {
    for (int i = 120; i >= 60; --i) {
        if (i % 8 == 0) {
            cout << i << endl;
        }
    }
}

void t11() {
    for (int i = 200; i >= 100; --i) {
        if (i % 10 == 0) {
            cout << i << endl;
        }
    }
}

void t12() {
    int a;
    cout << "chegara kiriting!" << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % 2 == 0) {
            cout << i << endl;
        }
    }
}

void t13() {
    int a;
    cout << "chegara kiriting!" << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % 2 != 0) {
            cout << i << endl;
        }
    }
}

void t14() {
    int a;
    int sum;
    cout << "chegara kiriting!" << endl;
    cin >> a;
    for (int i = 1; i <= a; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "Yig'indisi " << sum << endl;
}

void t15() {
    int a;
    cout << "chegara kiriting!" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
}

void t16() {
    int a, sum;
    cout << "chegara kiriting!" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--) {
        if (i % 2 == 0) {
            cout << i << endl;
            sum += i;
        }
    }
    cout << "Yig'indisi " << sum << endl;
}

void t17() {
    int N;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 5 == 0) {
            cout << i << endl;
        }
    }
}

void t18() {
    int N;
    int count = 0;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 4 == 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Jami : " << count << " ta" << endl;
}

void t19() {
    int N;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << endl;
        }
    }
}

void t20() {
    int N;
    int count = 0;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 != 0) {
            cout << i << endl;
            count++;
        }
    }
    cout << "Jami : " << count << " ta" << endl;
}

void t21() {
    int N;
    int mul = 1;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 4 == 0) {
            cout << i << endl;
            mul = mul * i;
        }
    }
    cout << "Barcha sonlarni ko'paytmasi : " << mul << endl;
}

void t22() {
    int N, count;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 != 0) {
            cout << i << endl;
            count += i;
        }
    }
    cout << "Jami : " << count << " ta" << endl;
}

void t23() {
    int N, count;
    cout << "Chegara kiriting " << endl;
    cin >> N;
    for (int i = N; i >= 1; --i) {
        cout << i << endl;
    }
}

void t24() {
    int a, b, count;
    cout << "A va B ga qiymat bering : " << endl;
    cin >> a >> b;
    for (int i = a + 1; i < b; ++i) {
        if (i % 2 != 0) {
            cout << i << endl;
            count += i;
        }
    }
    cout << "Jami yig'indisi: " << count << endl;
}

void t25() {
    int a, b;
    cout << "A va B ga qiymat bering : " << endl;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        cout << i << endl;
    }
}

void t26() {
    int a, b, count = 1;
    cout << "A va B ga qiymat bering : " << endl;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) {
            cout << i << endl;
            count *= i;
        }
    }
    cout << "Jami ko'paytmasi: " << count << endl;
}

void t27() {
    int a, b, count;
    cout << "A va B ga qiymat bering : " << endl;
    cin >> a >> b;
    for (int i = b - 1; i > a; --i) {
        cout << i << endl;
    }
}

void t28() {
    int a, b, count = 0, mul = 1;
    cout << "A va B ga qiymat bering : " << endl;
    cin >> a >> b;
    for (int i = a + 1; i < b; ++i) {
        if (i % 2 == 0) {
            cout << i << endl;
            count += i;
        }
    }
    cout << "Jami yig'indisi: " << count << endl;
    for (int i = a + 1; i < b; ++i) {
        if (i % 2 != 0) {
            cout << i << endl;
            mul *= i;
        }
    }
    cout << "Jami ko'paytmasi: " << mul << endl;
}

void t29() {
    int n, mulAll = 1;
    cout << "n butun soni berilgan. Birdan n gacha bo’lgan sonlar\n"
            " ko’paytmasini ekranga chiqaruvchi programma tuzilsin.\n"
            " (1*2*3*...*n)" << endl;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        mulAll *= i;
    }
    cout << "Barcha sonlarni ko'paytmasi : " << mulAll << endl;
}

void t30() {
    int n;
    cout << "Sonni kiriting: " << endl;
    cin >> n;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void t31() {
    int narx;
    cout << "1 kilo konfet narxini kiriting" << endl;
    cin >> narx;
    for (int i = 1; i <= 10; ++i) {
        cout << "Konfetni " << i << " kilogrami " << narx * i << endl;
    }
}

void t32() {
    double narx;
    cout << "1 kilo konfet narxini kiriting" << endl;
    cin >> narx;
    for (double i = 0.1; i <= 1; i += 0.1) {
        cout << "Konfetni " << i << " kilogrami " << narx * i << endl;
    }
}

void t33() {
    double narx;
    cout << "1 kilo konfet narxini kiriting" << endl;
    cin >> narx;
    for (int i = 20; i <= 40; i += 2) {
        double weight = i / 10.0;
        cout << "Konfetni " << weight << " kilogrami " << narx * weight << endl;
    }
}

void t34() {
    int a, b;
    int count = 1;
    cout << "a va b sonlari berilgan. (a<b) a dan b gacha 4 ga karrali\n"
            " sonlarni ekranga chiqaruvchi dastur tuzing. (a va b kirmasin)" << endl;
    cin >> a >> b;
    for (int i = a + 1; i < b; ++i) {
        if (i % 4 == 0) {
            cout << "4 ga karalli " << count++ << "-son : " << i << endl;
        }
    }
}

void t35() {
    int a, b;
    cout << "a va b butun sonlar berilgan (b>0) a sonini b marta chiqaruvchi\n"
            " pragramma tuzilsin." << endl;
    cin >> a >> b;
    for (int i = 1; i <= b; ++i) {
        cout << a << " ";
    }
    cout << endl;
}

void t36() {
    cout << "Barcha uch xonali sonlar orasidan o’nlar xonasida 4 \n"
            "raqam turgan sonlarni chiqaring." << endl;
    for (int i = 100; i <= 1000; ++i) {
        int onlar = i / 10 % 10;
        if (onlar == 4) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t37() {
    cout << "Barcha uch xonali sonlar orasidan yuzlar xonasida juft raqam\n"
            " turgan va birlar xonasida 1 raqam turgan sonlarni chiqaring." << endl;
    for (int i = 100; i <= 1000; ++i) {
        int yuzlar = i / 100 % 10;
        int birlar = i % 10;
        if (yuzlar % 2 == 0 && birlar == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t38() {
    cout << "Barcha uch xonali sonlar orasidan o’nlar xonasi juft\n"
            " va birlar xonasi toq raqam turgan sonlarni chiqaring." << endl;
    for (int i = 100; i <= 1000; ++i) {
        int onlar = i / 10 % 10;
        int birlar = i % 10;
        if (onlar % 2 == 0 && birlar % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t39() {
    cout << "Barcha 4 xonali sonlar ichidan raqamlar yigindisi 12 bolgan juft sonlarni chiqaring.\n"
            " Masalan: 2325, …." << endl;
    for (int i = 1000; i <= 9999; ++i) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100 % 10;
        int minglar = i / 1000 % 10;
        if (birlar + onlar + yuzlar + minglar == 12) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t40() {
    cout << "Barcha 3 xonali sonlar ichidan raqamlar yigindisi 15\n"
            " bolgan sonlarni chiqaring." << endl;
    for (int i = 100; i <= 999; ++i) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int yuzlar = i / 100 % 10;
        if (birlar + onlar + yuzlar == 15) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t41() {
    cout << "Barcha 3 xonali sonlar ichidan barcha palindrom sonlar/n"
            " ekranga chiqarilsin.Palindrom son o'ngdan o'qisa ham/n"
            " chapdan o'qisa ham bir xil o’qiladaigan sonlardir./n"
            " Masalan : 101, 232, 222,606,888, 919" << endl;
    for (int i = 100; i <= 999; ++i) {
        int birlar = i % 10;
        int yuzlar = i / 100 % 10;
        if (birlar == yuzlar) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t42() {
    cout << "Barcha 2 xonali sonlar ichida raqamlar yig’indisi 9\n"
            " ga yoki 15 ga teng bo’lgan sonlarni ekranga chiqaring." << endl;
    for (int i = 10; i <= 99; ++i) {
        int birlar = i % 10;
        int onlar = i / 10 % 10;
        int sum = birlar + onlar;
        if (sum == 9 || sum == 15) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t43() {
    int a;
    cout << "Kiritlgan a sonni barcha boluvchilarini toping." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t44() {
    int a, count = 0;
    cout << "Kiritlgan a sonni barcha boluvchilarini nechtaligini toping." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;
    cout << a << " sonini : " << count << " ta bo'luvchisi mavjud" << endl;
}

void t45() {
    int a;
    cout << "Kiritilgan a sonni bo’luvchilari bo’lmagan sonlarni\n"
            " ekranga chiqaring. Masalan, a = 8 kiritilsa, konsolga\n"
            " 3, 5, 6, 7 sonlari chiqsin." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t46() {
    int a, sum = 0;
    cout << "Kiritlgan a sonni barcha boluvchilarini yig’indisini toping." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Berilgan songa bo'linadigan sonlarni yig'indisi : " << sum << endl;
}

void t47() {
    int a, count = 0, mul = 1;
    cout << "Kiritilgan a sonni bo’luvchilari bo’lmagan sonlarni\n"
            " nechtaligini va ularning ko’paytmasini ekranga chiqaring." << endl;
    cin >> a;
    for (int i = 1; i <= a; ++i) {
        if (a % i != 0) {
            cout << i << " ";
            count++;
            mul *= i;
        }
    }
    cout << endl;
    cout << "Jami : " << count << endl;
    cout << "Ularni ko'paytmasi : " << mul << endl;
}

void t48() {
    int a, b;
    cout << "2 ta son a va b berilgan. Shu sonlarning umumiy\n"
            " bo’luvchilarini ekranga chiqaring. Misol uchun: \n"
            "a = 12 va b = 18 kiritilsa, 1, 2, 3, 6 sonlarni\n"
            " chiqarish kk." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    int min = a;
    if (min > b) min = b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t49() {
    int a, b, count = 0, sum = 0;
    cout << "2 ta son a va b berilgan. Shu sonlarning umumiy\n"
            " bo’luvchilari nechtaligini va ularning yig’indisini\n"
            " ekranga chiqaring." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    int min = a;
    if (min > b) min = b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << endl;
    cout << "Jami ushbu sonning umumiy bo'luvchilar soni : " << count << endl;
    cout << "Ushbu sonning umumiy bo'luvchilari yig'indisi : " << sum << endl;
}

void t50() {
    int a, b, c;
    cout << "3 ta son a, b va c berilgan. Shu sonlarning\n"
            " umumiy bo’luvchilarini ekranga chiqaring." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    cout << "c :";
    cin >> c;
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void t51() {
    int a, b;
    cout << "2 ta a va b sonlar berilgan. Shu sonlarning EKUB\n"
            " ini toping. 2ta sonning EKUBi degani, shu sonlarning\n"
            " eng katta umumiy bo’luvchisini topish degani.\n"
            " Masalan a ga 12, b ga 15 kiritsak,\n"
            " 12 ning bo’luvchilari 1,2,3,4,6,12 sonlaridir,\n"
            " 15ning boluvchilari 1,3,5,15 sonlaridir. 12 va 15 ning\n"
            " umumiy boluvchilari esa 1 va 3. 12 va 15ning eng katta umumiy\n"
            " boluvchisi yani EKUBi 3 ga teng." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    int ekub = 1;
    int min = (a < b) ? a : b;
    for (int i = 1; i <= min; ++i) {
        if (a % i == 0 && b % i == 0) {
            ekub = i;
        }
    }
    cout << a << " va " << b << " sonlarining EKUBi " << ekub << endl;
}

void t52() {
    int a, b;
    cout << "2 ta a va b sonlar berilgan. Shu sonlarning EKUK ini\n"
            " toping. 2ta sonning EKUKi degani, shu sonlarning eng\n"
            " kichik umumiy karralisini topish degani. Masalan a ga\n"
            " 9, b ga 15 kiritsak, 9 ga karrali sonlar - 9,18,27,36,\n"
            "45,54,.... sonlaridir, 15ga karrali sonlar esa 15,30,45,\n"
            "60,75,.... sonlaridir. 9 va 15 ning umumiy karralilari esa\n"
            " 45,90,.... Eng kichik umumiy karralisi, yani EKUKi 45\n"
            " ga teng." << endl;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    int n = a * b;
    for (int i = 1; i <= n; ++i) {
        if (i % a == 0 && i % b == 0) {
            cout << i;
            break;
        }
    }
    cout << endl;
}

void t53() {
    int a;
    bool flag = true;
    cout << "Berilgan a sonni tub sonligini tekshiring. Yordam:\n"
            " Berilgan sonning bo’luvchilar soni topilsin. Shu sanoq\n"
            " 2 ga teng bo’lsa, tub son deyiladi." << endl;
    /*
        cin>>a;
        int n=0;
        for(int i=1; i<=a; ++i) {
            if(a%i==0) {
                n++;
            }
            if(n>2) {
                flag = false;
                cout<<"Tub son emas "<<endl;
                break;
            }
        }
        flag ? cout<<"Tub son"<<endl : cout<<" ";*/
    cin >> a;
    int count = 0;
    //tub =  a, 1;
    //2 a!=1; a>2
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        cout << "true\n";
    } else { cout << "false\n"; }
}

void t54() {
    int a, sum = 0;
    cout << "Berilgan a sonni mukammal sonligini tekshiring.\n"
            " Mukammal son - o’zidan tashqari bo’luvchilar\n"
            " yig’indisi kiritilgan songa teng bo’lsa, mukkamal\n"
            " son deyiladi. Yordam: Berilgan sonni o’zidan\n"
            " tashqari qolgan bo’luvchilarning yig’indisi topilsin.\n"
            " Shu yig’indi berilgan songa teng bo’lsa, son mukammal\n"
            " son deyiladi." << endl;
    cin >> a;
    //6 =  2 3 1
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    if (sum == a) {
        cout << "Berilgan son mukammal!" << endl;
    }
}

void t55() {
    int N;
    cout << "N soni berigan, N sonini N marotaba chiqaruvchi dastur tuzing." << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cout << N << " ";
    }
    cout << endl;
}

void t56() {
    double a, mul = 1;
    cout << "n butun soni berilgan. Quyidagi ko’paytmani\n"
            " hisoblovchi programma tuzilsin: S = 1.1 * 1.2 * 1.3 * … \n"
            "   (n ta ko’paytuvchi)" << endl;
    cin >> a;
    for (double i = 1.1; i <= a + 0.1; i += 0.1) {
        cout << i << " ";
        mul *= i;
    }
    cout << endl;
    cout << "Ko'paytmasi : " << mul << endl;
}

void t57() {
    double  add = 10.1, count=0;
    int a;
    cout << "n butun soni berilgan. Quyidagi yignidni hisoblovchi\n"
            " programma tuzilsin: S = 10.1 + 10.2 + 10.3 + …  \n"
            "  (n ta qoshiluvchi)" << endl;
    cin >> a;
    for (int i = 0; i <= a; i++) {
        count +=add;
        add += 0.1;
    }
    cout << endl;
    cout << "Yig'indisi : " << count << endl;
}

void t58() {
    int n, k, mul = 1;
    cout << "Foydalanuvchi tomonidan n va k sonlari kiritiladi.\n"
            " n sonining k-darajasini topuvchi dastur tuzing." << endl;
    cout << "son : ";
    cin >> n;
    cout << "daraja : ";
    cin >> k;
    for (int i = 1; i <= k; i++) {
        mul *= n;
    }
    cout << "Natija : " << mul << endl;
}

void t59() {
    int n, k;
    cout << "k va n butun sonlari berilgan. k sonini n\n"
            " marta ekranga chiqaruvchi programma tuzilsin." << endl;
    cout << "k : ";
    cin >> k;
    cout << "n : ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << k << " ";
    }
    cout << endl;
}
