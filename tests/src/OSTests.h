/*
    Copyright (c) 2020-2021 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/platform/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_PLATFORM_TESTS_OSTESTS_H_
#define _ISHIKO_PLATFORM_TESTS_OSTESTS_H_

#include <Ishiko/Tests/Core.h>

class OSTests : public Ishiko::Tests::TestSequence
{
public:
    OSTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void IshikoOSTest1(Ishiko::Tests::Test& test);
    static void IshikoOSTest2(Ishiko::Tests::Test& test);
    static void IshikoOSTest3(Ishiko::Tests::Test& test);
};

#endif
