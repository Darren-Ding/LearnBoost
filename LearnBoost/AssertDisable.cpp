//
//  AssertDisable.cpp
//  LearnBoost
//
//  Created by  DingLixiang on 15/12/6.
//  Copyright © 2015年  DingLixiang. All rights reserved.
//

#include "MacroDef.h"

#if TEST_ASSERT_DISABLE

#define BOOST_DISABLE_ASSERTS   // 禁用boost断言

#include <iostream>
#include <cassert>              // 标准断言宏头文件
#include <boost/assert.hpp>     // boost断言宏头文件

// func: helper function
double func(int x)
{
    BOOST_ASSERT(x != 0 && "divide by zero");   // 失效
    std::cout << "after BOOST_ASSERT" << std::endl;
    
    assert(x != 0 && "divide by zero");         // 有效
    std::cout << "after assert" << std::endl;
    
    return 1.0 / x;
}

// demo
// note: BOOST_ASSERT宏仅会在debug模式下生效，在releasem模式下不会进行编译，不会影响运行效率。
void assert_disable_demo()
{
    func(0);
}

// main
int main()
{
    assert_disable_demo();
    return 0;
}

#endif
