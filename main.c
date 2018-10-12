#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// dieu kien :
bool validatedata(int a, int b) {
    if (a <= 0 || b <= 0) {
        printf(" do dai canh cua tam giac phai lon hon 0!");
        return false;
    }
    return true;
}

//tinh canh huyen cua tam giac vuong:
float tinhchieudaicanhhuyen(int a, int b) {
    return (float) sqrt((a * a) + (b * b));
}

int main() {
    int a, b;
    printf("vui long nhap chieu dai canh thu nhat:\n");
    scanf("%d", &a);
    printf("vui long nhap chieu dai canh thu hight:\n");
    scanf("%d", &b);
    bool isvalidatedata = validatedata(a, b);
    if (isvalidatedata) {
        printf("chieu dai canh huyen cua tam giac vuong co hai canh goc vuong %d va %d la %.2f\n", a, b,tinhchieudaicanhhuyen(a,b));
    }
    return 0;
}