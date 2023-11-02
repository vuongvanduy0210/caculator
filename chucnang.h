#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
//chuc nang co ban
void phepCong();
void phepTru();
void phepNhan();
void phepChia();
void phepChiaDu();

//chuc nang bo sung
void tinhLuongGiac();
void tinhCanBacCao();
void tinhLoga();
void hamMu();

//chuc nang giai phuong trinh
void phuongtrinhbac1();
void phuongtrinhbac2();
void phuongtrinhbac3();

//chuc nang giai he pt
void hePTBac12An();
void hePTBac13An();

//chuc nang giai bat phuong trinh
void batPhuongTrinhLonBac1();
void batPhuongTrinhLonBac2();
void batPhuongTrinhLonBangBac1();
void batPhuongTrinhLonBangBac2();
void batPhuongTrinhNhoBac1();
void batPhuongTrinhNhoBac2();
void batPhuongTrinhNhoBangBac1();
void batPhuongTrinhNhoBangBac2();
void batPhuongTrinhLonBac3();
void batPhuongTrinhLonBangBac3();
void batPhuongTrinhNhoBac3();
void batPhuongTrinhNhoBangBac3();

void hePTBac12An()
{
    printf("\t\t\t\t\t| ax+by=e\n");
    printf("\t\t\t\t\t| cx+dy=f\n");
    double a,b,c,d,e,f;
    printf("\t\t\t\t\tNhap he so cua phuong trinh 1:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    printf("\t\t\t\t\te = ");
    scanf("%lf",&e);
    printf("\t\t\t\t\tNhap he so cua phuong trinh 2:\n");
    printf("\t\t\t\t\tc = ");
    scanf("%lf",&c);
    printf("\t\t\t\t\td = ");
    scanf("%lf",&d);
    printf("\t\t\t\t\tf = ");
    scanf("%lf",&f);
    double d1=a*d-b*c;
    double d2=a*f-c*e;
    double d3=b*f-d*e;
    if (d1==0)
    {
        if (d2==0 && d3==0)
            printf("\t\t\t\t\tHe phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tHe phuong trinh vo nghiem\n");
    }
    else
    {
        double x=(e-(b*f/d))/(a-b*c/d);
        double y=(f-c*x)/d;
        printf("\t\t\t\t\tHe phuong trinh co nghiem duy nhat\n");
        printf("\t\t\t\t\tx = %.10g\n",x);
        printf("\t\t\t\t\ty = %.10g\n",y);
    }
}

void hePTBac13An()
{
    printf("\t\t\t\t\t| a1x+b1y+c1z=d1\n");
    printf("\t\t\t\t\t| a2x+b2y+c2z=d2\n");
    printf("\t\t\t\t\t| a3x+b3y+c3z=d3\n");
    double a11, a12, a13, a21, a22, a23, a31, a32, a33, b1, b2, b3, x, y, z, d, dx, dy, dz;
    printf("\t\t\t\t\tNhap he so cua phuong trinh 1:\n");
    printf("\t\t\t\t\ta1 = ");
    scanf("%lf",&a11);
    printf("\t\t\t\t\tb1 = ");
    scanf("%lf",&a12);
    printf("\t\t\t\t\tc1 = ");
    scanf("%lf",&a13);
    printf("\t\t\t\t\td1 = ");
    scanf("%lf",&b1);
    printf("\t\t\t\t\tNhap he so cua phuong trinh 1:\n");
    printf("\t\t\t\t\ta2 = ");
    scanf("%lf",&a21);
    printf("\t\t\t\t\tb2 = ");
    scanf("%lf",&a22);
    printf("\t\t\t\t\tc2 = ");
    scanf("%lf",&a23);
    printf("\t\t\t\t\td2 = ");
    scanf("%lf",&b2);
    printf("\t\t\t\t\tNhap he so cua phuong trinh 1:\n");
    printf("\t\t\t\t\ta3 = ");
    scanf("%lf",&a31);
    printf("\t\t\t\t\tb3 = ");
    scanf("%lf",&a32);
    printf("\t\t\t\t\tc3 = ");
    scanf("%lf",&a33);
    printf("\t\t\t\t\td3 = ");
    scanf("%lf",&b3);
    d = a11*a22*a33 + a12*a23*a31 + a21*a32*a13 - a13*a22*a31 - a12*a21*a33 - a11*a32*a23;
    dx = b1*a22*a33 + a12*a23*b3 + b2*a32*a13 - a13*a22*b3 - a12*b2*a33 - a23*a32*b1;
    dy = a11*b2*a33 + b1*a23*a31 + a21*b3*a13 - a13*b2*a31 - b1*a21*a33 - a23*b3*a11;
    dz = a11*a22*b3 + a12*b2*a31 + a21*a32*b1 - b1*a22*a31 - a12*a21*b3 - b2*a32*a11;
    if (d == 0)
    {
        if ((dx == 0) && (dy == 0) && (dz == 0))
            printf("\t\t\t\t\tHe phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tHe phuong trinh vo nghiem\n");
    }
    else
    {
        printf("\t\t\t\t\tHe phuong trinh co nghiem duy nhat\n");
        printf("\t\t\t\t\tx = %.10g\n",dx/d);
        printf("\t\t\t\t\ty = %.10g\n",dy/d);
        printf("\t\t\t\t\tz = %.10g\n",dz/d);
    }
}

void batPhuongTrinhLonBac1() // ax+b>0
{
    double a,b;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    if (a!=0)
        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",-b/a);
    else
    {
        if (b>0)
            printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
    }
}

void batPhuongTrinhLonBangBac1() // ax+b>=0
{
    double a,b;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    if (a!=0)
        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",-b/a);
    else
    {
        if (b>=0)
            printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
    }
}

void batPhuongTrinhNhoBac1() // ax+b<0
{
    double a,b;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    if (a!=0)
        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",-b/a);
    else
    {
        if (b<0)
            printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
    }
}

void batPhuongTrinhNhoBangBac1() // ax+b<=0
{
    double a,b;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    if (a!=0)
        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",-b/a);
    else
    {
        if (b<=0)
            printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
    }
}

void batPhuongTrinhLonBac2() // ax^2+bx+c>0
{
    double a,b,c;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double dt = b*b - 4*a*c;
    if (dt>0)
    {
        double x1 = (-b-sqrt(dt))/(2*a);
        double x2 = (-b+sqrt(dt))/(2*a);
        double max = x1;
        if (x2>max)
            max = x2;
        if (a>0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g, x > %.10g\n",x1+x2-max,max);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.10g < x < %.10g\n",x1+x2-max,max);
    }
    else
    {
        if (dt<0)
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
            else
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
        }
        else
        {
            if (a>0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x # 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x # %.10g\n",-b/(2*a));
            }
            else
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
        }
    }

}

void batPhuongTrinhLonBangBac2() // ax^2+bx+c>=0
{
    double a,b,c;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double dt = b*b - 4*a*c;
    if (dt>0)
    {
        double x1 = (-b-sqrt(dt))/(2*a);
        double x2 = (-b+sqrt(dt))/(2*a);
        double max = x1;
        if (x2>max)
            max = x2;
        if (a>0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g, x >= %.10g\n",x1+x2-max,max);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.10g <= x <= %.10g\n",x1+x2-max,max);
    }
    else
    {
        if (dt<0)
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
            else
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
        }
        else
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x = 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x = %.10g\n",-b/(2*a));
            }
        }
    }

}

void batPhuongTrinhNhoBac2() // ax^2+bx+c<0
{
    double a,b,c;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double dt = b*b - 4*a*c;
    if (dt>0)
    {
        double x1 = (-b-sqrt(dt))/(2*a);
        double x2 = (-b+sqrt(dt))/(2*a);
        double max = x1;
        if (x2>max)
            max = x2;
        if (a<0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g, x > %.10g\n",x1+x2-max,max);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.10g < x < %.10g\n",x1+x2-max,max);
    }
    else
    {
        if (dt<0)
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
            else
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        }
        else
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x # 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x # %.10g\n",-b/(2*a));
            }
        }
    }

}

void batPhuongTrinhNhoBangBac2() // ax^2+bx+c<=0
{
    double a,b,c;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^2+bx+c>0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double dt = b*b - 4*a*c;
    if (dt>0)
    {
        double x1 = (-b-sqrt(dt))/(2*a);
        double x2 = (-b+sqrt(dt))/(2*a);
        double max = x1;
        if (x2>max)
            max = x2;
        if (a<0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g, x > %.10g\n",x1+x2-max,max);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.10g < x < %.10g\n",x1+x2-max,max);
    }
    else
    {
        if (dt<0)
        {
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh vo nghiem\n");
            else
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        }
        else
        {
            if (a>0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x = 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x = %.10g\n",-b/(2*a));
            }
            else
                printf("\t\t\t\t\tBat phuong trinh co vo so nghiem\n");
        }
    }

}

void phepCong()
{
    double a,b;
    printf("\t\t\t\t\tNhap 2 so muon thuc hien phep cong:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    printf("\t\t\t\t\t%.10g + %.10g = %.10g\n",a,b,a+b);
}

void phepTru()
{
    double a,b;
    printf("\t\t\t\t\tNhap 2 so muon thuc hien phep tru:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    printf("\t\t\t\t\t%.10g - %.10g = %.10g\n",a,b,a-b);
}

void phepNhan()
{
    double a,b;
    printf("\t\t\t\t\tNhap 2 so muon thuc hien phep nhan:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    printf("\t\t\t\t\t%.10g x %.10g = %.10g\n",a,b,a*b);
}

void phepChia()
{
    double a,b;
    printf("\t\t\t\t\tNhap 2 so muon thuc hien phep chia:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    printf("\t\t\t\t\t%.10g : %.10g = %.10g\n",a,b,a/b);
}

void phepChiaDu()
{
    printf("\t\t\t\t\tNhap 2 so muon thu hien phep chia lay du:\n");
    long a,b;
    printf("\t\t\t\t\ta = ");
    scanf("%ld",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%ld",&b);
    printf("\t\t\t\t\t%d %% %d = %d\n",a,b,a%b);
}

void hamMu()
{
    double x,y;
    printf("\t\t\t\t\tNhap doi so : ");
    scanf("%lf",&x);
    printf("\t\t\t\t\tNhap he so mu : ");
    scanf("%lf",&y);
    printf("\t\t\t\t\t%.10g^%.10g = %.10g\n",x,y,pow(x,y));
}

void tinhLoga()
{
    double x,y;
    printf("\t\t\t\t\tNhap doi so : ");
    scanf("%lf",&x);
    printf("\t\t\t\t\tNhap co so : ");
    scanf("%lf",&y);
    printf("\t\t\t\t\tlog(%.10g)%.10g = %.10g\n",y,x,log(x)/log(y));
}

void tinhCanBacCao()
{
    double x,y;
    printf("\t\t\t\t\tNhap doi so : ");
    scanf("%lf",&x);
    printf("\t\t\t\t\tNhap can bac : ");
    scanf("%lf",&y);
    printf("\t\t\t\t\tcan bac %.10g cua %.10g la: %.10g\n",y,x,pow(x,1/y));
}

void phuongtrinhbac1()
{
    double a,b;
    printf("\t\t\t\t\tNhap he so cua phuong trinh:\n");
    printf("\t\t\t\t\ta = ");
    scanf("%lf",&a);
    printf("\t\t\t\t\tb = ");
    scanf("%lf",&b);
    if (a==0)
    {
        if (b==0)
            printf("\t\t\t\t\tPhuong trinh co vo so nghiem\n");
        else
            printf("\t\t\t\t\tPhuong trinh vo nghiem\n");
    }
    else
    {
        printf("\t\t\t\t\tPhuong trinh co nghiem duy nhat\n");
        if (b==0)
            printf("\t\t\t\t\tx = 0\n");
        else
            printf("\t\t\t\t\tx = %.10g\n",-b/a);
    }

}

void phuongtrinhbac2()
{
    double a,b,c;
    printf("\t\t\t\t\tNhap he so cua phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai phuong trinh: ax^2+bx+c=0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=pow(b, 2)-4*a*c;

    if (delta>0)
    {
        printf("\t\t\t\t\tPhuong trinh co 2 nghiem phan biet\n");
        printf("\t\t\t\t\tx1 = %.10g\n",(-b-sqrt(delta))/(2*a));
        printf("\t\t\t\t\tx2 = %.10g\n",(-b+sqrt(delta))/(2*a));
    }
    else
    {
        if (delta==0)
        {
            printf("\t\t\t\t\tPhuong trinh co nghiem kep\n");
            if (b==0)
                printf("\t\t\t\t\tx1 = x2 = 0\n");
            else
                printf("\t\t\t\t\tx1 = x2 = %.10g\n",-b/(2*a));
        }
        else
            printf("\t\t\t\t\tPhuong trinh vo nghiem\n");
    }

}

double rd(double x)
{
    double x1 = x;
    x1*=100000000;
    x1=round(x);
    x1/=100000000.0;
    return x1;
}

double absf(double a)
{
    if (a<0)
        return -a;
    return a;
}

void phuongtrinhbac3()
{
    double a,b,c,d;
    printf("\t\t\t\t\tNhap he so cua phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        printf("\t\t\t\t\td = ");
        scanf("%lf",&d);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai phuong trinh: ax^3+bx^2+cx+d=0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=b*b-3*a*c;
    double k=(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(pow(absf(delta),3)));
    if(delta>0)
    {
        if(absf(k)<=1)
        {
            double x1,x2,x3;
            x1 = (2*sqrt(delta)*cos((acos(k)/3)) - b)/ (3*a);
            x2 = (2*sqrt(delta)*cos((acos(k)/3 - (2*PI/3))) - b)/(3*a);
            x3 = (2*sqrt(delta)*cos((acos(k)/3 + (2*PI/3))) - b)/(3*a);


            if (rd(x1)==rd(x2) && rd(x1)!=rd(x3))
            {
                printf("\t\t\t\t\tPhuong trinh co 1 nghiem don va 1 nghiem kep\n");
                printf("\t\t\t\t\tx1 = x2 = %.10g\n",x1);
                printf("\t\t\t\t\tx3 = %.10g\n",x3);
            }
            else if (rd(x1)==rd(x3) && rd(x1)!=rd(x2))
            {
                printf("\t\t\t\t\tPhuong trinh co 1 nghiem don va 1 nghiem kep\n");
                printf("\t\t\t\t\tx1 = x2 = %.10g\n",x1);
                printf("\t\t\t\t\tx3 = %.10g\n",x2);
            }
            else if (rd(x2)==rd(x3) && rd(x2)!=rd(x1))
            {
                printf("\t\t\t\t\tPhuong trinh co 1 nghiem don va 1 nghiem kep\n");
                printf("\t\t\t\t\tx1 = x2 = %.10g\n",x2);
                printf("\t\t\t\t\tx3 = %.10g\n",x1);
            }
            else
                printf("\t\t\t\t\tPhuong trinh co 3 ngiem phan biet\n\t\t\t\t\tx1 = %.10g\n\t\t\t\t\tx2 = %.10g\n\t\t\t\t\tx3 = %.10g\n",x1,x2,x3);

        }
        else
        {
            double x0 = ((sqrt(delta)*absf(k))/(3*a*k))*(cbrt(absf(k) + sqrt(pow(k,2) - 1)) + cbrt(absf(k) - sqrt(pow(k,2) - 1))) - (b/(3*a));
            printf("\t\t\t\t\tPhuong trinh co mot nghiem duy nhat\n\t\t\t\t\tx = %.10g\n", x0);
        }
    }


    if(delta==0)
    {
        double dt = b*b*b - 27*a*a*d;
        if (dt==0)
        {
            printf("\t\t\t\t\tPhuong trinh co mot nghiem boi\n");
            if (b==0)
                printf("\t\t\t\t\tx = 0\n");
            else
                printf("\t\t\t\t\tx = %.10g\n",-b/(3*a));
        }
        else
        {
            double x = (-b + cbrt(pow(b,3) - 27*pow(a,2)*d))/(3*b);
            printf("\t\t\t\t\tPhuong trinh co mot nghiem duy nhat\n\t\t\t\t\tx = %.10g\n", x);
        }
    }
    if(delta<0)
    {

        double x = (sqrt(absf(delta))/(3*a))*(cbrt(k + sqrt(k*k + 1)) + cbrt(k - sqrt(k*k + 1))) - (b/(3*a));
        printf("\t\t\t\t\tPhuong trinh co mot nghiem duy nhat\n\t\t\t\t\tx = %.10g\n", x);
    }
}

double timMax(double x1, double x2, double x3)
{
    double max = x1;
    if (x2>max)
        max = x2;
    if (x3>max)
        max = x3;
    return max;
}

double timMin(double x1, double x2, double x3)
{
    double min = x1;
    if (x2<min)
        min = x2;
    if (x3<min)
        min = x3;
    return min;
}

void batPhuongTrinhLonBac3()
{
    double a,b,c,d;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        printf("\t\t\t\t\td = ");
        scanf("%lf",&d);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d>0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=b*b-3*a*c;
    double k=(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(pow(absf(delta),3)));
    if(delta>0)
    {
        if(absf(k)<=1)
        {
            double x1,x2,x3;
            x1 = (2*sqrt(delta)*cos((acos(k)/3)) - b)/ (3*a);
            x2 = (2*sqrt(delta)*cos((acos(k)/3 - (2*PI/3))) - b)/(3*a);
            x3 = (2*sqrt(delta)*cos((acos(k)/3 + (2*PI/3))) - b)/(3*a);
            if (rd(x1)==rd(x2) && rd(x1)!=rd(x3))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                double x0 = max+1;
                if (a>0)
                {
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                }
                else
                {
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                }
            }
            else if (rd(x1)==rd(x3) && rd(x1)!=rd(x2))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                double x0 = max+1;
                if (a>0)
                {
                    if (min==x2)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                    if (min==x1)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                }
                else
                {
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                }
            }
            else if (rd(x2)==rd(x3) && rd(x2)!=rd(x1))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                    if (min==x2)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                }
                else
                {
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                }
            }
            else
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g < x < %.9g, x > %.9g\n",min,x1+x2+x3-min-max,max);
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g < x < %.9g, x < %.9g\n",x1+x2+x3-min-max,max,min);
            }

        }
        else
        {
            double x0 = ((sqrt(delta)*absf(k))/(3*a*k))*(cbrt(absf(k) + sqrt(pow(k,2) - 1)) + cbrt(absf(k) - sqrt(pow(k,2) - 1))) - (b/(3*a));
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x0);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x0);
        }
    }


    if(delta==0)
    {
        double dt = b*b*b - 27*a*a*d;
        if (dt==0)
        {
            if (a>0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",-b/(3*a));
            }
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",-b/(3*a));
            }
        }
        else
        {
            double x = (-b + cbrt(pow(b,3) - 27*pow(a,2)*d))/(3*b);
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x);
        }
    }
    if(delta<0)
    {

        double x = (sqrt(absf(delta))/(3*a))*(cbrt(k + sqrt(k*k + 1)) + cbrt(k - sqrt(k*k + 1))) - (b/(3*a));
        if (a>0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x);
    }
}

void batPhuongTrinhLonBangBac3()
{
    double a,b,c,d;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        printf("\t\t\t\t\td = ");
        scanf("%lf",&d);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d>=0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=b*b-3*a*c;
    double k=(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(pow(absf(delta),3)));
    if(delta>0)
    {
        if(absf(k)<=1)
        {
            double x1,x2,x3;
            x1 = (2*sqrt(delta)*cos((acos(k)/3)) - b)/ (3*a);
            x2 = (2*sqrt(delta)*cos((acos(k)/3 - (2*PI/3))) - b)/(3*a);
            x3 = (2*sqrt(delta)*cos((acos(k)/3 + (2*PI/3))) - b)/(3*a);
            if (rd(x1)==rd(x2) && rd(x1)!=rd(x3))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                double x0 = max+1;
                if (a>0)
                {
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                }
                else
                {
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                }
            }
            else if (rd(x1)==rd(x3) && rd(x1)!=rd(x2))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                double x0 = max+1;
                if (a>0)
                {
                    if (min==x2)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                    if (min==x1)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                }
                else
                {
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                }
            }
            else if (rd(x2)==rd(x3) && rd(x2)!=rd(x1))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                    if (min==x2)
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                }
                else
                {
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                }
            }
            else
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g <= x <= %.9g, x >= %.9g\n",min,x1+x2+x3-min-max,max);
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g <= x <= %.9g, x <= %.9g\n",x1+x2+x3-min-max,max,min);
            }

        }
        else
        {
            double x0 = ((sqrt(delta)*absf(k))/(3*a*k))*(cbrt(absf(k) + sqrt(pow(k,2) - 1)) + cbrt(absf(k) - sqrt(pow(k,2) - 1))) - (b/(3*a));
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x0);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x0);
        }
    }


    if(delta==0)
    {
        double dt = b*b*b - 27*a*a*d;
        if (dt==0)
        {
            if (a>0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",-b/(3*a));
            }
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",-b/(3*a));
            }
        }
        else
        {
            double x = (-b + cbrt(pow(b,3) - 27*pow(a,2)*d))/(3*b);
            if (a>0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x);
        }
    }
    if(delta<0)
    {

        double x = (sqrt(absf(delta))/(3*a))*(cbrt(k + sqrt(k*k + 1)) + cbrt(k - sqrt(k*k + 1))) - (b/(3*a));
        if (a>0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x);
    }
}

void batPhuongTrinhNhoBac3()
{
    double a,b,c,d;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        printf("\t\t\t\t\td = ");
        scanf("%lf",&d);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d<0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=b*b-3*a*c;
    double k=(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(pow(absf(delta),3)));
    if(delta>0)
    {
        if(absf(k)<=1)
        {
            double x1,x2,x3;
            x1 = (2*sqrt(delta)*cos((acos(k)/3)) - b)/ (3*a);
            x2 = (2*sqrt(delta)*cos((acos(k)/3 - (2*PI/3))) - b)/(3*a);
            x3 = (2*sqrt(delta)*cos((acos(k)/3 + (2*PI/3))) - b)/(3*a);
            if (rd(x1)==rd(x2) && rd(x1)!=rd(x3))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                }
                else
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                }
            }
            else if (rd(x1)==rd(x3) && rd(x1)!=rd(x2))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                }
                else
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                }
            }
            else if (rd(x2)==rd(x3) && rd(x2)!=rd(x1))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g, x # %.9g\n",max,min);
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.9g\n",min);
                }
                else
                {
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g\n",max);
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.9g, x # %.9g\n",min,max);
                }
            }
            else
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a<0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g < x < %.9g, x > %.9g\n",min,x1+x2+x3-min-max,max);
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g < x < %.9g, x < %.9g\n",x1+x2+x3-min-max,max,min);
            }

        }
        else
        {
            double x0 = ((sqrt(delta)*absf(k))/(3*a*k))*(cbrt(absf(k) + sqrt(pow(k,2) - 1)) + cbrt(absf(k) - sqrt(pow(k,2) - 1))) - (b/(3*a));
            if (a<0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x0);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x0);
        }
    }


    if(delta==0)
    {
        double dt = b*b*b - 27*a*a*d;
        if (dt==0)
        {
            if (a<0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",-b/(3*a));
            }
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",-b/(3*a));
            }
        }
        else
        {
            double x = (-b + cbrt(pow(b,3) - 27*pow(a,2)*d))/(3*b);
            if (a<0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x);
        }
    }
    if(delta<0)
    {

        double x = (sqrt(absf(delta))/(3*a))*(cbrt(k + sqrt(k*k + 1)) + cbrt(k - sqrt(k*k + 1))) - (b/(3*a));
        if (a<0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x > %.10g\n",x);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x < %.10g\n",x);
    }
}

void batPhuongTrinhNhoBangBac3()
{
    double a,b,c,d;
    printf("\t\t\t\t\tNhap he so cua bat phuong trinh:\n");
A:
    while(true)
    {
        printf("\t\t\t\t\ta = ");
        scanf("%lf",&a);
        printf("\t\t\t\t\tb = ");
        scanf("%lf",&b);
        printf("\t\t\t\t\tc = ");
        scanf("%lf",&c);
        printf("\t\t\t\t\td = ");
        scanf("%lf",&d);
        if (a==0)
        {
            system("cls");
            printf("\t\t\t\t\tBan da chon giai bat phuong trinh: ax^3+bx^2+cx+d<=0\n");
            printf("\t\t\t\t\tHe so khong hop le!(a # 0)\n\t\t\t\t\tVui long nhap lai he so:\n");
            goto A;
        }
        else
            break;
    }
    double delta=b*b-3*a*c;
    double k=(9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(pow(absf(delta),3)));
    if(delta>0)
    {
        if(absf(k)<=1)
        {
            double x1,x2,x3;
            x1 = (2*sqrt(delta)*cos((acos(k)/3)) - b)/ (3*a);
            x2 = (2*sqrt(delta)*cos((acos(k)/3 - (2*PI/3))) - b)/(3*a);
            x3 = (2*sqrt(delta)*cos((acos(k)/3 + (2*PI/3))) - b)/(3*a);
            if (rd(x1)==rd(x2) && rd(x1)!=rd(x3))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                }
                else
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                    if (min==x3) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                }
            }
            else if (rd(x1)==rd(x3) && rd(x1)!=rd(x2))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                }
                else
                {
                    if (min==x1) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                    if (min==x2) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                }
            }
            else if (rd(x2)==rd(x3) && rd(x2)!=rd(x1))
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a>0)
                {
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",max);
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.9g\n",min);
                }
                else
                {
                    if (min==x2) // kep
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",max);
                    if (min==x1) // don
                        printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.9g\n",min);
                }
            }
            else
            {
                double max = timMax(x1,x2,x3);
                double min = timMin(x1,x2,x3);
                if (a<0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g <= x <= %.9g, x >= %.9g\n",min,x1+x2+x3-min-max,max);
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: %.9g <= x <= %.9g, x <= %.9g\n",x1+x2+x3-min-max,max,min);
            }

        }
        else
        {
            double x0 = ((sqrt(delta)*absf(k))/(3*a*k))*(cbrt(absf(k) + sqrt(pow(k,2) - 1)) + cbrt(absf(k) - sqrt(pow(k,2) - 1))) - (b/(3*a));
            if (a<0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x0);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x0);
        }
    }


    if(delta==0)
    {
        double dt = b*b*b - 27*a*a*d;
        if (dt==0)
        {
            if (a<0)
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",-b/(3*a));
            }
            else
            {
                if (b==0)
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= 0\n");
                else
                    printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",-b/(3*a));
            }
        }
        else
        {
            double x = (-b + cbrt(pow(b,3) - 27*pow(a,2)*d))/(3*b);
            if (a<0)
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x);
            else
                printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x);
        }
    }
    if(delta<0)
    {

        double x = (sqrt(absf(delta))/(3*a))*(cbrt(k + sqrt(k*k + 1)) + cbrt(k - sqrt(k*k + 1))) - (b/(3*a));
        if (a<0)
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x >= %.10g\n",x);
        else
            printf("\t\t\t\t\tBat phuong trinh co nghiem la: x <= %.10g\n",x);
    }
}
