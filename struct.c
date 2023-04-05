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

    printf("[----- [������] [2019068057] -----]\n");

    //����ü student1 st1�� �����ϰ� ���� �Է��� �� ����Ѵ�
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    //typedef�� �Ͽ��� ������ student1�� �ٸ��� struct�� ���� �ʾƵ� �ȴ�
    //����ü student st2�� �����ϰ� ���� �Է��� �� ����Ѵ�
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    //student2 st3�� �����ϰ� st2�� ������ st3�� ������ �� ����Ѵ�
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //if(st3 == st2) < �߸��� �ڵ� ����
    //����ü�� ���� Ÿ���� ������ ���� �����Ƿ�, ����ü���� ������ �񱳸� �Ϸ��� �� ������� ���� �����־�� �Ѵ�
    //st2�� st3�� �� ����� ���Ͽ� �� ������ equal, �׷��� ������ not equal�� ����ϴ� �Լ�
    if(st2.lastName == st3.lastName && st2.studentId == st3.studentId && st2.grade == st3.grade) {
    printf("equal\n");
    }
    else {
    printf("not equal\n");
    }

    return 0;
}