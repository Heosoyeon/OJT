#include <iostream>
#define SOURCE_WIDTH 4
#define SOURCE_HEIGHT 8

int SOURCE_BUF[SOURCE_WIDTH*SOURCE_HEIGHT];  // ��������

// �迭 �� �Ҵ�
void buf_fill() {

#if 1

    // �迭�� ��(1~32) �Ҵ�
    for(int i = 0; i < SOURCE_WIDTH*SOURCE_HEIGHT; i++) {
        SOURCE_BUF[i] = i+1;
    }
// #if 0 �� ��� #else�� Ȱ��ȭ
#else
    // �迭�� '��' �׸� ������ ����
    for(int i = 0; i < SOURCE_WIDTH*SOURCE_HEIGHT; i++) {
        // �⺻ ��� ù ��� ������ �� ��ġ�� 11 ����
        if(i < SOURCE_WIDTH || i % SOURCE_WIDTH == SOURCE_WIDTH-1) {
            SOURCE_BUF[i] = 11;
        }
        // �� �� ��ġ�� 0 ����
        else {
            SOURCE_BUF[i] = 0;
        }
    }
#endif  // SOURCE_WIDTH
}

// �⺻ ���
void buf_print() {

    for(int k = 0; k < SOURCE_HEIGHT; k++) {
        for (int i = 0; i < SOURCE_WIDTH; i++) {
            // ����� �� �ڸ� �̸� => 0���� ä��
            std::cout.width(2);
            std::cout.fill('0');
            std::cout << SOURCE_BUF[i+SOURCE_WIDTH*k];
        }
        std::cout << '\n';
    }
}

// �������� ȸ��
void buf_spin_left() {

    for(int j = 0; j < SOURCE_WIDTH; j++) {
        for(int i = 0; i < SOURCE_WIDTH*SOURCE_HEIGHT; i++) {
            if(i % SOURCE_WIDTH == SOURCE_WIDTH-1) {
                std::cout.width(2);
                std::cout.fill('0');
                std::cout << SOURCE_BUF[i-j];
            }
        }
        std::cout << '\n';
    }
}

// ���������� ȸ��
void buf_spin_right() {

    for(int j = 0; j < SOURCE_WIDTH; j++) {
        // SOURCE_HEIGHT - 1 == NULL-1
        for(int i = SOURCE_WIDTH*SOURCE_HEIGHT - 1 ; i >= 0; i--) {
            if(i % SOURCE_WIDTH == 0) {
                std::cout.width(2);
                std::cout.fill('0');
                std::cout << SOURCE_BUF[i+j];
            }
        }
        std::cout << '\n';
    }
}

// 180�� ������
void buf_spin_half() {

    // NULL-1 ���� 0���� �����ϸ�, ���� ���
    for(int i = SOURCE_WIDTH*SOURCE_HEIGHT-1; i >= 0; i--) {
        std::cout.width(2);
        std::cout.fill('0');
        std::cout << SOURCE_BUF[i];

        if(i % SOURCE_WIDTH == 0) {
            std::cout << '\n';
        }
    }
}

int main()
{
    buf_fill();

    std::cout << '\n' << '\n';

    std::cout << "�⺻ ���" << '\n';
    buf_print();
    std::cout << '\n';

    std::cout << "�������� ȸ��" << '\n';
    buf_spin_left();
    std::cout << '\n';

    std::cout << "���������� ȸ��" << '\n';
    buf_spin_right();
    std::cout << '\n';

    std::cout << "180�� ������" << '\n';
    buf_spin_half();
    std::cout << '\n';

    return 0;
}
