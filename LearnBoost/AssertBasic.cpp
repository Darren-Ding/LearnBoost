//
//  AssertBasic.cpp
//  LearnBoost
//
//  Created by  DingLixiang on 15/12/6.
//  Copyright © 2015年  DingLixiang. All rights reserved.
//

#include "MacroDef.h"

#if TEST_ASSERT_BASIC

#include <string>
#include <boost/assert.hpp>     // boost断言宏头文件

// demo
// note: BOOST_ASSERT宏仅会在debug模式下生效，在releasem模式下不会进行编译，不会影响运行效率。
void assert_basic_demo()
{
    // 基本用法
    BOOST_ASSERT(16 == 0x10);
    BOOST_ASSERT_MSG(std::string().size() == 1, "string.size() != 1");
}

// main
int main()
{
    assert_basic_demo();
    return 0;
}

#endif