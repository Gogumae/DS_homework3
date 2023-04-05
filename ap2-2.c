#include <stdio.h>

void print_one(int *ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [이찬희] [2019068057] -----]\n");
    
    printf("one = %p\n", one);  //배열의 이름은 포인터의 역할을 하기 때문에 배열의 시작 주소를 출력
    printf("&one = %p\n", &one);  //배열의 시작 주소를 출력
    printf("&one[0] = %p\n", &one[0]);  //배열의 첫번째 칸, 즉 시작 주소를 출력
    printf("\n");

    //배열 one의 첫번째 칸의 주소를 인수로 하여 print_one 함수 사용
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);

    //배열 one을 인수로 하여 print_one 함수 사용
    //배열의 이름은 포인터처럼 사용할 수 있고 그 시작 주소를 가리키기에 위의 작업과 동일한 작업이다.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);

    return 0;
}

//포인터와 행(배열 원소의 개수)을 받아 각 주소와 값을 출력하는 함수
void print_one(int *ptr, int rows) {

    int i;

    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) {
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  //배열일 경우 포인터에 +n을 통해 n번째 칸의 주소를 확인 가능
        printf("\n");
    }
}