//���������� **x�� ũ�⸦ ����ϴ� ���α׷�

#include<stdio.h>
#include<stdlib.h>

void main() {

    int **x;

    printf("[----- [������] [2019068057] -----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));  //x�� *x�� �ּҸ� ������ �ְ�, 32��Ʈ ȯ������ ������ �Ǿ� 4�� ��µȴ�.
    printf("sizeof(*x) = %lu\n", sizeof(*x));  //*x�� **x�� �ּҸ� ������ �ְ�, 32��Ʈ ȯ������ ������ �Ǿ� 4�� ��µȴ�.
    printf("sizeof(**x) = %lu\n", sizeof(**x));  //**x�� int�� �����̹Ƿ� 4�� ��µȴ�. ���� char **x������, ����� 1�� ��µ� ���̴�.
}