#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5] = {NULL};  //배열과 포인터 배열 선언

    plist[0] = (int *)malloc(sizeof(int));  //포인터 배열에 동적 메모리 할당

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;  //배열과 포인터 배열에 값 대입

    printf("[----- [이찬희] [2019068057] -----]\n");

    printf("list[0] = %d\n", list[0]);  //list[0]의 값
    printf("&list[0] = %p\n", &list[0]);  //list[0]의 주소
    printf("list = %p\n", list);  //배열의 이름은 포인터처럼 사용... 배열의 시작 주소
    printf("&list = %p\n", &list);  //배열의 시작 주소
    printf("----------------------------------------\n\n");

    printf("list[1] = %d\n", list[1]);  //list[1]의 값
    printf("&list[1] = %p\n", &list[1]);  //list[1]의 주소
    printf("*(list+1) = %d\n", *(list + 1));  //list배열 시작점 다음 칸의 주소에 있는 값
    printf("list+1 = %p\n", list+1);  //list배열 시작점 다음 칸의 주소
    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]);  //plist[0]가 가리키는 주소에 있는 값
    printf("&plist[0] = %p\n", &plist[0]);  //plist[0]의 주소
    printf("&plist = %p\n", &plist);  //plist배열 시작 주소
    printf("plist = %p\n", plist);  //plist배열 시작 주소
    printf("plist[0] = %p\n", plist[0]);  //plist[0]의 값. 200이 들어있을 주소가 들어있음
    printf("plist[1] = %p\n", plist[1]); 
    printf("plist[2] = %p\n", plist[2]); 
    printf("plist[3] = %p\n", plist[3]); 
    printf("plist[4] = %p\n", plist[4]);  //plist[1]~plist[4]의 값. 초기화하지 않아 0으로 표시
    
    free(plist[0]);  //할당된 메모리 반환
}