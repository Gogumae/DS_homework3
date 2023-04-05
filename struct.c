#include <stdio.h>

struct student1 {
    char lastName;
    int studentId;
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {

    printf("[----- [이찬희] [2019068057] -----]\n");

    //구조체 student1 st1를 선언하고 값을 입력한 후 출력한다
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    //typedef를 하였기 때문에 student1과 다르게 struct를 쓰지 않아도 된다
    //구조체 student st2를 선언하고 값을 입력한 후 출력한다
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    //student2 st3을 선언하고 st2의 값들을 st3에 복사한 후 출력한다
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //if(st3 == st2) < 잘못된 코드 수정
    //구조체는 여러 타입의 변수가 섞여 있으므로, 구조체끼리 같은지 비교를 하려면 각 멤버들을 따로 비교해주어야 한다
    //st2와 st3의 각 멤버를 비교하여 다 같으면 equal, 그렇지 않으면 not equal을 출력하는 함수
    if(st2.lastName == st3.lastName && st2.studentId == st3.studentId && st2.grade == st3.grade) {
    printf("equal\n");
    }
    else {
    printf("not equal\n");
    }

    return 0;
}