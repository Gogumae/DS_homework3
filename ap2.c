#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5];  //배열과 포인터 배열 선언

    list[0] = 10;
    list[1] = 11;  //배열에 값 입력
    plist[0] = (int*)malloc(sizeof(int));  //동적 메모리 할당

    printf("[----- [이찬희] [2019068057] -----]\n");

    printf("list[0] \t= %d\n", list[0]);  //list[0]에 있는 값
    printf("list \t\t= %p\n", list);  //배열의 이름은 포인터처럼 사용 가능. 배열의 시작 주소
    printf("&list[0] \t= %p\n", &list[0]);  //list[0] 첫번째 칸의 주소
    printf("list + 0 \t= %p\n", list+0);  //배열 시작점의 주소
    printf("list + 1 \t= %p\n", list+1);
    printf("list + 2 \t= %p\n", list+2);
    printf("list + 3 \t= %p\n", list+3);
    printf("list + 4 \t= %p\n", list+4);  //배열 이름에 +n을 하여 출력하면 n번째 칸의 주소가 출력된다. 배열의 자료형*n만큼 늘어난다.
    printf("&list[4] \t= %p\n", &list[4]);  //list[4]의 주소

    free(plist[0]);
}