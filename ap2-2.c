#include <stdio.h>

void print_one(int *ptr, int rows);

int main() {
    int one[] = {0, 1, 2, 3, 4};

    printf("[----- [������] [2019068057] -----]\n");
    
    printf("one = %p\n", one);  //�迭�� �̸��� �������� ������ �ϱ� ������ �迭�� ���� �ּҸ� ���
    printf("&one = %p\n", &one);  //�迭�� ���� �ּҸ� ���
    printf("&one[0] = %p\n", &one[0]);  //�迭�� ù��° ĭ, �� ���� �ּҸ� ���
    printf("\n");

    //�迭 one�� ù��° ĭ�� �ּҸ� �μ��� �Ͽ� print_one �Լ� ���
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);

    //�迭 one�� �μ��� �Ͽ� print_one �Լ� ���
    //�迭�� �̸��� ������ó�� ����� �� �ְ� �� ���� �ּҸ� ����Ű�⿡ ���� �۾��� ������ �۾��̴�.
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n");
    print_one(one, 5);

    return 0;
}

//�����Ϳ� ��(�迭 ������ ����)�� �޾� �� �ּҿ� ���� ����ϴ� �Լ�
void print_one(int *ptr, int rows) {

    int i;

    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) {
        printf("%p \t %5d\n", ptr + i, *(ptr + i));  //�迭�� ��� �����Ϳ� +n�� ���� n��° ĭ�� �ּҸ� Ȯ�� ����
        printf("\n");
    }
}