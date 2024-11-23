#include <stdio.h>

/*
    Input: a,b,c (-3,4,5)
    -> a,b,c > 0 và a + b > c (tổng 2 cạnh cộng lại lớn hơn cạnh thứ 3)
    Output: Có/ không hợp lệ
 */
int main(void) {
    // Điều kiện trong if , else if -> không có dấu "": if ("number>0") là sai
    // Trong if else so sánh 2 vế dùng 2 dấu == ( = là phép gán)
    // Trong mệnh đề liệt kê: dấu "," là hoặc (||)
    // Mệnh đề else sẽ không có điều kiện gì nữa
    // Khi nhiều điều kiện:
    // + Điều kiện đầu là if
    // + Điều kiện giữa laf else if
    // + Điều kiện cuối cug là else
    // và: &&, hoặc: ||
    // break: thoát ngoặc nhọn {}
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 2 5 9
    // || với && :
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (b + c > a) && (a + c > b)) {
        printf("la 3 canh tam giac");
    } else {
        printf("ko phai 3 canh tam giac");
    }


    return 0;
}


//    scanf("%d", &number);
//    printf("%d", number);
//    else không có điều kiện ()


//    if (number >= 0) {
//        printf("so duong");
//    } else {
//        printf("so am");
//    }

//    char light;
//    scanf("%c", &light);
//    switch (light) {
//        case 'D':
//            printf("dung lai");
//            break;
//        case 'V':
//            printf("di cham");
//            break;
//        case 'X':
//            printf("di tiep");
//            break;
//        default:
//            printf("Bạn đã bị công an bắt");
//    }
//    int month;
//    scanf("%d", &month);
//    switch (month) {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31 day");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30 day");
//            break;
//        case 2:
//            printf("29 day");
//            break;
//        default:
//            printf("ko hop le");
// }
//int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < c && c < b) {
//        printf("nam giua a va b");
//    } else {
//        printf("ko nam giua a va b");
//    }

//    if (0 <= number && number < 50) {
//        printf("10 nghin dong");
//    } else if (50 <= number && number < 100) {
//        printf("15 nghin dong");
//    } else if (100 <= number && number < 150) {
//        printf("20 nghin dong");
//    } else if (150 <= number && number < 200) {
//        printf("25 nghin dong");
//    } else {
//        printf("30 nghin dong");
//    }

//    int number;
//    scanf("%d", &number);
//    if (number % 400 == 0 && number % 100 != 0 || number % 400 == 0) {
//        printf("nam nhuan");
//    } else {
//        printf("khong phai nam nhuan");
//    }