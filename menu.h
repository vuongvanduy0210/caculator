#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Phep tinh co ban       |\n");
    printf("\t\t\t\t\t| 2.Phep tinh bo sung      |\n");
    printf("\t\t\t\t\t| 3.Giai phuong trinh      |\n");
    printf("\t\t\t\t\t| 4.Giai bat phuong trinh  |\n");
    printf("\t\t\t\t\t| 5.Giai he phuong trinh   |\n");
    printf("\t\t\t\t\t| 6.Exit                   |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 6: ");
}

void menuCoBan()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Phep cong              |\n");
    printf("\t\t\t\t\t| 2.Phep tru               |\n");
    printf("\t\t\t\t\t| 3.Phep nhan              |\n");
    printf("\t\t\t\t\t| 4.Phep chia nguyen       |\n");
    printf("\t\t\t\t\t| 5.Phep chia lay du       |\n");
    printf("\t\t\t\t\t| 6.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 6: ");

}

void menuLuongGiac()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Sin(x)?                |\n");
    printf("\t\t\t\t\t| 2.Cos(x)?                |\n");
    printf("\t\t\t\t\t| 3.tan(x)?                |\n");
    printf("\t\t\t\t\t| 4.arcsin(x)?             |\n");
    printf("\t\t\t\t\t| 5.arccos(x)?             |\n");
    printf("\t\t\t\t\t| 6.arctan(x)?             |\n");
    printf("\t\t\t\t\t| 7.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 7: ");
}

void menuBoSung()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Luong giac co ban      |\n");
    printf("\t\t\t\t\t| 2.Can bac n              |\n");
    printf("\t\t\t\t\t| 3.a^b                    |\n");
    printf("\t\t\t\t\t| 4.Logarit                |\n");
    printf("\t\t\t\t\t| 5.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 5: ");
}

void menuGiaiPT()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Phuong trinh bac 1     |\n");
    printf("\t\t\t\t\t| 2.Phuong trinh bac 2     |\n");
    printf("\t\t\t\t\t| 3.Phuong trinh bac 3     |\n");
    printf("\t\t\t\t\t| 4.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 4: ");
}

void menuGiaiBatPT()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.Bat phuong trinh bac 1 |\n");
    printf("\t\t\t\t\t| 2.Bat phuong trinh bac 2 |\n");
    printf("\t\t\t\t\t| 3.Bat phuong trinh bac 3 |\n");
    printf("\t\t\t\t\t| 4.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 4: ");
}

void menuGiaiBatPTBac1()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.ax+b>0                 |\n");
    printf("\t\t\t\t\t| 2.ax+b>=0                |\n");
    printf("\t\t\t\t\t| 3.ax+b<0                 |\n");
    printf("\t\t\t\t\t| 4.ax+b<=0                |\n");
    printf("\t\t\t\t\t| 5.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 5: ");
}

void menuGiaiBatPTBac2()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.ax^2+bx+c>0            |\n");
    printf("\t\t\t\t\t| 2.ax^2+bx+c>=0           |\n");
    printf("\t\t\t\t\t| 3.ax^2+bx+c<0            |\n");
    printf("\t\t\t\t\t| 4.ax^2+bx+c<=0           |\n");
    printf("\t\t\t\t\t| 5.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 5: ");
}

void menuGiaiBatPTBac3()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.ax^3+bx^2+cx+d>0       |\n");
    printf("\t\t\t\t\t| 2.ax^3+bx^2+cx+d>=0      |\n");
    printf("\t\t\t\t\t| 3.ax^3+bx^2+cx+d<0       |\n");
    printf("\t\t\t\t\t| 4.ax^3+bx^2+cx+d<=0      |\n");
    printf("\t\t\t\t\t| 5.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 5: ");
}

void menuGiaiHePT()
{
    printf("\t\t\t\t\t----------------------------\n");
    printf("\t\t\t\t\t| 1.He phuong trinh bac    |\n");
    printf("\t\t\t\t\t|   nhat 2 an              |\n");
    printf("\t\t\t\t\t| 2.He phuong trinh bac    |\n");
    printf("\t\t\t\t\t|   nhat 3 an              |\n");
    printf("\t\t\t\t\t| 3.Quay lai               |\n");
    printf("\t\t\t\t\t----------------------------\n\n");
    printf("\t\t\t\t\t Moi ban chon tu 1 den 3: ");
}






