#include <iostream>
using namespace std;

int main()
{
    int width = 0;
    int height = 0;
    double area = 0.0;
    cout << "width : ";
    cin >> width;
    cout << "height : ";
    cin >> height;
    area = width * height / 2.0;
    cout << area << endl; 
    
    return 0;
}