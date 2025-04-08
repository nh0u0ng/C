/*Vi?t chuong trình th?c hi?n:

Nh?p hai s? nguyên a, b cách nhau b?i d?u cách th? hi?n tháng và nam
In ra s? ngày c?a tháng dó.*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < 1 || a > 12 || b <= 0) {
        printf("Du lieu sai.\n");
    } else {
        int ngay;
        switch (a) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                ngay = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                ngay = 30;
                break;
            case 2:
                if ((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0)) {
                    ngay = 29;
                } else {
                    ngay = 28;
                }
                break;
            default:
                printf("Du lieu sai.\n");
                return 0;
        }
        printf("Thang %d nam %d co %d ngay.\n", a, b, ngay);
    }

    return 0;
}
