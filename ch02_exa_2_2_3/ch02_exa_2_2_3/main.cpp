//
//  main.cpp
//  ch02_exa_2_2_3
//
//  Created by Ganrqunx on 2020/6/14.
//  Copyright © 2020 Ganrqunx. All rights reserved.
//
/*
 本程式展示C++ 資料過大超成溢位的效果
 */
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //cout << "Hello, World!\n";
    short id1 = 32767;
    short id = 32768;
    int id2 = 32768;
    cout << "id = " << id << endl;
    cout << "id1 = " << id1 << endl;
    cout << "id2 = " << id2 << endl;
    return 0;
}
