#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define true 1
#include "chucnang.h"
#include "menu.h"

int main()
{
    printf("\t\t\t\t      MOI BAN SU DUNG MAY TINH BO TUI!!!\n");
    printf("\t\t\t\t\tCHUNG TA CUNG BAT DAU NAO!!!\n");
    menu();
    TEST:
    while(true)
    {
        int chon;
        scanf("%d",&chon);
        if (chon==1)
        {
            system("cls");
            menuCoBan();
            while(true)
            {
                int chon1;
                scanf("%d",&chon1);
                if (chon1==1)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon thuc hien phep cong 2 so\n");
                    phepCong();
                    break;
                }
                else if (chon1==2)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon thuc hien phep tru 2 so\n");
                    phepTru();
                    break;
                }
                else if (chon1==3)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon thuc hien phep nhan 2 so\n");
                    phepNhan();
                    break;
                }
                else if (chon1==4)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon thuc hien phep chia 2 so\n");
                    phepChia();
                    break;
                }
                else if (chon1==5)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon thuc hien phep chia lay du 2 so\n");
                    phepChiaDu();
                    break;
                }
                else if (chon1==6)
                {
                    system("cls");
                    menu();
                    goto TEST;
                }
                else
                {
                    printf("\t\t\t\t\t Vui long chon tu 1 den 6: ");
                    continue;
                }
            }
            printf("\t\t\t\t\tBan co muon tiep tuc?(Bam y de tiep tuc): ");
            fflush(stdin);
            char tiep = getchar();
            if (tiep!='y' && tiep!='Y')
                break;
            system("cls");
            menu();
        }
        else if (chon==2)
        {
            system("cls");
            menuBoSung();
            //chon bo sung
            TEST1:
            while(true)
            {
                int chon1;
                scanf("%d",&chon1);
                if (chon1==1)
                {
                    system("cls");
                    menuLuongGiac();
                    //chon tinh cac ham luong giac
                    while(true)
                    {
                        int chon2;
                        scanf("%d",&chon2);
                        if (chon2==1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh sinx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\tsin(%f) = %.3lf\n",x,sin((x*PI)/180));
                            break;
                        }
                        else if (chon2==2)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh cosx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\tcos(%f) = %.3lf\n",x,cos((x*PI)/180));
                            break;
                        }
                        else if (chon2==3)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh tanx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\ttan(%f) = %.3lf\n",x,tan((x*PI)/180));
                            break;
                        }
                        else if (chon2==4)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh arcsinx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\tarcsin(%f) = %.3lf\n",x,asin((x*PI)/180));
                            break;
                        }
                        else if (chon2==5)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh arccosx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\tarccos(%f) = %.3lf\n",x,acos((x*PI)/180));
                            break;
                        }
                        else if (chon2==6)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon tinh arctanx\n");
                            printf("\t\t\t\t\tNhap x: ");
                            double x;
                            scanf("%lf",&x);
                            printf("\t\t\t\t\tarctan(%f) = %.3lf\n",x,atan((x*PI)/180));
                            break;
                        }
                        else if (chon2==7)
                        {
                            system("cls");
                            menuBoSung();
                            goto TEST1;
                        }
                        else
                        {
                            printf("\t\t\t\t\t Vui long chon tu 1 den 7: ");
                            continue;
                        }
                    }
                    break;
                }
                else if (chon1==2)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon tinh can bac n\n");
                    tinhCanBacCao();
                    break;
                }
                else if (chon1==3)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon tinh a^b\n");
                    hamMu();
                    break;
                }
                else if (chon1==4)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon tinh logarit\n");
                    tinhLoga();
                    break;
                }
                else if (chon1==5)
                {
                    system("cls");
                    menu();
                    goto TEST;
                }
                else
                {
                    printf("\t\t\t\t\t Vui long chon tu 1 den 5: ");
                    continue;
                }
            }
            printf("\t\t\t\t\tBan co muon tiep tuc?(Bam y de tiep tuc): ");
            fflush(stdin);
            char tiep = getchar();
            if (tiep!='y' && tiep!='Y')
                break;
            system("cls");
            menu();
        }
        else if (chon==3)
        {
            system("cls");
            menuGiaiPT();
            while(true)
            {
                int chon1;
                scanf("%d",&chon1);
                if (chon1==1)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon giai phuong trinh: ax+b=0\n");
                    phuongtrinhbac1();
                    break;
                }
                else if (chon1==2)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon giai phuong trinh: ax^2+bx+c=0\n");
                    phuongtrinhbac2();
                    break;
                }
                else if (chon1==3)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon giai phuong trinh: ax^3+bx^2+cx+d=0\n");
                    phuongtrinhbac3();
                    break;
                }
                else if (chon1==4)
                {
                    system("cls");
                    menu();
                    goto TEST;
                }
                else
                {
                    printf("\t\t\t\t\t Vui long chon tu 1 den 4: ");
                    continue;
                }
            }
            printf("\t\t\t\t\tBan co muon tiep tuc?(Bam y de tiep tuc): ");
            fflush(stdin);
            char tiep = getchar();
            if (tiep!='y' && tiep!='Y')
                break;
            system("cls");
            menu();
        }
        else if (chon==4)
        {
            system("cls");
            menuGiaiBatPT();
            TEST2:while(true)
            {
                int chonBac;
                scanf("%d",&chonBac);
                if (chonBac==1)
                {
                    system("cls");
                    menuGiaiBatPTBac1();
                    while(true)
                    {
                        int chonKieu;
                        scanf("%d",&chonKieu);
                        if (chonKieu==1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax+b>0\n");
                            batPhuongTrinhLonBac1();
                            break;
                        }
                        else if (chonKieu==2)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax+b>=0\n");
                            batPhuongTrinhLonBangBac1();
                            break;
                        }
                        else if (chonKieu==3)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax+b<0\n");
                            batPhuongTrinhNhoBac1();
                            break;
                        }
                        else if (chonKieu==4)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax+b<=0\n");
                            batPhuongTrinhNhoBangBac1();
                            break;
                        }
                        else if (chonKieu==5)
                        {
                            system("cls");
                            menuGiaiBatPT();
                            goto TEST2;
                        }
                        else
                        {
                            printf("\t\t\t\t\t Vui long chon tu 1 den 5: ");
                            continue;
                        }
                    }
                    break;
                }
                else if (chonBac==2)
                {
                    system("cls");
                    menuGiaiBatPTBac2();
                    while(true)
                    {
                        int chonKieu;
                        scanf("%d",&chonKieu);
                        if (chonKieu==1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>0\n");
                            batPhuongTrinhLonBac2();
                            break;
                        }
                        else if (chonKieu==2)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>=0\n");
                            batPhuongTrinhLonBangBac2();
                            break;
                        }
                        else if (chonKieu==3)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c<0\n");
                            batPhuongTrinhNhoBac2();
                            break;
                        }
                        else if (chonKieu==4)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c<=0\n");
                            batPhuongTrinhNhoBangBac2();
                            break;
                        }
                        else if (chonKieu==5)
                        {
                            system("cls");
                            menuGiaiBatPT();
                            goto TEST2;
                        }
                        else
                        {
                            printf("\t\t\t\t\t Vui long chon tu 1 den 5: ");
                            continue;
                        }
                    }
                    break;
                }
                else if (chonBac==3)
                {
                    system("cls");
                    menuGiaiBatPTBac3();
                    while(true)
                    {
                        int chonKieu;
                        scanf("%d",&chonKieu);
                        if (chonKieu==1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d>0\n");
                            batPhuongTrinhLonBac3();
                            break;
                        }
                        else if (chonKieu==2)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d>=0\n");
                            batPhuongTrinhLonBangBac3();
                            break;
                        }
                        else if (chonKieu==3)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d<0\n");
                            batPhuongTrinhNhoBac3();
                            break;
                        }
                        else if (chonKieu==4)
                        {
                            system("cls");
                            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d<=0\n");
                            batPhuongTrinhNhoBangBac3();
                            break;
                        }
                        else if (chonKieu==5)
                        {
                            system("cls");
                            menuGiaiBatPT();
                            goto TEST2;
                        }
                        else
                        {
                            printf("\t\t\t\t\t Vui long chon tu 1 den 5: ");
                            continue;
                        }
                    }
                    break;
                }
                else if (chonBac==4)
                {
                    system("cls");
                    menu();
                    goto TEST;
                }
                else
                {
                    printf("\t\t\t\t\t Vui long chon tu 1 den 4: ");
                    continue;
                }
            }
            printf("\t\t\t\t\tBan co muon tiep tuc?(Bam y de tiep tuc): ");
            fflush(stdin);
            char tiep = getchar();
            if (tiep!='y' && tiep!='Y')
                break;
            system("cls");
            menu();
        }
        else if (chon==5)
        {
            system("cls");
            menuGiaiHePT();
            while(true)
            {
                int chonAn;
                scanf("%d",&chonAn);
                if (chonAn==1)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon giai he phuong trinh bac nhat 2 an\n");
                    hePTBac12An();
                    break;
                }
                else if (chonAn==2)
                {
                    system("cls");
                    printf("\t\t\t\t\tBan da chon giai he phuong trinh bac nhat 3 an\n");
                    hePTBac13An();
                    break;
                }
                else if (chonAn==3)
                {
                    system("cls");
                    menu();
                    goto TEST;
                }
                else
                {
                    printf("\t\t\t\t\t Vui long chon tu 1 den 3: ");
                    continue;
                }
            }
            printf("\t\t\t\t\tBan co muon tiep tuc?(Bam y de tiep tuc): ");
            fflush(stdin);
            char tiep = getchar();
            if (tiep!='y' && tiep!='Y')
                break;
            system("cls");
            menu();
        }
        else if (chon==6)
        {
            return;
        }
        else
        {
            printf("\t\t\t\t\t Vui long chon tu 1 den 6: ");
            continue;
        }
    }

}



