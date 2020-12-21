#include <stdio.h>
 
 int main()
 {
    /*Для каждого задания будут созданы отдельные переменные с номером (задание 1 - а1 , с1 ,
    задание 2 - а2 с2  и т.д  */
    //№1 по сопротивлению 3х резисторов найти общее сопротивление,общая ф-ла R = (1/r1 + 1/r2)
    double sopr1, resultat1;
    sopr1 = 0.2;
    resultat1 = 3* (1/sopr1);
    printf ("resultat1=%f\n", resultat1);
    //№2 число полученное обратным выписыванием цифр 3х значного числа
    int chislo2, a2, b2, c2;
    chislo2 = 145;
    a2 = chislo2 % 10;
    b2 = a2;
    c2 = chislo2 / 10;
    a2 = c2 % 10;
    b2 = b2 * 10 + a2;
    c2 = c2 / 10;
    a2 = c2 % 10;
    b2 = b2 * 10 + a2;
    printf ("b2=%d\n", b2);
    //№3 Возведение в степень а
    //3.1 a в 4 степени за две операции
    int a3 = 2;
    a3 = a3*a3;
    a3 = a3*a3;
    printf ("a3=%d\n", a3);
    //3.2 a в 6 за 3 операции
    a3 = 2;
    a3 = a3 * a3 * a3;
    a3 = a3 * a3;
    printf ("a3=%d\n", a3);
    //3.3 а в 8 за 3 операции
    a3 = 2;
    a3 = a3 * a3;
    a3 = a3 * a3;
    a3 = a3 * a3;
    printf ("a3=%d\n", a3);
    //3.4 а в 10 за 4 операции
    a3 = 2;
    int y3;
    y3 = a3 * a3;
    y3 = y3 * y3;
    y3 = y3 * a3;
    y3 = y3 * y3;
    printf ("y3=%d\n", y3);
    //4. дано 4х разрядное число в 8ричной системе, перевести в десятичную
    int chislo4, a4, b4, c4, d4;
    int sys;
    chislo4 = 0007;
    sys = 8 ;
    a4 = (chislo4/1000)*(sys*sys*sys);
    b4 = ((chislo4/100)%10)*(sys*sys);
    c4 = ((chislo4/10)%10)*sys;
    d4 = (chislo4%10);
    d4 = a4+b4+c4+d4;
    printf ("d4=%d\n", d4);
    //5. во сколько раз 1 число больше третего
    int chislo5;
    float  a5, b5;
    float f5, h5 ,k5;
    chislo5 = 148;
    a5 = chislo5 / 100;
    b5 = chislo5 % 10;
    h5 = a5;
    k5 = b5;
    f5 = a5/b5;
    int l5 = f5 * 100;
    float c5 = h5 / 100;
    printf ("c5=%f\n", c5);
    //6.сумма чисел алгебраической прогресии
    float a6,b6,n6,c6;
    a6 = 2;
    b6 = 5;
    n6 = (b6-a6) + 1;
    c6 = ((a6+b6)/2)*n6;
    printf ("c6=%f\n", c6);
    
    
    
    return 0;
 }
