//
//  main.cpp
//  L01OOP
//
//  Created by SunShine on 2017/2/10.
//  Copyright © 2017年 SunShine. All rights reserved.
//

#include <iostream>
#include "People.hpp"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    People * p = new People();
    p->sayHello();
    //没有垃圾回收，要删除了。
    delete p;
    return 0;
}
