#include <iostream>
#include <string.h>
#define ARRAY_LENGTH 20  // ��ũ�� ���� �� 20

// ���ڿ� ����
int my_strlen(char *ch1) {

    int len = 0;  // ���ڿ� ���̸� ������ ���� �ʱ�ȭ

    // �Է¹��� ���ڿ����� �ε��� NULL �ڸ� �������� �ݺ�
    for(int i = 0; ch1[i] != 0; i++) {
        len += 1;
    }
    return len;
}

// ���ڿ� ����
char *my_strcpy(char *ch1, char *ch2) {

    for(int i = 0; ch1[i] != 0; i++) {
        ch2[i] = ch1[i];  // �Է¹��� ���ڿ��� ������ ������ ����
    }
    return ch2;
}

// ���ڿ� ������
char my_strrev(char *ch1) {

    char ch1_reverse[ARRAY_LENGTH];  // �� ������ ��ȯ�� ��, ���� ��� ���� ����

    int len = my_strlen(ch1);
    len -= 1;  // NULL �ڸ��� ���� ���� �ٽ� ������ ����

    // ���ڿ��� ���̸�ŭ �ݺ�
    // ���ۿ��� ch1[n-i]�� ����� �޸� �ּҰ� ����Ű�� �� ����
    // ch[n-1]���� ch1[i]�� ����� �޸� �ּҰ� ����Ű�� �� ����
    // ���ۿ� ����� ���� �ٽ� ch1[i]�� ����
    for(int i = 0; i < len; len--, i++) {
        *ch1_reverse = ch1[len];
        ch1[len] = ch1[i];
        ch1[i] = *ch1_reverse;
    }
    return 0;
}

// String
char trans_str(char *ch1) {

    char *ch_strrev = strrev(ch1);  // ������ ������ ���ڿ��� �ٽ� ����� ����

    // char �迭 -> string���� ��ȯ
    std::string str(ch_strrev);
    std::cout << "String ��ȯ : " << str << '\n';

    int len = str.length();

    // string ������
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    std::cout << "String ������ : " << str << '\n';

    return 0;
}

int main() {

    char ch1[ARRAY_LENGTH];
    char ch2[ARRAY_LENGTH];

    std::cout << "���ڿ��� �Է��ϼ���." << '\n';
    std::cin >> ch1;
    std::cout << '\n';

    // �Է¹��� ���ڿ� ���̸� ���� len�� ����
    int len = my_strlen(ch1);

    // �Է¹��� ������ ���̰� 20 �������� �Ǵ�
    // 20�� �ʰ��Ѵٸ�, ���� �ʰ��� �˸�
    if(len <= 20) {
        my_strcpy(ch1, ch2);
        std::cout << "char �迭 ���� : " << ch2 << '\n';

        my_strrev(ch1);
        std::cout << "char �迭 ������ : " << ch1 << '\n' << '\n';

        trans_str(ch1);
    }
    else {
        std::cout << "������ �ʰ��߾��.";
    }
    return 0;
}
