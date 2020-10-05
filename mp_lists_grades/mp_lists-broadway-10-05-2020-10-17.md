


## Score: 35/109 (32.11%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✗ - [0/10] - List::merge

- **Points**: 0 / 10

```
==88== Memcheck, a memory error detector
==88== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==88== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==88== Command: ./test -r xml "List::merge"
==88== 
==88== 
==88== HEAP SUMMARY:
==88==     in use at exit: 64 bytes in 2 blocks
==88==   total heap usage: 243,309 allocs, 243,307 frees, 79,504,961 bytes allocated
==88== 
==88== 48 bytes in 1 blocks are definitely lost in loss record 2 of 2
==88==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==88==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==88==    by 0x428693: List<cs225::HSLAPixel>::insertBack(cs225::HSLAPixel const&) (List.hpp:92)
==88==    by 0x429C26: List<cs225::HSLAPixel>::List<std::__1::__wrap_iter<cs225::HSLAPixel*> >(std::__1::__wrap_iter<cs225::HSLAPixel*> const&, std::__1::__wrap_iter<cs225::HSLAPixel*> const&) (List-given.hpp:159)
==88==    by 0x425103: ____C_A_T_C_H____T_E_S_T____9() (tests_part2.cpp:75)
==88==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==88==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==88==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==88==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==88==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==88==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==88==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==88== 
==88== LEAK SUMMARY:
==88==    definitely lost: 48 bytes in 1 blocks
==88==    indirectly lost: 0 bytes in 0 blocks
==88==      possibly lost: 0 bytes in 0 blocks
==88==    still reachable: 16 bytes in 1 blocks
==88==         suppressed: 0 bytes in 0 blocks
==88== Reachable blocks (those to which a pointer was found) are not shown.
==88== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==88== 
==88== For counts of detected and suppressed errors, rerun with: -v
==88== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2

```
==90== Memcheck, a memory error detector
==90== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==90== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==90== Command: ./test -r xml "List::sort\ simple\ #1"
==90== 
==90== 
==90== HEAP SUMMARY:
==90==     in use at exit: 24 bytes in 1 blocks
==90==   total heap usage: 2,202 allocs, 2,201 frees, 263,672 bytes allocated
==90== 
==90== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==90==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==90==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==90==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==90==    by 0x425A6F: ____C_A_T_C_H____T_E_S_T____12() (tests_part2.cpp:97)
==90==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==90==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==90==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==90==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==90==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==90==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==90==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==90==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==90== 
==90== LEAK SUMMARY:
==90==    definitely lost: 24 bytes in 1 blocks
==90==    indirectly lost: 0 bytes in 0 blocks
==90==      possibly lost: 0 bytes in 0 blocks
==90==    still reachable: 0 bytes in 0 blocks
==90==         suppressed: 0 bytes in 0 blocks
==90== 
==90== For counts of detected and suppressed errors, rerun with: -v
==90== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2

```
==92== Memcheck, a memory error detector
==92== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==92== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==92== Command: ./test -r xml "List::sort\ simple\ #2"
==92== 
==92== 
==92== HEAP SUMMARY:
==92==     in use at exit: 40 bytes in 1 blocks
==92==   total heap usage: 2,202 allocs, 2,201 frees, 263,720 bytes allocated
==92== 
==92== 40 bytes in 1 blocks are definitely lost in loss record 1 of 1
==92==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==92==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==92==    by 0x42DCC3: List<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >::insertBack(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (List.hpp:92)
==92==    by 0x426205: ____C_A_T_C_H____T_E_S_T____14() (tests_part2.cpp:111)
==92==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==92==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==92==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==92==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==92==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==92==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==92==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==92==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==92== 
==92== LEAK SUMMARY:
==92==    definitely lost: 40 bytes in 1 blocks
==92==    indirectly lost: 0 bytes in 0 blocks
==92==      possibly lost: 0 bytes in 0 blocks
==92==    still reachable: 0 bytes in 0 blocks
==92==         suppressed: 0 bytes in 0 blocks
==92== 
==92== For counts of detected and suppressed errors, rerun with: -v
==92== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "List::insertFront\ size"
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 24 bytes in 1 blocks
==96==   total heap usage: 2,347 allocs, 2,346 frees, 268,272 bytes allocated
==96== 
==96== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==96==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==96==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==96==    by 0x438EA3: List<int>::insertFront(int const&) (List.hpp:67)
==96==    by 0x432CC7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==96==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==96==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==96==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==96==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==96==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==96==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==96==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==96==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==96== 
==96== LEAK SUMMARY:
==96==    definitely lost: 24 bytes in 1 blocks
==96==    indirectly lost: 0 bytes in 0 blocks
==96==      possibly lost: 0 bytes in 0 blocks
==96==    still reachable: 0 bytes in 0 blocks
==96==         suppressed: 0 bytes in 0 blocks
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "List::insertBack\ size"
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 24 bytes in 1 blocks
==98==   total heap usage: 2,347 allocs, 2,346 frees, 268,272 bytes allocated
==98== 
==98== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==98==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==98==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==98==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==98==    by 0x432F77: ____C_A_T_C_H____T_E_S_T____2() (tests_part1.cpp:31)
==98==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==98==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==98==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==98==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==98==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==98==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==98==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==98==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==98== 
==98== LEAK SUMMARY:
==98==    definitely lost: 24 bytes in 1 blocks
==98==    indirectly lost: 0 bytes in 0 blocks
==98==      possibly lost: 0 bytes in 0 blocks
==98==    still reachable: 0 bytes in 0 blocks
==98==         suppressed: 0 bytes in 0 blocks
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "List::insert\ contents"
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 24 bytes in 1 blocks
==100==   total heap usage: 2,343 allocs, 2,342 frees, 268,176 bytes allocated
==100== 
==100== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==100==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==100==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==100==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==100==    by 0x433271: ____C_A_T_C_H____T_E_S_T____4() (tests_part1.cpp:41)
==100==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==100==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==100==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==100==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==100==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==100==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==100==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==100==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==100== 
==100== LEAK SUMMARY:
==100==    definitely lost: 24 bytes in 1 blocks
==100==    indirectly lost: 0 bytes in 0 blocks
==100==      possibly lost: 0 bytes in 0 blocks
==100==    still reachable: 0 bytes in 0 blocks
==100==         suppressed: 0 bytes in 0 blocks
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::triplerotate basic

- **Points**: 0 / 5

```
==102== Memcheck, a memory error detector
==102== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==102== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==102== Command: ./test -r xml "List::triplerotate\ basic"
==102== 
==102== 
==102== HEAP SUMMARY:
==102==     in use at exit: 24 bytes in 1 blocks
==102==   total heap usage: 2,351 allocs, 2,350 frees, 268,464 bytes allocated
==102== 
==102== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==102==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==102==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==102==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==102==    by 0x4339A0: ____C_A_T_C_H____T_E_S_T____6() (tests_part1.cpp:56)
==102==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==102==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==102==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==102==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==102==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==102==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==102==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==102==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==102== 
==102== LEAK SUMMARY:
==102==    definitely lost: 24 bytes in 1 blocks
==102==    indirectly lost: 0 bytes in 0 blocks
==102==      possibly lost: 0 bytes in 0 blocks
==102==    still reachable: 0 bytes in 0 blocks
==102==         suppressed: 0 bytes in 0 blocks
==102== 
==102== For counts of detected and suppressed errors, rerun with: -v
==102== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10

```
==104== Memcheck, a memory error detector
==104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==104== Command: ./test -r xml "List::triplerotate\ simple"
==104== 
==104== 
==104== HEAP SUMMARY:
==104==     in use at exit: 24 bytes in 1 blocks
==104==   total heap usage: 2,355 allocs, 2,354 frees, 268,560 bytes allocated
==104== 
==104== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==104==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==104==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==104==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==104==    by 0x434090: ____C_A_T_C_H____T_E_S_T____8() (tests_part1.cpp:71)
==104==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==104==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==104==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==104==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==104==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==104==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==104==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==104==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==104== 
==104== LEAK SUMMARY:
==104==    definitely lost: 24 bytes in 1 blocks
==104==    indirectly lost: 0 bytes in 0 blocks
==104==      possibly lost: 0 bytes in 0 blocks
==104==    still reachable: 0 bytes in 0 blocks
==104==         suppressed: 0 bytes in 0 blocks
==104== 
==104== For counts of detected and suppressed errors, rerun with: -v
==104== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5

```
==106== Memcheck, a memory error detector
==106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==106== Command: ./test -r xml "List::split\ simple"
==106== 
==106== 
==106== HEAP SUMMARY:
==106==     in use at exit: 72 bytes in 3 blocks
==106==   total heap usage: 2,205 allocs, 2,202 frees, 263,744 bytes allocated
==106== 
==106== 24 bytes in 1 blocks are definitely lost in loss record 1 of 3
==106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==106==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==106==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==106==    by 0x43479F: ____C_A_T_C_H____T_E_S_T____10() (tests_part1.cpp:86)
==106==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==106==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==106==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==106==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==106==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==106==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==106==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==106==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==106== 
==106== 24 bytes in 1 blocks are definitely lost in loss record 2 of 3
==106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==106==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==106==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==106==    by 0x4347E3: ____C_A_T_C_H____T_E_S_T____10() (tests_part1.cpp:88)
==106==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==106==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==106==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==106==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==106==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==106==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==106==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==106==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==106== 
==106== 24 bytes in 1 blocks are definitely lost in loss record 3 of 3
==106==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==106==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==106==    by 0x439E68: List<int>::_copy(List<int> const&) (List-given.hpp:38)
==106==    by 0x439DEC: List<int>::List(List<int> const&) (List-given.hpp:8)
==106==    by 0x439D87: List<int>::split(int) (List-given.hpp:110)
==106==    by 0x434800: ____C_A_T_C_H____T_E_S_T____10() (tests_part1.cpp:90)
==106==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==106==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==106==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==106==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==106==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==106==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==106== 
==106== LEAK SUMMARY:
==106==    definitely lost: 72 bytes in 3 blocks
==106==    indirectly lost: 0 bytes in 0 blocks
==106==      possibly lost: 0 bytes in 0 blocks
==106==    still reachable: 0 bytes in 0 blocks
==106==         suppressed: 0 bytes in 0 blocks
==106== 
==106== For counts of detected and suppressed errors, rerun with: -v
==106== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==109== Memcheck, a memory error detector
==109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==109== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==109== Command: ./test -r xml "List::_destroy\ empty\ list"
==109== 
==109== 
==109== HEAP SUMMARY:
==109==     in use at exit: 0 bytes in 0 blocks
==109==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==109== 
==109== All heap blocks were freed -- no leaks are possible
==109== 
==109== For counts of detected and suppressed errors, rerun with: -v
==109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1

```
==111== Memcheck, a memory error detector
==111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==111== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==111== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==111== 
==111== 
==111== HEAP SUMMARY:
==111==     in use at exit: 24 bytes in 1 blocks
==111==   total heap usage: 2,359 allocs, 2,358 frees, 273,440 bytes allocated
==111== 
==111== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==111==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==111==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==111==    by 0x438EA3: List<int>::insertFront(int const&) (List.hpp:67)
==111==    by 0x4370C7: ____C_A_T_C_H____T_E_S_T____19() (tests_part1.cpp:172)
==111==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==111==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==111==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==111==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==111==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==111==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==111==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==111==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==111== 
==111== LEAK SUMMARY:
==111==    definitely lost: 24 bytes in 1 blocks
==111==    indirectly lost: 0 bytes in 0 blocks
==111==      possibly lost: 0 bytes in 0 blocks
==111==    still reachable: 0 bytes in 0 blocks
==111==         suppressed: 0 bytes in 0 blocks
==111== 
==111== For counts of detected and suppressed errors, rerun with: -v
==111== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1

```
==113== Memcheck, a memory error detector
==113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==113== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==113== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==113== 
==113== 
==113== HEAP SUMMARY:
==113==     in use at exit: 24 bytes in 1 blocks
==113==   total heap usage: 2,359 allocs, 2,358 frees, 275,840 bytes allocated
==113== 
==113== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==113==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==113==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==113==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==113==    by 0x437381: ____C_A_T_C_H____T_E_S_T____21() (tests_part1.cpp:180)
==113==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==113==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==113==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==113==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==113==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==113==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==113==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==113==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==113== 
==113== LEAK SUMMARY:
==113==    definitely lost: 24 bytes in 1 blocks
==113==    indirectly lost: 0 bytes in 0 blocks
==113==      possibly lost: 0 bytes in 0 blocks
==113==    still reachable: 0 bytes in 0 blocks
==113==         suppressed: 0 bytes in 0 blocks
==113== 
==113== For counts of detected and suppressed errors, rerun with: -v
==113== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1

```
==115== Memcheck, a memory error detector
==115== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==115== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==115== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==115== 
==115== 
==115== HEAP SUMMARY:
==115==     in use at exit: 24 bytes in 1 blocks
==115==   total heap usage: 2,359 allocs, 2,358 frees, 275,840 bytes allocated
==115== 
==115== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==115==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==115==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==115==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==115==    by 0x437651: ____C_A_T_C_H____T_E_S_T____23() (tests_part1.cpp:189)
==115==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==115==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==115==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==115==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==115==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==115==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==115==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==115==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==115== 
==115== LEAK SUMMARY:
==115==    definitely lost: 24 bytes in 1 blocks
==115==    indirectly lost: 0 bytes in 0 blocks
==115==      possibly lost: 0 bytes in 0 blocks
==115==    still reachable: 0 bytes in 0 blocks
==115==         suppressed: 0 bytes in 0 blocks
==115== 
==115== For counts of detected and suppressed errors, rerun with: -v
==115== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==117== Memcheck, a memory error detector
==117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==117== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==117== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==117== 
==117== 
==117== HEAP SUMMARY:
==117==     in use at exit: 24 bytes in 1 blocks
==117==   total heap usage: 2,359 allocs, 2,358 frees, 278,240 bytes allocated
==117== 
==117== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==117==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==117==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==117==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==117==    by 0x437951: ____C_A_T_C_H____T_E_S_T____25() (tests_part1.cpp:199)
==117==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==117==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==117==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==117==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==117==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==117==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==117==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==117==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==117== 
==117== LEAK SUMMARY:
==117==    definitely lost: 24 bytes in 1 blocks
==117==    indirectly lost: 0 bytes in 0 blocks
==117==      possibly lost: 0 bytes in 0 blocks
==117==    still reachable: 0 bytes in 0 blocks
==117==         suppressed: 0 bytes in 0 blocks
==117== 
==117== For counts of detected and suppressed errors, rerun with: -v
==117== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1

```
==119== Memcheck, a memory error detector
==119== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==119== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==119== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==119== 
==119== 
==119== HEAP SUMMARY:
==119==     in use at exit: 24 bytes in 1 blocks
==119==   total heap usage: 2,359 allocs, 2,358 frees, 273,440 bytes allocated
==119== 
==119== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==119==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==119==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==119==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==119==    by 0x437C31: ____C_A_T_C_H____T_E_S_T____27() (tests_part1.cpp:209)
==119==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==119==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==119==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==119==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==119==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==119==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==119==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==119==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==119== 
==119== LEAK SUMMARY:
==119==    definitely lost: 24 bytes in 1 blocks
==119==    indirectly lost: 0 bytes in 0 blocks
==119==      possibly lost: 0 bytes in 0 blocks
==119==    still reachable: 0 bytes in 0 blocks
==119==         suppressed: 0 bytes in 0 blocks
==119== 
==119== For counts of detected and suppressed errors, rerun with: -v
==119== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1

```
==121== Memcheck, a memory error detector
==121== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==121== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==121== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==121== 
==121== 
==121== HEAP SUMMARY:
==121==     in use at exit: 24 bytes in 1 blocks
==121==   total heap usage: 2,359 allocs, 2,358 frees, 278,240 bytes allocated
==121== 
==121== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==121==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==121==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==121==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==121==    by 0x4385B1: ____C_A_T_C_H____T_E_S_T____29() (tests_part1.cpp:221)
==121==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==121==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==121==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==121==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==121==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==121==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==121==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==121==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==121== 
==121== LEAK SUMMARY:
==121==    definitely lost: 24 bytes in 1 blocks
==121==    indirectly lost: 0 bytes in 0 blocks
==121==      possibly lost: 0 bytes in 0 blocks
==121==    still reachable: 0 bytes in 0 blocks
==121==         suppressed: 0 bytes in 0 blocks
==121== 
==121== For counts of detected and suppressed errors, rerun with: -v
==121== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1

```
==123== Memcheck, a memory error detector
==123== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==123== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==123== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==123== 
==123== 
==123== HEAP SUMMARY:
==123==     in use at exit: 24 bytes in 1 blocks
==123==   total heap usage: 2,352 allocs, 2,351 frees, 270,872 bytes allocated
==123== 
==123== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==123==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==123==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==123==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==123==    by 0x4388D4: ____C_A_T_C_H____T_E_S_T____31() (tests_part1.cpp:234)
==123==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==123==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==123==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==123==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==123==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==123==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==123==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==123==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==123== 
==123== LEAK SUMMARY:
==123==    definitely lost: 24 bytes in 1 blocks
==123==    indirectly lost: 0 bytes in 0 blocks
==123==      possibly lost: 0 bytes in 0 blocks
==123==    still reachable: 0 bytes in 0 blocks
==123==         suppressed: 0 bytes in 0 blocks
==123== 
==123== For counts of detected and suppressed errors, rerun with: -v
==123== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1

```
==125== Memcheck, a memory error detector
==125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==125== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==125== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==125== 
==125== 
==125== HEAP SUMMARY:
==125==     in use at exit: 24 bytes in 1 blocks
==125==   total heap usage: 2,352 allocs, 2,351 frees, 273,272 bytes allocated
==125== 
==125== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==125==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==125==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==125==    by 0x43A713: List<unsigned int>::insertFront(unsigned int const&) (List.hpp:67)
==125==    by 0x438BF4: ____C_A_T_C_H____T_E_S_T____33() (tests_part1.cpp:248)
==125==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==125==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==125==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==125==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==125==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==125==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==125==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==125==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==125== 
==125== LEAK SUMMARY:
==125==    definitely lost: 24 bytes in 1 blocks
==125==    indirectly lost: 0 bytes in 0 blocks
==125==      possibly lost: 0 bytes in 0 blocks
==125==    still reachable: 0 bytes in 0 blocks
==125==         suppressed: 0 bytes in 0 blocks
==125== 
==125== For counts of detected and suppressed errors, rerun with: -v
==125== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4

```
==127== Memcheck, a memory error detector
==127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==127== Command: ./test -r xml "List::reverse\ simple"
==127== 
==127== 
==127== HEAP SUMMARY:
==127==     in use at exit: 24 bytes in 1 blocks
==127==   total heap usage: 2,208 allocs, 2,207 frees, 263,852 bytes allocated
==127== 
==127== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==127==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==127==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==127==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==127==    by 0x43B413: ____C_A_T_C_H____T_E_S_T____0() (test_part2_extra.cpp:21)
==127==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==127==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==127==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==127==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==127==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==127==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==127==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==127==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==127== 
==127== LEAK SUMMARY:
==127==    definitely lost: 24 bytes in 1 blocks
==127==    indirectly lost: 0 bytes in 0 blocks
==127==      possibly lost: 0 bytes in 0 blocks
==127==    still reachable: 0 bytes in 0 blocks
==127==         suppressed: 0 bytes in 0 blocks
==127== 
==127== For counts of detected and suppressed errors, rerun with: -v
==127== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==129== Memcheck, a memory error detector
==129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==129== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==129== Command: ./test -r xml "List::reverse\ edge\ cases"
==129== 
==129== 
==129== HEAP SUMMARY:
==129==     in use at exit: 0 bytes in 0 blocks
==129==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==129== 
==129== All heap blocks were freed -- no leaks are possible
==129== 
==129== For counts of detected and suppressed errors, rerun with: -v
==129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5

```
==131== Memcheck, a memory error detector
==131== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==131== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==131== Command: ./test -r xml "List::reverseNth\ #3"
==131== 
==131== 
==131== HEAP SUMMARY:
==131==     in use at exit: 24 bytes in 1 blocks
==131==   total heap usage: 2,214 allocs, 2,213 frees, 264,032 bytes allocated
==131== 
==131== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==131==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==131==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==131==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==131==    by 0x43C8E0: ____C_A_T_C_H____T_E_S_T____4() (test_part2_extra.cpp:51)
==131==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==131==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==131==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==131==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==131==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==131==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==131==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==131==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==131== 
==131== LEAK SUMMARY:
==131==    definitely lost: 24 bytes in 1 blocks
==131==    indirectly lost: 0 bytes in 0 blocks
==131==      possibly lost: 0 bytes in 0 blocks
==131==    still reachable: 0 bytes in 0 blocks
==131==         suppressed: 0 bytes in 0 blocks
==131== 
==131== For counts of detected and suppressed errors, rerun with: -v
==131== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5

```
==133== Memcheck, a memory error detector
==133== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==133== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==133== Command: ./test -r xml "List::merge\ #2"
==133== 
==133== 
==133== HEAP SUMMARY:
==133==     in use at exit: 40 bytes in 2 blocks
==133==   total heap usage: 2,244 allocs, 2,242 frees, 265,824 bytes allocated
==133== 
==133== 24 bytes in 1 blocks are definitely lost in loss record 2 of 2
==133==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==133==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==133==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==133==    by 0x43D814: ____C_A_T_C_H____T_E_S_T____6() (test_part2_extra.cpp:70)
==133==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==133==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==133==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==133==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==133==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==133==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==133==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==133==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==133== 
==133== LEAK SUMMARY:
==133==    definitely lost: 24 bytes in 1 blocks
==133==    indirectly lost: 0 bytes in 0 blocks
==133==      possibly lost: 0 bytes in 0 blocks
==133==    still reachable: 16 bytes in 1 blocks
==133==         suppressed: 0 bytes in 0 blocks
==133== Reachable blocks (those to which a pointer was found) are not shown.
==133== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==133== 
==133== For counts of detected and suppressed errors, rerun with: -v
==133== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2

```
==135== Memcheck, a memory error detector
==135== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==135== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==135== Command: ./test -r xml "List::sort\ simple\ #3"
==135== 
==135== 
==135== HEAP SUMMARY:
==135==     in use at exit: 24 bytes in 1 blocks
==135==   total heap usage: 2,205 allocs, 2,204 frees, 263,784 bytes allocated
==135== 
==135== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==135==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==135==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==135==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==135==    by 0x43EA3F: ____C_A_T_C_H____T_E_S_T____10() (test_part2_extra.cpp:92)
==135==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==135==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==135==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==135==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==135==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==135==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==135==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==135==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==135== 
==135== LEAK SUMMARY:
==135==    definitely lost: 24 bytes in 1 blocks
==135==    indirectly lost: 0 bytes in 0 blocks
==135==      possibly lost: 0 bytes in 0 blocks
==135==    still reachable: 0 bytes in 0 blocks
==135==         suppressed: 0 bytes in 0 blocks
==135== 
==135== For counts of detected and suppressed errors, rerun with: -v
==135== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4

```
==137== Memcheck, a memory error detector
==137== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==137== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==137== Command: ./test -r xml "List::insert\ contents\ #2"
==137== 
==137== 
==137== HEAP SUMMARY:
==137==     in use at exit: 24 bytes in 1 blocks
==137==   total heap usage: 2,358 allocs, 2,357 frees, 268,672 bytes allocated
==137== 
==137== 24 bytes in 1 blocks are definitely lost in loss record 1 of 1
==137==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==137==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==137==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==137==    by 0x4411A7: ____C_A_T_C_H____T_E_S_T____0() (tests_part1_extra.cpp:22)
==137==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==137==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==137==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==137==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==137==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==137==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==137==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==137==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==137== 
==137== LEAK SUMMARY:
==137==    definitely lost: 24 bytes in 1 blocks
==137==    indirectly lost: 0 bytes in 0 blocks
==137==      possibly lost: 0 bytes in 0 blocks
==137==    still reachable: 0 bytes in 0 blocks
==137==         suppressed: 0 bytes in 0 blocks
==137== 
==137== For counts of detected and suppressed errors, rerun with: -v
==137== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5

```
==139== Memcheck, a memory error detector
==139== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==139== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==139== Command: ./test -r xml "List::split\ edge\ cases"
==139== 
==139== 
==139== HEAP SUMMARY:
==139==     in use at exit: 48 bytes in 2 blocks
==139==   total heap usage: 2,348 allocs, 2,346 frees, 268,336 bytes allocated
==139== 
==139== 24 bytes in 1 blocks are definitely lost in loss record 1 of 2
==139==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==139==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==139==    by 0x42B173: List<int>::insertBack(int const&) (List.hpp:92)
==139==    by 0x4418D3: ____C_A_T_C_H____T_E_S_T____2() (tests_part1_extra.cpp:36)
==139==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==139==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==139==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==139==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==139==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==139==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==139==    by 0x468452: Catch::Session::runInternal() (catch.hpp:10149)
==139==    by 0x46811A: Catch::Session::run() (catch.hpp:10106)
==139== 
==139== 24 bytes in 1 blocks are definitely lost in loss record 2 of 2
==139==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==139==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==139==    by 0x439E68: List<int>::_copy(List<int> const&) (List-given.hpp:38)
==139==    by 0x439DEC: List<int>::List(List<int> const&) (List-given.hpp:8)
==139==    by 0x439D87: List<int>::split(int) (List-given.hpp:110)
==139==    by 0x4418ED: ____C_A_T_C_H____T_E_S_T____2() (tests_part1_extra.cpp:38)
==139==    by 0x475262: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==139==    by 0x4659B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==139==    by 0x4658EC: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==139==    by 0x461E46: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==139==    by 0x46041E: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==139==    by 0x4697B6: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==139== 
==139== LEAK SUMMARY:
==139==    definitely lost: 48 bytes in 2 blocks
==139==    indirectly lost: 0 bytes in 0 blocks
==139==      possibly lost: 0 bytes in 0 blocks
==139==    still reachable: 0 bytes in 0 blocks
==139==         suppressed: 0 bytes in 0 blocks
==139== 
==139== For counts of detected and suppressed errors, rerun with: -v
==139== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



---

This report was generated for **mingw4** using **851afbb8f457806e575b756371600cee16ded9d3** (latest commit as of **October 5th 2020, 10:17 am**)
