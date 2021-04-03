/*
프로그래머스 핸드폰 번호 가리기
충분히 긴 *로된 문자열을 선언
주어진 번호길이-4 만큼 *문자열의 부분을 가져옴
나머지 뒤에를 번호로 채움
*/
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    string star="*************************";
    int i=phone_number.length()-4;
    answer+=star.substr(0,i);
    answer.push_back(phone_number[i]);
    answer.push_back(phone_number[i+1]);
    answer.push_back(phone_number[i+2]);
    answer.push_back(phone_number[i+3]);
    return answer;
}
