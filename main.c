#include <stdio.h>

int main(void) {

    float mathscore = 8;
    float physicspoints = 7;
    float Literaturescore = 5;
    int yearofbirth = 1999;
    unsigned long long int budget = 8000000000;
    float Vntousd = (float) budget / 26453.5f;
    float averagescore = (mathscore + physicspoints + Literaturescore) / 3;


      printf("diem toan: %.1f\n", mathscore);
      printf("diem ly: %.1f\n", physicspoints);
      printf("diem van: %.1f\n", Literaturescore);
      printf("nam sinh: %d\n", yearofbirth);
      printf("ngan sach: %llu\n", budget);
      printf("diem trung binh: %.1f\n", averagescore);
      printf("chuyen doi vn sang usd: %.1f\n", Vntousd);


    return 0;
}
