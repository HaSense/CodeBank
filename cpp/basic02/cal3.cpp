#include <iostream>
#include <string>
using namespace std;

int main() {
    string name; 
    int year = 0;
    int age = 0;

    cout << "이름 : ";
    cin >> name;
    cout << "출생연도 : ";
    cin >> year;
    
    age = 2023 - year;
    cout << name << "님의 나이는 " << age << "세 입니다." << endl;

    return 0;
}