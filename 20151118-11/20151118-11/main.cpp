////1041. 考试座位号(15)
//
//时间限制
//400 ms
//内存限制
//65536 kB
//代码长度限制
//8000 B
//判题程序
//Standard
//作者
//CHEN, Yue
//每个PAT考生在参加考试时都会被分配两个座位号，一个是试机座位，一个
//是考试座位。正常情况下，考生在入场时先得到试机座位号码，入座进入试
//机状态后，系统会显示该考生的考试座位号码，考试时考生需要换到考试座
//位就座。但有些考生迟到了，试机已经结束，他们只能拿着领到的试机座位
//号码求助于你，从后台查出他们的考试座位号码。
//
//输入格式：
//
//输入第一行给出一个正整数N（<=1000），随后N行，每行给出一个考生
//的信息：“准考证号 试机座位号 考试座位号”。其中准考证号由14位数
//字组成，座位从1到N编号。输入保证每个人的准考证号都不同，并且任
//何时候都不会把两个人分配到同一个座位上。
//
//考生信息之后，给出一个正整数M（<=N），随后一行中给出M个待查询的
//试机座位号码，以空格分隔。
//
//输出格式：
//
//对应每个需要查询的试机座位号码，在一行中输出对应考生的准考证号和
//考试座位号码，中间用1个空格分隔。
//
//输入样例：
//4
//10120150912233 2 4
//10120150912119 4 1
//10120150912126 1 3
//10120150912002 3 2
//2
//3 4
//输出样例：
//10120150912002 2
//10120150912119 1

#include <iostream>
using namespace std;
struct stu {
    string s;
    int one;
    int two;
};

int main() {
    int n;
    cin >> n;
    stu *a = new stu [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].s;
        cin >> a[i].one;
        cin >> a[i].two;
    }
    int m;
    cin >> m;
    int temp;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        for (int j = 0; j < n; j++) {
            if (a[j].one == temp) {
                cout << a[j].s << " ";
                cout << a[j].two << endl;
                break;
            }
        }
    }
    return 0;
}
