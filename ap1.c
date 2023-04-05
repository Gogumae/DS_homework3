#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5];
    int *plist[5] = {NULL};  //�迭�� ������ �迭 ����

    plist[0] = (int *)malloc(sizeof(int));  //������ �迭�� ���� �޸� �Ҵ�

    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;  //�迭�� ������ �迭�� �� ����

    printf("[----- [������] [2019068057] -----]\n");

    printf("list[0] = %d\n", list[0]);  //list[0]�� ��
    printf("&list[0] = %p\n", &list[0]);  //list[0]�� �ּ�
    printf("list = %p\n", list);  //�迭�� �̸��� ������ó�� ���... �迭�� ���� �ּ�
    printf("&list = %p\n", &list);  //�迭�� ���� �ּ�
    printf("----------------------------------------\n\n");

    printf("list[1] = %d\n", list[1]);  //list[1]�� ��
    printf("&list[1] = %p\n", &list[1]);  //list[1]�� �ּ�
    printf("*(list+1) = %d\n", *(list + 1));  //list�迭 ������ ���� ĭ�� �ּҿ� �ִ� ��
    printf("list+1 = %p\n", list+1);  //list�迭 ������ ���� ĭ�� �ּ�
    printf("----------------------------------------\n\n");

    printf("*plist[0] = %d\n", *plist[0]);  //plist[0]�� ����Ű�� �ּҿ� �ִ� ��
    printf("&plist[0] = %p\n", &plist[0]);  //plist[0]�� �ּ�
    printf("&plist = %p\n", &plist);  //plist�迭 ���� �ּ�
    printf("plist = %p\n", plist);  //plist�迭 ���� �ּ�
    printf("plist[0] = %p\n", plist[0]);  //plist[0]�� ��. 200�� ������� �ּҰ� �������
    printf("plist[1] = %p\n", plist[1]); 
    printf("plist[2] = %p\n", plist[2]); 
    printf("plist[3] = %p\n", plist[3]); 
    printf("plist[4] = %p\n", plist[4]);  //plist[1]~plist[4]�� ��. �ʱ�ȭ���� �ʾ� 0���� ǥ��
    
    free(plist[0]);  //�Ҵ�� �޸� ��ȯ
}