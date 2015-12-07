# LearnBoost
#### Introduction
A learning journey of the C++ library Boost. 

---

#### Chapter List
- Chapter 1: Introduction
- ...
- ...
- Chapter 6: Test
    - assert
    - static_assert
    - lightweight_test
- ...
- ...

---

#### A Code Snippet

```
//
//  AssertExtension.cpp
//  LearnBoost
//
//  Created by  DingLixiang on 15/12/6.
//  Copyright © 2015年  DingLixiang. All rights reserved.
//

#include "MacroDef.h"

#if TEST_ASSERT_EXTENSION

#include <iostream>
#include <boost/format.hpp>

// implement assertion for specific purposes
namespace boost
{
    void assertion_failed(char const *, char const *, char const *, long) {}
    void assertion_failed_msg(char const * expr, char const * msg,
                          char const * function, char const * file, long line)
    {
        boost::format fmt("Assertion failed!\nExpression: %s\n"
                          "Function: %s\nFile: %s\nLine: %d\n"
                          "Msg: %s\n\n");
        fmt % expr% function% file% line %msg;
        std::cout << fmt;
    }
}

#define BOOST_ENABLE_ASSERT_HANDLER     // 启用handler
#include <boost/assert.hpp>

// func: helper function
double func(int x)
{
    BOOST_ASSERT_MSG(x != 0, "divide by zero");
    return 1.0 / x;
}

// demo
void assert_extension_demo()
{
    func(0);
}

// main
int main()
{
    assert_extension_demo();
    return 0;
}

#endif
```

---

#### Note
This file is to be accomplished in future.
