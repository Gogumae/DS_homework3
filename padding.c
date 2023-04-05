//보다 효율적으로 데이터를 읽어들이기 위해 특정 CPU는 구조체의 메모리 할당에 padding을 실행한다
//padding이란 구조체 멤버들의 메모리 할당을 연속적으로 하지 않고 4의 배수 형태로 나뉠 수 있게 빈 공간을 채워넣는 것이다

#include <stdio.h>

struct student {
    char lastName[13];  //13바이트
    int studentId;  //4바이트
    short grade;  //2바이트
    //사이즈 기대값: 19바이트
};

int main() 
{
    struct student pst;

    printf("[----- [이찬희] [2019068057] -----]\n");

    //구조체 student의 사이즈와 int, short타입의 사이즈 크기를 출력한다
    //padding이 일어나면 lastName[13] 뒤에 3바이트, grade 뒤에 2바이트의 padding이 발생하여 24바이트가 나올 것이다
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));

    return 0;
}