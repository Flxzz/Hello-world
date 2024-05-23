#include<iostream>
#include<string>

using namespace std;

int main(){
    // string s = "1234";
    // char c = '0';
    // cout << s + c << endl;
    // cout << c + s << endl;


    // int i = 'a' + 5;
    // char c = 'a' + 5;
    // cout << "i: " << i << endl;
    // cout << "c: " << c << endl;

    // string s1 = "April";
    // string s2 = "A";
    // string s3 = "";
    // char c = 'a'; 

    // cout << "s1的长度:" << s1.length() << endl;
    // cout << "s2的长度:" << s2.length() << endl;
    // cout << "s3的长度:" << s3.length() << endl;


    // string s4 = "happy";
    // cout << s4.find("app") << endl;
    // cout << s4.find("ab") << endl;
    // cout << s4.find("py") << endl;


    // string s = "Aprilfsakljvjsgkldjlkvxjkl";
    // string ss = "";

    // int i = s.length() - 1; //开始数最后一个字母的下标
    // while(i >= 0){
    //     ss = ss + s[i];     //把原字符串的字符加到翻转字符串后面
    //     i--;
    // }
    // cout << ss << endl;



    string s1 = "abc";
    string s2 = "123567";
    string s3 = "";         //希望的结果：s3 = "a1b2c3defg"
    int l1 = s1.length();
    int l2 = s2.length();
    if(l1 > l2){
        for(int i = 0; i <= l2 - 1; i++){
            s3 = s3 + s1[i];
            s3 = s3 + s2[i];
        }   
        for(int i = l2; i <= l1 - 1; i++){
            s3 = s3 + s1[i];
        }
    }
    //s2比s1长
    else{
        for(int i = 0; i <= l1 - 1; i++){
            s3 = s3 + s1[i];
            s3 = s3 + s2[i];
        }   
        for(int i = l1; i <= l2 - 1; i++){
            s3 = s3 + s2[i];
        }
    }
    cout << s3 << endl;


}