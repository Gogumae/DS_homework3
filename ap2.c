#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5];  //�迭�� ������ �迭 ����

    list[0] = 10;
    list[1] = 11;  //�迭�� �� �Է�
    plist[0] = (int*)malloc(sizeof(int));  //���� �޸� �Ҵ�

    printf("[----- [������] [2019068057] -----]\n");

    printf("list[0] \t= %d\n", list[0]);  //list[0]�� �ִ� ��
    printf("list \t\t= %p\n", list);  //�迭�� �̸��� ������ó�� ��� ����. �迭�� ���� �ּ�
    printf("&list[0] \t= %p\n", &list[0]);  //list[0] ù��° ĭ�� �ּ�
    printf("list + 0 \t= %p\n", list+0);  //�迭 �������� �ּ�
    printf("list + 1 \t= %p\n", list+1);
    printf("list + 2 \t= %p\n", list+2);
    printf("list + 3 \t= %p\n", list+3);
    printf("list + 4 \t= %p\n", list+4);  //�迭 �̸��� +n�� �Ͽ� ����ϸ� n��° ĭ�� �ּҰ� ��µȴ�. �迭�� �ڷ���*n��ŭ �þ��.
    printf("&list[4] \t= %p\n", &list[4]);  //list[4]�� �ּ�

    free(plist[0]);
}