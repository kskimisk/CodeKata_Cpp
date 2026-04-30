// Main.cpp

#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;

    if (0 < num1 && num1 <= 100 && 0 < num2 && num2 <= 100) {
        answer = ((double)num1 / num2) * 1000;
    }

    return answer;
}

int main() {
    return 0;
}


//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int num1, int num2) {
//    int answer = 0;
//    return answer;
//}