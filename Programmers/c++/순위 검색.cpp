/*
프로그래머스 순위 검색
* 효율성 테스트 미통과
info와 query에 대해 각 단어를 쪼개어 vector에 저장
vector를 탐색하며 조건에 일치하는 사람이 있는지 판별 후 인원 수 증가
*/
#include <string>
#include <vector>

using namespace std;

vector<vector<string>> splitInfo(vector<string> info){
    vector<vector<string>> s;
    for(int i=0; i<info.size(); i++){
        vector<string> ss;
        string str="";
        for(int j=0; j<info[i].length(); j++){
            if(info[i][j]==' '){
                ss.push_back(str);
                str="";
            }else{
                str.push_back(info[i][j]);
            }
        }
        ss.push_back(str);
        s.push_back(ss);
    }
    return s;
}

vector<vector<string>> splitQuery(vector<string> query){
    vector<vector<string>> s;
    for(int i=0; i<query.size(); i++){
        vector<string> ss;
        string str="";
        for(int j=0; j<query[i].length(); j++){
            if(query[i][j]==' ' && query[i][j+1]=='a'){
                ss.push_back(str);
                str="";
                j+=4;
            }else if(query[i][j]==' '){
                ss.push_back(str);
                str="";
            }else{
                str.push_back(query[i][j]);
            }
        }
        ss.push_back(str);
        s.push_back(ss);
    }
    return s;
}

int check(vector<vector<string>> infos, vector<string> querys){
    int count=0;
    for(int i=0; i<infos.size(); i++){
        if(querys[0].compare("-")==0 || querys[0].compare(infos[i][0])==0) {
            if(querys[1].compare("-")==0 || querys[1].compare(infos[i][1])==0) {
                if(querys[2].compare("-")==0 || querys[2].compare(infos[i][2])==0) {
                    if(querys[3].compare("-")==0 || querys[3].compare(infos[i][3])==0) {
                        int nq=stoi(querys[4]);
                        int ni=stoi(infos[i][4]);
                        if(nq<=ni) count++;
                    }
                }   
            }
        }
    }
    return count;
}

vector<int> solution(vector<string> info, vector<string> query) {
    vector<int> answer;
    vector<vector<string>> infos=splitInfo(info);
    vector<vector<string>> querys=splitQuery(query);
    for(int i=0; i<querys.size(); i++){
        answer.push_back(check(infos,querys[i]));
    }
    return answer;
}
