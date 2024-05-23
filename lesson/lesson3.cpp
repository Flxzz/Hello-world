#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student{
    int age;
    string name;
    string gender;
};
struct Point{
    double x;
    double y;
};

int main(){
    Student mystudent;
    mystudent.age = 10;
    mystudent.name = "fang";
    mystudent.gender = "男";

    Student mystudent2 = {20, "flx", "女"};
    cout << mystudent2.age << endl;
    cout << mystudent2.name << endl;
    cout << mystudent2.gender << endl;

    // cout << mystudent.age + 10 << endl;
    // cout << mystudent.name + "abc" << endl;
    // cout << mystudent.gender << endl;

    // vector<int> v;
    // vector<vector<int> > v2;
    // vector<Student> vs;

    Point p = {1, 2};
    vector<Point> vp;
    vp.push_back(p);

    cout << vp[0].x << endl;
    cout << vp[0].y << endl;

    

}