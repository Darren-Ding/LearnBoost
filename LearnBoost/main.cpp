//
//  main.cpp
//  LearnBoost
//
//  Created by  DingLixiang on 15/12/6.
//  Copyright © 2015年  DingLixiang. All rights reserved.
//

/** Boost Learning Journey Start! **/

#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";
    std::cout << "Hello, Boost!\n";
    
    std::cout << "BOOST_VERSION: " << BOOST_VERSION << std::endl;
    std::cout << "BOOST_LIB_VERSION: " << BOOST_LIB_VERSION << std::endl;
    
    std::cout << "BOOST_PLATFORM: " << BOOST_PLATFORM << std::endl;
    std::cout << "BOOST_COMPILER: " << BOOST_COMPILER << std::endl;
    std::cout << "BOOST_STDLIB: " << BOOST_STDLIB << std::endl;
    
    return 0;
}
