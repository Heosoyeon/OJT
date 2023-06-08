#include <iostream>
#define SOURCE_WIDTH 4
#define SOURCE_HEIGHT 8

int SOURCE_BUF[SOURCE_WIDTH*SOURCE_HEIGHT];  // 전역변수

// 배열 값 할당
void buf_fill() {

#if 1

    // 배열에 값(1~32) 할당
    for(int i = 0; i < SOURCE_WIDTH*SOURCE_HEIGHT; i++) {
        SOURCE_BUF[i] = i+1;
    }
// #if 0 일 경우 #else가 활성화
#else
    // 배열에 'ㄱ' 그림 데이터 삽입
    for(int i = 0; i < SOURCE_WIDTH*SOURCE_HEIGHT; i++) {
        // 기본 출력 첫 행과 마지막 열 위치에 11 저장
        if(i < SOURCE_WIDTH || i % SOURCE_WIDTH == SOURCE_WIDTH-1) {
            SOURCE_BUF[i] = 11;
        }
        // 그 외 위치에 0 저장
        else {
            SOURCE_BUF[i] = 0;
        }
    }
#endif  // SOURCE_WIDTH
}

// 기본 출력
void buf_print() {

    for(int k = 0; k < SOURCE_HEIGHT; k++) {
        for (int i = 0; i < SOURCE_WIDTH; i++) {
            // 출력이 두 자리 미만 => 0으로 채움
            std::cout.width(2);
            std::cout.fill('0');
            std::cout << SOURCE_BUF[i+SOURCE_WIDTH*k];
        }
        std::cout << '\n';
    }
}

// 왼쪽으로 회전
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

// 오른쪽으로 회전
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

// 180도 뒤집기
void buf_spin_half() {

    // NULL-1 부터 0까지 감소하며, 값을 출력
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

    std::cout << "기본 출력" << '\n';
    buf_print();
    std::cout << '\n';

    std::cout << "왼쪽으로 회전" << '\n';
    buf_spin_left();
    std::cout << '\n';

    std::cout << "오른쪽으로 회전" << '\n';
    buf_spin_right();
    std::cout << '\n';

    std::cout << "180도 뒤집기" << '\n';
    buf_spin_half();
    std::cout << '\n';

    return 0;
}
