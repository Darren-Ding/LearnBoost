//
//  StaticAssert.cpp
//  LearnBoost
//
//  Created by  DingLixiang on 15/12/6.
//  Copyright © 2015年  DingLixiang. All rights reserved.
//

#include "MacroDef.h"

#if TEST_STATIC_ASSERT

#include <boost/static_assert.hpp>

void static_assert_demo()
{
    BOOST_STATIC_ASSERT(2 == sizeof(short));
    //BOOST_STATIC_ASSERT(2 == sizeof(int)); // compile error
    BOOST_STATIC_ASSERT(true);
    BOOST_STATIC_ASSERT(16 == 0x10);
}

int main()
{
    static_assert_demo();
    return 0;
}

#endif