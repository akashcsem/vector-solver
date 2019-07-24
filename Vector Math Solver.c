
/**
    #######################################################################
    #######################################################################

        A complete solution for chapter of vector on all math

    #######################################################################
    #######################################################################
*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

        ///  Globally variable declere for all function and all step for the program

    int n, ax, ay, az, bx, by, bz, a, b, c, total;
    float root, root1, root2, total2, theata;

COORD coord = {0, 0};

COORD max_res,cursor_size;
int main()
{
    int n, i;
    printf("\n\t\t\t\xde"); design(223, 25);
    printf("\xdd\n\t\t\t\xde   A = axi + ayj + azk\t  \xdd\n\t\t\t\xde   B = bxi + byj + bzk\t  ");
    printf("\xdd\n\t\t\t\xde"); design(220, 25); printf("\xdd");

    printf("\n\n\n     ");
    printf("\n\n\t 1. A . B = ?\t\t 8. n or eeta = ?\n\t 2. A X B = ?\t\t 9. (a.b)/|a| = ?\n\t 3. A + B = ?\t\t10. (a.b)/|b| = ?\n\t 4. A - B = ?\t\t11. | AB | = ?\n\t 5. | A | = ?\t\t12. Angle = ?\n\t 6. | B | = ?\t\t13. Positional value(Parallel)\n\t 7. | A X B | = ?\t14. Positional value(Perpendicular)");


    gotoxy(4, 7);
    for(i=1; i<=67; i++) {
        printf("\xb1");
        Sleep(15);
    }
    for(i=7; i<=17; i++) {
        gotoxy(4, i); printf("\xb1"); gotoxy(70, i); printf("\xb1");
        Sleep(20);
    }
    gotoxy(4, 18);
    for(i=1; i<=67; i++) {
        printf("\xb1");
        Sleep(15);
    }
    printf("\n\n\n\t\t\tChoose an option : ");
    scanf("%d",&n);

    system("cls");
    if(n >= 1 && n <= 14)
    {
        if(n == 1)
            dotgunon();
        else if(n == 2)
            crosgunon();
        else if(n == 3)
            addition();
        else if(n == 4)
            subtruction();
        else if(n == 5)
            mode_A();
        else if(n == 6)
            mode_B();
        else if(n == 7)
            mode_crosgunon();
        else if(n == 8)
            eeta();
        else if(n == 9)
            ovikkhepa();
        else if(n == 10)
            ovikkhepb();
        else if(n == 11)
            modeAB();
        else if(n == 12)
            angle();
        else if(n == 13)
             parallel();
        else if(n == 14)
            perpendicular();
    }
    else
        printf("\n\n\tPlease choose an correct numeric option from 1 to 14.");

    getch();
}


int input_value()
{
    printf("\n\tA = axi + ayj + azk\n\tB = bxi + byj + bzk\n");

    printf("\n\tax = ");
    scanf("%d",&ax);
    printf("\tay = ");
    scanf("%d",&ay);
    printf("\taz = ");
    scanf("%d",&az);

    printf("\n");

    printf("\tbx = ");
    scanf("%d",&bx);
    printf("\tby = ");
    scanf("%d",&by);
    printf("\tbz = ");
    scanf("%d",&bz);
}

int input_value2()
{
    system("cls");
    printf("\n  Question\n  ________\n");
    printf("\n\tA = ");
    show_A();
    printf("\n\tB = ");
    show_B();
}

int show_A()
    {

    if(ax == 1)
        printf(" i");
    else if(ax == -1)
        printf("- i");
    else if(ax > 1)
        printf("%di",ax);
    else if(ax < -1)
        printf("- %di",-ax);

    if(ax == 0)
        {
        if(ay == 1)
            printf(" j");
        else if(ay == -1)
            printf("- j");
        else if(ay > 1)
            printf("%dj",ay);
        else if(ay < -1)
            printf(" - %dj",-ay);
        }

    else
        {
        if(ay == 1)
            printf(" + j");
        else if(ay == -1)
            printf(" - j");
        else if(ay > 1)
            printf(" + %dj",ay);
        else if(ay < -1)
            printf(" - %dj",-ay);
        }


    if(ax == 0 && ay == 0)
        {
        if(az == 1)
            printf("k");
        else if(az == -1)
            printf("- k");
        else if(az > 1)
            printf("%dk",az);
        else if(az < -1)
            printf("- %dk",-az);
        }
    else
    {
        {
        if(az == 1)
            printf(" + k");
        else if(az == -1)
            printf(" - k");
        else if(az > 1)
            printf(" + %dk",az);
        else if(az < -1)
            printf(" - %dk",-az);
        }
    }
}

int show_A2()
    {

    if(ax >= 1 && ax <=9)
        printf("  %d",ax);
    else if(ax <= -1 && ax >= -9)
        printf(" %d",ax);
    else if(ax >= 10)
        printf(" %d",ax);
    else if(ax <= -10)
        printf("%d",ax);
    else
        printf("  0");


    if(ay >= 1 && ay <=9)
        printf("    %d",ay);
    else if(ay <= -1 && ay >= -9)
        printf("   %d",ay);
    else if(ay >= 10)
        printf("   %d",ay);
    else if(ay <= -10)
        printf("  %d",ay);
    else
        printf("    0");


    if(az >= 1 && az <=9)
        printf("    %d",az);
    else if(az <= -1 && az >= -9)
        printf("   %d",az);
    else if(az >= 10)
        printf("   %d",az);
    else if(ay <= -10)
        printf("  %d",az);
    else
        printf("    0");


    }


int show_B()
{
    if(bx == 1)
        printf(" i");
    else if(bx == -1)
        printf("-i");
    else if(bx > 1)
        printf("%di",bx);
    else if(bx < -1)
        printf("- %di",-bx);



    if(bx == 0)
        {
        if(by == 1)
            printf(" j");
        else if(by == -1)
            printf("- j");
        else if(by > 1)
            printf(" + %dj",by);
        else if(by < -1)
            printf("- %dj",-by);
        }

    else
        {
        if(by == 1)
            printf(" + j");
        else if(by == -1)
            printf(" - j");
        else if(by > 1)
            printf(" + %dj",by);
        else if(by < -1)
            printf(" - %dj",-by);
        }


    if(bx == 0 && by == 0)
        {
        if(bz == 1)
            printf("k");
        else if(bz == -1)
            printf("- k");
        else if(bz > 1)
            printf("%dk",bz);
        else if(bz < -1)
            printf("- %dk",-bz);
        }
    else
    {
        {
        if(bz == 1)
            printf(" + k");
        else if(bz == -1)
            printf(" - k");
        else if(bz > 1)
            printf(" + %dk",bz);
        else if(bz < -1)
            printf(" - %dk",-bz);
        }
    }
}

int show_B2()
    {

    if(bx >= 1 && bx <=9)
        printf("  %d",bx);
    else if(bx <= -1 && bx >= -9)
        printf(" %d",bx);
    else if(bx >= 10)
        printf(" %d",bx);
    else if(bx <= -10)
        printf("%d",bx);
    else
        printf("  0");


    if(by >= 1 && by <=9)
        printf("    %d",by);
    else if(by <= -1 && by >= -9)
        printf("   %d",by);
    else if(by >= 10)
        printf("   %d",by);
    else if(ay <= -10)
        printf("  %d",by);
    else
        printf("    0");


    if(bz >= 1 && bz <=9)
        printf("    %d",bz);
    else if(bz <= -1 && bz >= -9)
        printf("   %d",bz);
    else if(bz >= 10)
        printf("   %d",bz);
    else if(ay <= -10)
        printf("  %d",bz);
    else
        printf("    0");
}


int for_cros()
{
     if(a >= 2)
        printf("  %di", a);
    else if(a == 1)
        printf(" i");
    else if(a == -1)
        printf(" -i");
    else if(a == 0)
            printf("");
    else if(a <= -2)
        printf(" %di", a);

    if(b >= 2)
        printf("  + %dj", b);
    else if(b == 1)
        printf(" + j");
    else if(b == -1)
        printf(" - j");
    else if(b == 0)
            printf("");
    else if(b <= -2)
        printf("  - %dj", -b);


    if(c >= 2)
        printf("  + %dk", c);
    else if(c == 1)
        printf(" + k");
    else if(c == -1)
        printf(" - k");
    else if(c == 0)
            printf("");
    else if(c <= -2)
        printf("  - %dk", -c);
}

/*
    ##################################################################

        information of addition function and start here    A + B = ?

    ##################################################################
*/

int addition()
{
    input_value();
    input_value2();

    printf("\n\n  A + B = ?\n\n");
    a = ax + bx;
    b = ay + by;
    c = az + bz;

    total = a + b + c;
    printf("\n   Solve\n  ______\n");
    printf("\n       A + B  =  ( ");

    show_A();
    printf(" ) + ( ");
    show_B();
    printf(" )");

    if(bx >= 0)
        printf("\n\n\t      =  (%d + %d)i",ax, bx);
    else
        printf("\n\n\t   =  (%d - %d)i", ax, -bx);

    if(by >= 0)
        printf(" + (%d + %d)j",ay, by);
    else
        printf(" + (%d - %d)j", ay, -by);


    if(bz >= 0)
        printf(" + (%d + %d)k",az, bz);
    else
        printf(" + (%d - %d)k", az, -bz);

    printf("\n\n    .\n   . . A + B  =");
    for_cros();
}

/*
    #####################################################################

        information of subtraction function and start here   A - B = ?

    #####################################################################
*/

int subtruction()
{
    input_value();
    input_value2();

    printf("\n\n  A - B = ?\n\n");
    a = ax - bx;
    b = ay - by;
    c = az - bz;

    total = a + b + c;
    printf("\n   Solve\n  ______\n");
    printf("\n\tA - B  =  ( ");

    show_A();
    printf(" ) - ( ");
    show_B();
    printf(" )");

    if(bx >= 0)
        printf("\n\n\t       =  (%d - %d)i",ax, bx);
    else
        printf("\n\n\t       =  (%d + %d)i", ax, -bx);

    if(by >= 0)
        printf(" + (%d - %d)j", ay, by);
    else
        printf(" + (%d + %d)j",ay, by);


    if(bz >= 0)
        printf(" + (%d - %d)k",az, bz);
    else
        printf(" + (%d + %d)k", az, -bz);

    printf("\n\n     .\n    . . A - B  = ");
    for_cros();
}

/*
    ########################################################################

        information of subtraction function and start here   B - A = ?

    ########################################################################
*/

int subtruction2()
{
    input_value();
    input_value2();

    printf("\n\n  B - A = ?\n\n");
    printf("\n  Solve\n  ______\n");
    subtruct2();
}

int subtruct2()
{
    a = bx - ax;
    b = by - ay;
    c = bz - az;

    total = a + b + c;

    printf("\n\t B - A  =  ( ");

    show_B();
    printf(" ) - ( ");
    show_A();
    printf(" )");

    if(ax >= 0)
        printf("\n\n\t\t=  (%d - %d)i",bx, ax);
    else
        printf("\n\n\t\t=  (%d + %d)i", bx, -ax);

    if(ay >= 0)
        printf(" + (%d - %d)j", by, ay);
    else
        printf(" + (%d + %d)j", by, ay);


    if(az >= 0)
        printf(" + (%d - %d)k",bz, az);
    else
        printf(" + (%d + %d)k", bz, -az);

    printf("\n\n      .\n     . . B - A  =");
    for_cros();
}

/*
    ###########################################################################

        information of dotgunon function and start here    A . B = ?

    ###########################################################################
*/

int dotgunon()
{
    input_value();
    input_value2();

    printf("\n\n  A . B = ?\n\n");
    dot1();
}
/*
    #####################################
        A sub funtion for A.B
    #####################################
*/
int dot1()
{
    a = ax*bx;
    b = ay*by;
    c = az*bz;

    total = a+b+c;
    printf("\n   Solve\n  ______\n");
    printf("\n        A . B  =  ( ");

    show_A();
    printf(" ) . ( ");
    show_B();
    printf(" )");

    printf("\n\n\t       =  (%d * %d) + (%d * %d) + (%d * %d)", ax, bx, ay, by, az, bz);

    printf("\n\n\t       =  %d",a);

    if(b >= 0)
    	printf(" + %d",b);
    else
    {
        b = - b;
        printf(" - %d",b);
    }

    if(c >= 0)
    	printf(" + %d",c);
    else
    {
        c = - c;
        printf(" - %d",c);
    }

    if(total >= 0)
        {
            printf("\n\n    .\n   . .");
            printf("  A . B  =  %d",total);
        }
    else
        {
            printf("\n\n    .\n   . .");
            printf("  A . B  =  - %d",-total);
        }
}

/*
    ######################################################################

        information of dotgunon2 function and start here   B . A = ?

    ######################################################################
*/

int dotgunon2()
{
    input_value();
    input_value2();

    printf("\n\n  B . A = ?\n\n");
    a = ax*bx;
    b = ay*by;
    c = az*bz;

    total = a+b+c;
    printf("\n   Solve\n  _______\n");
    printf("\n\tB . A   =  ( ");

    show_B();
    printf(" ) . ( ");
    show_A();
    printf(" )");

    printf("\n\n\t\t=  (%d * %d) + (%d * %d) + (%d * %d)", bx, ax, by, ay, bz, az);
    printf("\n\n\t\t=  %d",a);

    if(b >= 0)
        printf(" + %d",b);
    else
    {
        b = - b;
        printf(" - %d",b);
    }

    if(c >= 0)
        printf(" + %d",c);
    else
    {
        c = - c;
        printf(" - %d",c);
    }

    if(total >= 0)
        {
            printf("\n\n    .\n   . .");
            printf("  B . A   =  - %d",total);
        }
    else
    {
        printf("\n\n    .\n   . .");
        printf("  B . A   =  - %d", -total);
    }
}

/*
    ##################################################################

        information of cross function and start here   A X B = ?

    ##################################################################
*/

int crosgunon()
{
    input_value();
    input_value2();

    printf("\n\n  A X B = ?\n\n");

    printf("\n  Solve\n  ______\n");
    printf("\n            |   i    j    k  | ");
    printf("\n  A X B  =  | ");

    show_A2();
    printf("  |");
    printf("\n            | ");

    show_B2();
    printf("  |");

    printf("\n\n         =  i * (%d * %d  -  %d * %d) + j * (%d * %d  -  %d * %d) \n\t    + k * (%d * %d  -  %d * %d)", ay, bz, by, az, bx, az, ax, bz, ax, by, bx, ay);
    printf("\n\n         =  i * (%d  -  %d) + j * (%d  -  %d) + k * (%d  -  %d)", ay*bz, by*az, bx*az, ax*bz, ax*by, bx*ay);

    a = ay * bz - by * az;
    b = bx * az - ax * bz;
    c = ax * by - bx * ay;

    printf("\n\n    .\n   . .");
    printf("  A X B  =");

    for_cros();
}

/*
    ####################################################################

        information of cross function and start here    B X A = ?

    ####################################################################
*/

int crosgunon2()
{
    input_value();
    input_value2();

    printf("\n\n  B X A = ?\n\n");

    printf("\n  Solve\n  ______\n");
    printf("\n            |   i    j    k  | ");
    printf("\n  B X A  =  | ");

    show_B2();
    printf("  |");
    printf("\n            | ");

    show_A2();
    printf("  |");

    printf("\n\n         =  i * (%d * %d  -  %d * %d) + j * (%d * %d  -  %d * %d) \n\t    + k * (%d * %d  -  %d * %d)", by, az, ay, bz, ax, bz, bx, az, bx, ay, ax, by);
    printf("\n\n         =  i * (%d  -  %d) + j * (%d  -  %d) + k * (%d  -  %d)", by*az, ay*bz, ax*bz, bx*az, bx*ay, ax*by);

    a = by * az - ay * bz;
    b = ax * bz - bx * az;
    c = bx * ay - ax * by;

    printf("\n\n    .\n   . .");
    printf("  B X A  =");

    for_cros();
}

/*
    #######################################################################

        information of cross function and start here   |  A X B  | = ?

    #######################################################################
*/

int mode_crosgunon()
{
    input_value();
    input_value2();

    printf("\n\n  | A X B | = ?\n\n");

    printf("\n  Solve\n  ______\n");
    printf("\n            |   i    j    k  | ");
    printf("\n  A X B  =  | ");

    show_A2();
    printf("  |");
    printf("\n            | ");

    show_B2();
    printf("  |");

    printf("\n\n         =  i * (%d * %d  -  %d * %d) + j * (%d * %d  -  %d * %d) \n\t    + k * (%d * %d  -  %d * %d)", ay, bz, by, az, bx, az, ax, bz, ax, by, bx, ay);
    printf("\n\n         =  i * (%d  -  %d) + j * (%d  -  %d) + k * (%d  -  %d)", ay*bz, by*az, bx*az, ax*bz, ax*by, bx*ay);

    a = ay * bz - by * az;
    b = bx * az - ax * bz;
    c = ax * by - bx * ay;

    printf("\n\n    .\n   . .");
    printf("  A X B  =");

    for_cros();

    printf("\n\n\t              __________________________");
    printf("\n\t| A X B | = \\/ (%d)^2 + (%d)^2 + (%d)^2", a, b, c);

    printf("\n\t              ________________");
    printf("\n\t          = \\/ %d + %d + %d", a*a, b*b, c*c);

    printf("\n\t              ______");
    printf("\n\t          = \\/ %d ", a*a + b*b + c*c);
    root = sqrt( a*a + b*b + c*c);

    printf("\n\n    .\n   . .");
    printf("  | A X B | = %.2f", root);

}

/*
    ######################################################################

        information of cross function and start here   | B X A | = ?

    ######################################################################
*/

int mode_crosgunon2()
{
    input_value();
    input_value2();

    printf("\n\n  | B X A | = ?\n\n");

    printf("\n  Solve\n  ______\n");
    printf("\n            |   i    j    k  | ");
    printf("\n  B X A  =  | ");

    show_B2();
    printf("  |");
    printf("\n            | ");

    show_A2();
    printf("  |");

    printf("\n\n         =  i * (%d * %d  -  %d * %d) + j * (%d * %d  -  %d * %d) \n\t    + k * (%d * %d  -  %d * %d)", by, az, ay, bz, ax, bz, bx, az, bx, ay, ax, by);
    printf("\n\n         =  i * (%d  -  %d) + j * (%d  -  %d) + k * (%d  -  %d)", by*az, ay*bz, ax*bz, bx*az, bx*ay, ax*by);

    a = by * az - ay * bz;
    b = ax * bz - bx * az;
    c = bx * ay - ax * by;

    printf("\n\n    .\n   . .");
    printf("  B X A  =");

    for_cros();

    printf("\n\n\t              __________________________");
    printf("\n\t| B X A | = \\/ (%d)^2 + (%d)^2 + (%d)^2", a, b, c);

    printf("\n\t              ________________");
    printf("\n\t          = \\/ %d + %d + %d", a*a, b*b, c*c);

    printf("\n\t              ______");
    printf("\n\t          = \\/ %d ", a*a + b*b + c*c);

    root = sqrt( a*a + b*b + c*c);

    printf("\n\n    .\n   . .");
    printf("  | B X A | = %.2f", root);
}

/*
    ############################################################

    information of mode function and start here   |  A  | =  ?

    ############################################################
*/
int mode_A()
{
    printf("\n  A = axi + ayj + azk\n");

    printf("\n\tax = ");
    scanf("%d",&ax);
    printf("\tay = ");
    scanf("%d",&ay);
    printf("\taz = ");
    scanf("%d",&az);


    system("cls");
    printf("\n  Question\n  ________\n");
    printf("\n\tA = ");
    show_A();

    printf("\n\n\t| A | = ?\n\n");
    printf("\n  Solve\n  ______\n");

    modeA();
    printf(" (Ans)\n");
}

/*
    #####################################
        A sub funtion for  mode A
    #####################################
*/
int modeA()
{
    printf("              _______________________");
    printf("\n  | A |  =  \\/ (%d)^2 + (%d)^2 + (%d)^2", ax, ay, az);

    printf("\n              _______________");
    printf("\n         =  \\/ %d + %d + %d", ax*ax, ay*ay, az*az);

    printf("\n              ______");
    printf("\n         =  \\/ %d ", ax*ax + ay*ay + az*az);
    root1 = sqrt( ax*ax + ay*ay + az*az);

    printf("\n\n    .\n   . .");
    printf("  | A | = %.2f", root1);
}


/*
    ############################################################

    information of mode function and start here   |  B  | = ?

    ############################################################
*/

int mode_B()
{
    printf("\n\tA = axi + ayj + azk\n");

    printf("\n\tbx = ");
    scanf("%d",&bx);
    printf("\tby = ");
    scanf("%d",&by);
    printf("\tbz = ");
    scanf("%d",&bz);


    system("cls");
    printf("\n  Question\n  ________\n");

    printf("\n\tB = ");
    show_A();

    printf("\n\n\t| B | = ?\n\n");
    modeB();

    printf(" (Ans)\n");
}

/*
    #####################################
        A sub funtion for  mode B
    #####################################
*/
int modeB()
{
    printf("              _______________________");
    printf("\n  | B |  =  \\/ (%d)^2 + (%d)^2 + (%d)^2", bx, by, bz);

    printf("\n              _______________");
    printf("\n         =  \\/ %d + %d + %d", bx*bx, by*by, bz*bz);

    printf("\n              ______");
    printf("\n         =  \\/ %d ", bx*bx + by*by + bz*bz);
    root2 = sqrt( bx*bx + by*by + bz*bz);

    printf("\n\n    .\n   . .");
    printf("  | B | = %.2f", root2);

}
/*
    #######################################################################

        information of cross function and start here   n or eeta =  ?

    #######################################################################
*/

int eeta()
{
    input_value();

    system("cls");
    printf("\n  Question\n  ________\n");
    printf("\n\tA = ");
    show_A();
    printf("\n\tB = ");
    show_B();

    printf("\n\n\t\t   A X B");
    printf("\n  n or eeta or  _________   = ?");
    printf("\n\t\t | A X B |\n");

    printf("\n   Solve\n  ______\n");
    printf("\n            |   i    j    k  | ");
    printf("\n  A X B  =  | ");

    show_A2();
    printf("  |");
    printf("\n            | ");

    show_B2();
    printf("  |");

    printf("\n\n         =  i * (%d * %d  -  %d * %d) + j * (%d * %d  -  %d * %d) \n\t    + k * (%d * %d  -  %d * %d)", ay, bz, by, az, bx, az, ax, bz, ax, by, bx, ay);
    printf("\n\n         =  i * (%d  -  %d) + j * (%d  -  %d) + k * (%d  -  %d)", ay*bz, by*az, bx*az, ax*bz, ax*by, bx*ay);

    a = ay * bz - by * az;
    b = bx * az - ax * bz;
    c = ax * by - bx * ay;

    printf("\n\n    .\n   . .");
    printf("  A X B  =");

    for_cros();

    printf("\n\n\t              __________________________");
    printf("\n\t| A X B | = \\/ (%d)^2 + (%d)^2 + (%d)^2", a, b, c);

    printf("\n\t              ________________");
    printf("\n\t          = \\/ %d + %d + %d", a*a, b*b, c*c);

    printf("\n\t              ______");
    printf("\n\t          = \\/ %d ", a*a + b*b + c*c);
    root = sqrt( a*a + b*b + c*c);

    printf("\n\n    .\n   . .");
    printf("  | A X B | = %.2f", root);

    printf("\n\n   .\t\t        A X B\t     ");
    for_cros();
    printf("\n  . . n or eeta or %c _________  =  %c _________________", 241, 241);
    printf("\n\t\t      | A X B |\t\t  %.2f", root);

    printf("\n\n\n\tBut every unit vector preceded by an \n\tplus minus operator, so don't avoid it.");
}

/*
    ##############################################

        a vectorer upor b vectorer ovikkhep

    ##############################################
*/

int ovikkhepa()
{
    input_value();

    system("cls");
    printf("\n  Question\n  _________\n");
    printf("\n\tA = ");
    show_A();
    printf("\n\tB = ");
    show_B();

    printf("\n\n\n  A vectorer upor B vectorer ovikkhep = ?\n\n");

    dot1();
    printf("\n\n");
    modeA();

    printf("\n\n\n    .\t\t      A . B\t     ");

    printf("\n   . .  Ovikkhep =  _________\n\t\t      | A |\n\n\t\t     ");

    if(total >= 0)
        {
            printf("  %d",total);
        }
    else
        {
            printf(" - d%",-total);
        }
    printf("\n\t\t =  ________\n\t\t      %.2f", root1);
    printf("\n\n\t\t =   %.2f",total/root1);
}

/*
    ##############################################

        B vectorer upor A vectorer ovikkhep

    ##############################################
*/

int ovikkhepb()
{
    input_value();

    system("cls");
    printf("\n  Question\n  _________\n");

    printf("\n\tA = ");
    show_A();
    printf("\n\tB = ");
    show_B();

    printf("\n\n\n  B vectorer upor A vectorer ovikkhep = ?\n\n");

    dot1();
    printf("\n\n");
    modeB();

    printf("\n\n\n    .\t\t      A . B\t     ");
    printf("\n   . .  Ovikkhep =  _________\n\t\t      | B |\n\n\t\t     ");

     if(total >= 0)
        {
            printf("  %d",total);
        }
    else
        {
            printf(" - d%",-total);
        }

    printf("\n\t\t =  ________\n\t\t      %.2f", root2);
    printf("\n\n\t\t =   %.2f",total/root2);
}

/*
    #######################################################################

        information of mode function and start here  | AB | = ?

    #######################################################################
*/
int modeAB()
{
    input_value();
    input_value2();

    printf("\n\n\t| AB | =  ?");
    printf("\n\n   solve\n  ______\n   ");
    subtruct2();

    printf("\n\n\n\t| AB | =  | B - A |");
    printf("\n\t             _________________________");
    printf("\n\t       =  \\/ (%d)^2 + (%d)^2 + (%d)^2", a, b, c);
    printf("\n\t             _______________");
    printf("\n\t       =  \\/ %d + %d + %d", a*a, b*b, c*c);
    printf("\n\t             _____");
    printf("\n\t       =  \\/ %d ", a*a + b*b + c*c);
    root = sqrt(a*a + b*b + c*c);
    printf("\n\n     .");
    printf("\n    . . | AB | =   %.2f ", root);
}

/*
    #######################################################################

        information of cos(x) and start here  x or cos(x) = ?

    #######################################################################
*/

int angle()
{
    input_value();
    system("cls");
    input_value2();
    printf("\n\n\tcos(x) or X  =  ? \n");
    dot1();
    printf("\n\n");
    modeA();
    printf("\n\n");
    modeB();

    printf("\n\n  Now, A . B = |A||B|cos(x) \t\t\t[Here x = angle or theata");
    printf("\n\n\t=> |A||B| cos(x) = A.B");
    printf("\n\t\t     A.B\n\t=> cos(x) = ________\n\t\t    |A||B|");
    printf("\n\t\t\t %d\n\t\t  = ____________\n\t\t     %.2f x %.2f", total, root1, root2);

    total2 = total / (root1*root2);
    theata = acos(total2)*180/3.14+.3;

    printf("\n       .\n      . . cos(x)  =  %.2f", total2);
    printf("\n\n\t  and  x = cos^-1(%.2f)", total2);
    printf("\n        .\n       . .   x  =  %.2f", theata);
}

void parallel()
{
    //int n;
    float ax,ay,az,bx,by,bz,a,b,c;
    system("cls");

 /*   printf("\n  1. A = mi + ayj + azk\n     B = bxi + byj + bzk");
    printf("\n\n  2. A = axi + mj + azk\n     B = bxi + byj + bzk");
    printf("\n\n  3. A = axi + ayj + mk\n     B = bxi + byj + bzk");
    printf("\n\n  4. A = axi + ayj + azk\n     B = mi + byj + bzk");
    printf("\n\n  5. A = axi + ayj + azk\n     B = bxi + mj + bzk");
    printf("\n\n  6. A = axi + ayj + azk\n     B = bxi + byj + mk");
*/

    printf("\n\n    1. ax = m ?\t\t\t13. ay = m ? & bx = m ?\n    2. ay = m ?\t\t\t14. ay = m ? & by = m ?\n    3. az = m ?\t\t\t15. ay = m ? & bz = m ?\n    4. bx = m ?\t\t\t16. az = m ? & bx = m ?\n    5. by = m ?\t\t\t17. az = m ? & by = m ?\n    6. bz = m ?\t\t\t18. az = m ? & bz = m ?");
    printf("\n\n\n    7. ax = m ? & ay = m ?\t19. bx = m ? & by = m ?\n    8. ax = m ? & az = m ?\t20. bx = m ? & bz = m ?\n    9. ax = m ? & bx = m ?\t21. by = m ? & bz = m ?\n   10. ax = m ? & by = m ?\n   11. ax = m ? & bz = m ?\t22. and more option = ?\n   12. ay = m ? & az = m ?");
    printf("\n\n\tSelect an option : ");
    scanf("%d",&n);

    system("cls");

    if(n == 1)
    {
        printf("\n\tay = ");
        scanf("%f",&ay);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);

        printf("\n\n\tIf the vector is parallel then we know that,\n");
        printf("\n\t\t ax       ay      az\n\t\t____  =  ____ = _____\n\t\t bx\t  by\t  bz");
        printf("\n\n\t\t  m       bx\n\t\t____  =  ____\n\t\t ay\t  by");
        printf("\n\n\t\t\t    bx\n\t\t=>  m  =  _____ x ay\n\t\t\t    by");
        printf("\n\n\t\t\t    %.f\n\t\t=>  m  =  _____ x %.f\n\t\t\t    %.f", bx, ay, by);

        ax = ay*bx/by;
        printf("\n\t  .\n\t . . m  = %.2f",ax);
    }

    if(n == 2)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);

        printf("\n\n\tIf the vector is parallel then we know that,\n");
        printf("\n\t\t ax       ay      az\n\t\t____  =  ____ = _____\n\t\t bx\t  by\t  bz");
        printf("\n\n\t\t  m       by\n\t\t____  =  ____\n\t\t ax\t  bx");
        printf("\n\n\t\t\t    by\n\t\t=>  m  =  _____ x ax\n\t\t\t    bx");
        printf("\n\n\t\t\t    %.f\n\t\t=>  m  =  _____ x %.f\n\t\t\t    %.f", by, ax, bx);

        ay = ax*by/bx;
        printf("\n\t  .\n\t . . m  = %.2f",ay);
    }

    if(n == 3 )
    {
        printf("\tax = ");
        scanf("%f",&ax);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tbz = ");
        scanf("%f",&bz);

        printf("\n\n\tIf the vector is parallel then we know that,\n");
        printf("\n\t\t ax       ay      az\n\t\t____  =  ____ = _____\n\t\t bx\t  by\t  bz");

        printf("\n\n\t\t  m       ax\n\t\t____  =  ____\n\t\t bz\t  bx");
        printf("\n\n\t\t\t    ax\n\t\t=>  m  =  _____ x bz\n\t\t\t    bx");
        printf("\n\n\t\t\t    %.f\n\t\t=>  m  =  _____ x %.f\n\t\t\t    %.f", ax, bz, bx);

        az = ax*bz/bx;
        printf("\n\t  .\n\t . . m  = %.2f",az);
    }

    if(n == 4)
    {
        printf("\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\tby = ");
        scanf("%f",&by);

        printf("\n\n\tIf the vector is parallel then we know that,\n");
        printf("\n\t\t ax       ay      az\n\t\t____  =  ____ = _____\n\t\t bx\t  by\t  bz");
        printf("\n\n\t       .    ax       ay\n\t      . .  ____  =  ____\n\t\t    bx\t    by");
        printf("\n\n\t\t    ax\t     ay\n\t\t=> ____  =  ____\n\t\t    bx\t     by");
        printf("\n\n\t\t    ax\t     ay\n\t\t=> ____  =  ____\n\t\t    m\t     by");
        printf("\n\n\t\t\t    by\n\t\t=>  m  =  _____ x ax\n\t\t\t    ay");
        printf("\n\n\t\t\t    %.f\n\t\t=>  m  =  _____ x %.f\n\t\t\t    %.f", by, ax, ay);

        bx = by*ax/ay;
        printf("\n\t  .\n\t . . m  = %.2f",bx);
    }

    if(n == 5)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\tbx = ");
        scanf("%f",&bx);

        by=(ay*bx)/ax;

        printf("\n\n\tValue of by of X = %.2f",by);
    }

    if(n == 6)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tbx = ");
        scanf("%f",&bx);

        bz=(az*bx)/ax;

        printf("\n\n\tValue of bz of X = %.2f",bz);
    }

}


perpendicular()
{
    system("cls");
    printf("\n\tA = axi + ayj + azk\n\tB = bxi + byj + bzk");

    printf("\n\n\t1. ax = ?\t4. bx = ?\n\t2. ay = ?\t5. by = ?\n\t3. az = ?\t6. bz = ?");
    printf("\n\n\tSelect an option : ");
    scanf("%d",&n);

    system("cls");
    printf("\n\tA = axi + ayj + azk\n\tB = bxi + byj + bzk\n\n");

    if( n == 1)
    {
        printf("\n\tay = ");
        scanf("%f",&ay);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);
        printf("\tbz = ");
        scanf("%f",&bz);

        ax=-((ay*by)+(az*bz))/bx;

        printf("\n\n\tValue of ax of X = %.2f",ax);
    }

    if(n==2)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);
        printf("\tbz = ");
        scanf("%f",&bz);

        ay=-((ax*bx)+(az*bz))/by;

        printf("\n\n\tValue of ay of X = %.2f",ay);
    }

    if(n == 3)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);
        printf("\tbz = ");
        scanf("%f",&bz);

        az = -((ax*bx)+(ay*by))/bz;

        printf("\n\n\tValue of az of X = %.2f",az);
    }

    if(n==4)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tby = ");
        scanf("%f",&by);
        printf("\tbz = ");
        scanf("%f",&bz);

        bx=-((ay*by)+(az*bz))/ax;
        printf("\n\n\tValue of bx of X = %.2f",bx);
    }

    if(n==5)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tbz = ");
        scanf("%f",&bz);

        by=-((ax*bx)+(az*bz))/ay;
        printf("\n\n\tValue of by of X = %.2f",by);
    }

    if(n==6)
    {
        printf("\n\tax = ");
        scanf("%f",&ax);
        printf("\tay = ");
        scanf("%f",&ay);
        printf("\taz = ");
        scanf("%f",&az);
        printf("\tbx = ");
        scanf("%f",&bx);
        printf("\tby = ");
        scanf("%f",&by);

        bz=-((ax*bx)+(ay*by))/az;
        printf("\n\n\tValue of bz of X = %.2f",bz);
    }
}

void design(int d, int n){
    while(n!=0) {
        if(d==222)
            printf("\xde");
        else if(d==223)
            printf("\xdf");
        else if(d==220)
            printf("\xdc");
        else if(d==176)
            printf("\xb0");
        else if(d==177)
            printf("\xb1");
        n--;
    }
}

void gotoxy (int x, int y) {
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
