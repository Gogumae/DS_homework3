//���� ȿ�������� �����͸� �о���̱� ���� Ư�� CPU�� ����ü�� �޸� �Ҵ翡 padding�� �����Ѵ�
//padding�̶� ����ü ������� �޸� �Ҵ��� ���������� ���� �ʰ� 4�� ��� ���·� ���� �� �ְ� �� ������ ä���ִ� ���̴�

#include <stdio.h>

struct student {
    char lastName[13];  //13����Ʈ
    int studentId;  //4����Ʈ
    short grade;  //2����Ʈ
    //������ ��밪: 19����Ʈ
};

int main() 
{
    struct student pst;

    printf("[----- [������] [2019068057] -----]\n");

    //����ü student�� ������� int, shortŸ���� ������ ũ�⸦ ����Ѵ�
    //padding�� �Ͼ�� lastName[13] �ڿ� 3����Ʈ, grade �ڿ� 2����Ʈ�� padding�� �߻��Ͽ� 24����Ʈ�� ���� ���̴�
    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));

    return 0;
}