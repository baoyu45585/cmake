//
// Created by 沈建斌 on 9/27/22.
//

#include <iostream>
#include "hello.h"
#include "MyTest.h"
#include "test.h"
using namespace std;

int main(int argc, char **argv)
{
    int ss=add(2,3);
     int m=sum(2);
    cout<<"the result is:"<<ss<<endl;
    cout<<"sum is:"<<m<<"test is:"<<test()<<endl;
}