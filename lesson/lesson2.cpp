#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;

int main(){
    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << "s1: " << s1 << endl;
    // cout << "s2: " << s2 << endl;

    // string s1, s2;
    // getline(cin, s1);
    // getline(cin, s2);
    // cout << "s1: " << s1 << endl;
    // cout << "s2: " << s2 << endl;



    // //取出字符串中的数字，并且求和
    // string s;
    // getline(cin, s);
    // istringstream ss(s);        //创建输入字符串流
    // int temp;                   //把数字临时存储在temp当中
    // int sum = 0;                //sum存储几个数字的和

    // //for循环第一个部分int temp在前面定义了，第三个结束标志，在流完之后自动会结束，因此也不需要写
    // for(;ss >> temp;){
    //     sum = sum + temp;
    // }
    // cout << sum << endl;

    
    // string file = "number.txt";     //要打开的文件名
    // ifstream in(file);              //创建输入文件流，命名为in
    
    // string s;
    // if(in.is_open()){
    //     while(getline(in, s)){
    //         cout << s << endl;
    //     } 
    //     in.close();
    // }
    // else{
    //     cout << "unable to open the file" << endl;
    // }


    // string file = "number.txt";
    // ifstream in(file);  //创建文件输入流
    // int temp;
    // int sum = 0;        //求和
    // if(in.is_open()){
    //     while(in >> temp){
    //         cout << temp << " ";
    //         sum = sum + temp;
    //     }       
    //     cout << endl << sum << endl;
    //     in.close();
    // }
    // else{
    //     cout << "unable to open the file" << endl;
    // }

    // string s = "1 2 3 4 5 6";
    // istringstream ss(s);
    // int temp;
    // int sum = 0;
    // while(ss >> temp){
    //     sum = sum + temp;
    // }
    // cout << sum << endl;

    

    // 每一行有若干个数字，输出平均数最大的一行
    // string file = "number.txt";
    // ifstream in(file);
    // if(in.is_open()){
    //     string s;
    //     double max = -9999999;
    //     while(getline(in, s)){
    //         //这里我们有一行字符串s 例如"1 2 3 4 5 6"
    //         istringstream ss(s);
    //         double temp;
    //         double sum = 0;
    //         int num = 0;        //num计算有多少个数
    //         while(ss >> temp){
    //             sum = sum + temp;
    //             num++;          //每流入一次，加一个数
    //         }
    //         //计算平均数
    //         double avg = sum / num;
    //         if(avg > max){
    //             max = avg;
    //         }
    //     }
    //     cout << max << endl;
    //     in.close();
    // }
    // else{
    //     cout << "unable to open the file" << endl;
    // }

    // string file = "number.txt";
    // ifstream in(file);
    // if(in.is_open()){
    //     string s;
    //     while(getline(in, s)){
    //         //这里我们有一行字符串s 例如"aa bb cc"
    //         istringstream ss(s);
    //         string s0;          //存储单独的"aa" "bb" "cc"
    //         string result = "";      //存储连在一起的"aabbcc"
    //         while(ss >> s0){
    //             result = result + s0;
    //         }
    //     }
    //     in.close();
    // }
    // else{
    //     cout << "unable to open the file" << endl;
    // }




    //把文件中一行数字的和写到一个文件当中
    string file1 = "1.txt";
    ifstream in(file1);
    int temp;
    int sum = 0;
    while(in >> temp){
        sum = sum + temp;
    }


    string file2 = "2.txt";
    ofstream out(file2);
    out << sum;

}