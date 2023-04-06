/* sum1, sum2, sum3 함수에 각각 다른 모양과 순서로 list[]배열과 MAX_SIZE를 인수로 넣어 결과를 출력한다.
각각의 sum 함수는 */

#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);  //배열과 정수형 변수를 인수로 갖는다
float sum2(float *list, int);  //배열의 주소와 변수를 인수로 갖는다
float sum3(int n, float *list);  //스택 변수 재활용 시험

float input[MAX_SIZE], answer;
int i;

void main(void) {

    //for문을 통해 i가 MAX_SIZE에 도달할 때까지 각 sum 함수들을 반복한다
    //sum함수들은 0부터 i 사이의 모든 정수를 더한 값을 출력하므로, 이 반복문을 통해 0+(0+1)+(0+1+2)+(0+1+2+3)+...(0+1+2+...+98+99)를 한 결과값을 출력한다
    for(i=0; i < MAX_SIZE; i++) {
    input[i] = i;

    printf("[----- [이찬희] [2019068057] -----]\n");

    printf("--------------------------------------\n");
    printf(" sum1(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);

    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum2(input, MAX_SIZE);
    printf("The sum is: %f\n\n", answer);
    
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum3(MAX_SIZE, input);
    printf("The sum is: %f\n\n", answer);
    }
}

//sum 함수는 모두 0+1+...+i까지 한 결과를 출력하는 함수이다
float sum1(float list[], int n) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++) {
        tempsum += list[i];
    }
    return tempsum;
}

float sum2(float *list, int n) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++) {
        tempsum += *(list +i); }
    return tempsum;
}

float sum3(int n, float *list) {
    printf("list\t= %p\n", list);
    printf("&list\t= %p\n\n", &list);
    int i;
    float tempsum = 0;
    for(i = 0;i < n;i++) {
        tempsum += *(list +i);}
    return tempsum;
}