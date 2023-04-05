//이중포인터 **x의 크기를 출력하는 프로그램

#include<stdio.h>
#include<stdlib.h>

void main() {

    int **x;

    printf("[----- [이찬희] [2019068057] -----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));  //x는 *x의 주소를 가지고 있고, 32비트 환경으로 컴파일 되어 4가 출력된다.
    printf("sizeof(*x) = %lu\n", sizeof(*x));  //*x는 **x의 주소를 가지고 있고, 32비트 환경으로 컴파일 되어 4가 출력된다.
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //**x는 int형 변수이므로 4가 출력된다. 만약 char **x였으면, 여기는 1이 출력될 것이다.
}