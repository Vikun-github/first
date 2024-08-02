#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Author:VIkun
int main() {
    vector<string> strVec;
    string s1;
    string s2;
    for(int i = 0; i < 3; i++) {
        cout << "请输入一串分隔的两个字符或数字"<< endl;
        cout << "------请输入字符------"<< endl;
        cin >> s1 >> s2;
        cout <<"第一个字符或数字是："<< s1<< endl;
        cout <<"第二个字符或数字是："<< s2<< endl;
        cout << "第一个字符或数字大于第二个字符或数字吗？"<< (s1>s2) << endl;
        if(s1>s2)
        {
            cout << "第一个(数字)大于第二个(数字)"<< endl;
        } else if(s1<s2)
        {
            cout << "第一个数字小于第二个数字"<< endl;
        } else
        {
            cout << "两个字符(数字)等于！"<< endl;
        };
    }
    return 0;
}