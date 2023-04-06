/* sum1, sum2, sum3 �Լ��� ���� �ٸ� ���� ������ list[]�迭�� MAX_SIZE�� �μ��� �־� ����� ����Ѵ�.
������ sum �Լ��� */

#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int);  //�迭�� ������ ������ �μ��� ���´�
float sum2(float *list, int);  //�迭�� �ּҿ� ������ �μ��� ���´�
float sum3(int n, float *list);  //���� ���� ��Ȱ�� ����

float input[MAX_SIZE], answer;
int i;

void main(void) {

    //for���� ���� i�� MAX_SIZE�� ������ ������ �� sum �Լ����� �ݺ��Ѵ�
    //sum�Լ����� 0���� i ������ ��� ������ ���� ���� ����ϹǷ�, �� �ݺ����� ���� 0+(0+1)+(0+1+2)+(0+1+2+3)+...(0+1+2+...+98+99)�� �� ������� ����Ѵ�
    for(i=0; i < MAX_SIZE; i++) {
    input[i] = i;

    printf("[----- [������] [2019068057] -----]\n");

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

//sum �Լ��� ��� 0+1+...+i���� �� ����� ����ϴ� �Լ��̴�
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