#include <stdio.h>
#include <math.h>

int main(void) {
    // mật khâu tài khoản 12345
    //  confirmPassword phải giống tài khoản
    int confirmPassword;
    // for: from - to (chạy từ đâu đến đâu)
    do {
        printf("moi ban xac nhan mat khau");
        scanf("%d", &confirmPassword);
        if (confirmPassword != 12345) {
            printf("Mật khẩu xác nhận phải giống mật khẩu cũ, mời bạn nhập lại \n");
        }
    } while (confirmPassword != 12345);
    printf("%d", confirmPassword);
//    Array:
// 3 thuật toán tìm kiếm, sắp xếp (sorting: selection sort, bubble sort, insertion sort (khó)  searching -> binary search)

// Function: procedure - define
// Forverer - repeat until: do while - while
// repeat
// stop all ->  break, return ;
// Pointer (siêu siêu khó):
// [C, C++ có con trỏ] -> Java Javasript

    return 0;
}
