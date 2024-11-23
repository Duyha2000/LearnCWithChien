#include <stdio.h>

int B2(void) {
    // kiểu dữ liệu + tên biến = gía tri
    //   int : so nguyen -> %d
    //   double: so thap phan -> %.2f
    //   char: ky tu -> %c
// Nhập a và b, in ra giá trị tổng của a + b.
//    int a, b; // 2 biến cùng kiểu dữ liệu có thể khai báo trên 1 dòng
////    scanf("%d", &a);
////    scanf("%d", &b);
//    scanf("%d %d", &a, &b);
//
//    printf("%d %d", a, b);
//    double r, pi = 3.14;
//    scanf("%lf", &r);
//    printf("Chu vi = 2 * PI * R =  %f * %.2f \n ", 2 * pi * r, pi * r * r);
//    double r, pi = 3.14;
//    scanf("%lf", &r);
//    printf("%lf %lf", 2 * pi * r, pi * r * r);
//    double math, litterature, english, avg;
//    scanf("%lf %lf %lf ", &math, &litterature, &english);
//    avg = (math + litterature + english) / 3;
//    printf("%lf", math + litterature + english);
//    printf("%lf", (math + litterature + english) / 3);
//    printf("%lf", avg);
    char x = 't'; //
    return 0;
}

//    Bài 1: Xây dựng chương trình yêu cầu người dùng nhập tên, sau khi nhập thì chương trình sẽ in ra “xin chào (tên)”.
// Trong C có cac kieu du lieu gi:
// int * - long : đều là kieu số nguyên : 34383838383838383838382828282 (int sẽ lấy ít số hơn long)
// double * - float: là kiểu số thập phân: 1.444, 1.3333339292929292929199191 ( float sẽ lấy ít dữ liệu hơn double)
// char *: character (ký tự): 'a', 'b' , 'c', 'd' , 'e'
//    int a = 3; // in ra dùng %d
//    printf("%d \n", a);
////  double %f để in ra giá trị
//    double b = 5.544445;
//    printf("%f \n", b);
//// chỉ lấy 2 chữ số thập phân:
//    printf("%.2f \n", b);
//
//// char thì dùng %c

//    char c = 'c';
//    printf("%c ", c);
// operator

// khởi tạo biến cạnh hình vuông:
//    int edge = 4;
//    printf("%d \n", edge);
//    // khởi tạo bến chiều dài , rộng hình chữ nhật
//    int length = 6;
//    printf("%d \n", length);
//    int width = 3;
//    printf("%d \n", width);
////    tính chu vi, diện tích hình chữ nhật:
//    printf("Chu vi: %d \n", (length + width) * 2);
//    printf("Dien tich: %d \n", length * width);
//    // tính chu vi, diện tích hình tròn:
//    int R = 7;
//    double PI = 3.14;
// Chu vi: 2 * PI * R;
// Diê tích: PI * R * R;

//    printf("Chu vi: %f \n", 2 * PI * R);
//    printf("Dien tich: %f \n", PI * R * R);

// Cho 2 số a, b kiểu dữ liệu double. hiên thi a + b = {a+b}
// b đâu, double sao khai báo kiểu int
//    double a = 2.5;
//    double b = 3.7;
// "a + b = 6.2"
//    printf("%f + %f =  %f", a, b, a + b); // output: in ra ngoài màn hình

