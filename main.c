#include <stdio.h>

int main(void) {
    char name[50];
    char unisex[50];
    char dateofbirth[50];
    char maritalstatus[50];
    char hometown[50];
    float height;
    int age;
    float weight;
    unsigned int netassets;

// họ và tên
    printf("ho va ten: ");
    scanf("%s", &name);

// giới tính
    printf("gioi tinh: ");
    scanf("%s", &unisex);

//tuổi tác
    printf("tuoi tac: ");
    scanf("%d", &age);

//ngày thánh năm sinh
    printf("ngay thang nam sinh: ");
    scanf("%s", &dateofbirth);

// tình trạng hôn nhân
    printf("tinh trang hon nhan: ");
    scanf("%s", &maritalstatus);

//quê quán
    printf("que quan: ");
    scanf("%s", &hometown);

//chiều cao
    printf("chieu cao: ");
    scanf("%f", &height);

// cân nặng
    printf("can nang:");
    scanf("%f", &weight);

//tại sản ròng
    printf("tai san rong: ");
    scanf("%u", &netassets);


    printf("%s\n", name);
    printf("%s\n", unisex);
    printf("%s\n", dateofbirth);
    printf("%s\n", maritalstatus);
    printf("%.2f\n", height);
    printf("%.1f\n", weight);
    printf("%u\n", netassets);


    return 0;
}
