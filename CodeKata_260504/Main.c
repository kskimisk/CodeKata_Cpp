#include <iostream> // 결과를 화면에 출력하기 위해 필요합니다.
#include <string>
#include <vector>

using namespace std;

// 1. 작성하신 solution 함수 (풀이 로직)
int solution(int n) {
    int answer = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            answer += n;
        }
        n--;
    }
    return answer;
}

// 2. 실행을 위한 메인 함수
int main() {
    // 테스트용 데이터 입력
    int n = 10;

    // 함수를 호출해서 결과를 받음
    int result = solution(n);

    // 결과를 화면에 출력
    cout << "입력값 n: " << n << endl;
    cout << "결과값: " << result << endl;

    return 0; // 프로그램이 정상 종료됨을 의미
}