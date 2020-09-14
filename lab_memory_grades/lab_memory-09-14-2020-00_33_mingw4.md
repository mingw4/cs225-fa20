


## Score: 0/100 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/5] - Test the constructor (valgrind)

- **Points**: 0 / 5

```
==61== Memcheck, a memory error detector
==61== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==61== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==61== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==61== 
==61== 
==61== HEAP SUMMARY:
==61==     in use at exit: 2,592 bytes in 11 blocks
==61==   total heap usage: 2,492 allocs, 2,481 frees, 278,680 bytes allocated
==61== 
==61== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==61==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==61==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==61==    by 0x407912: Allocator::createLetterGroups() (allocator.cpp:24)
==61==    by 0x4078C3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==61==    by 0x44035D: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==61==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==61==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==61==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==61==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==61==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==61==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==61==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==61== 
==61== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==61==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==61==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==61==    by 0x407C16: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:50)
==61==    by 0x4078DD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==61==    by 0x44035D: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==61==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==61==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==61==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==61==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==61==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==61==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==61==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==61== 
==61== LEAK SUMMARY:
==61==    definitely lost: 720 bytes in 2 blocks
==61==    indirectly lost: 1,872 bytes in 9 blocks
==61==      possibly lost: 0 bytes in 0 blocks
==61==    still reachable: 0 bytes in 0 blocks
==61==         suppressed: 0 bytes in 0 blocks
==61== 
==61== For counts of detected and suppressed errors, rerun with: -v
==61== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - Test allocate() (valgrind)

- **Points**: 0 / 5

```
==63== Memcheck, a memory error detector
==63== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==63== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==63== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==63== 
==63== Conditional jump or move depends on uninitialised value(s)
==63==    at 0x408563: Allocator::largestOpening() (allocator.cpp:114)
==63==    by 0x4083F8: Allocator::solve() (allocator.cpp:94)
==63==    by 0x407ED4: Allocator::allocate() (allocator.cpp:72)
==63==    by 0x440513: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:21)
==63==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==63==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==63==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==63==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==63==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==63==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==63==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==63==    by 0x4698CA: Catch::Session::run() (catch.hpp:10106)
==63== 
==63== Conditional jump or move depends on uninitialised value(s)
==63==    at 0x40861C: Allocator::minSpaceRemaining() (allocator.cpp:104)
==63==    by 0x408446: Allocator::solve() (allocator.cpp:98)
==63==    by 0x407ED4: Allocator::allocate() (allocator.cpp:72)
==63==    by 0x440513: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:21)
==63==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==63==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==63==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==63==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==63==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==63==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==63==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==63==    by 0x4698CA: Catch::Session::run() (catch.hpp:10106)
==63== 
==63== 
==63== HEAP SUMMARY:
==63==     in use at exit: 2,592 bytes in 11 blocks
==63==   total heap usage: 2,492 allocs, 2,481 frees, 276,488 bytes allocated
==63== 
==63== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==63==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==63==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==63==    by 0x407912: Allocator::createLetterGroups() (allocator.cpp:24)
==63==    by 0x4078C3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==63==    by 0x4404ED: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==63==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==63==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==63==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==63==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==63==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==63==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==63==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==63== 
==63== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==63==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==63==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==63==    by 0x407C16: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:50)
==63==    by 0x4078DD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==63==    by 0x4404ED: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==63==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==63==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==63==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==63==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==63==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==63==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==63==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==63== 
==63== LEAK SUMMARY:
==63==    definitely lost: 720 bytes in 2 blocks
==63==    indirectly lost: 1,872 bytes in 9 blocks
==63==      possibly lost: 0 bytes in 0 blocks
==63==    still reachable: 0 bytes in 0 blocks
==63==         suppressed: 0 bytes in 0 blocks
==63== 
==63== For counts of detected and suppressed errors, rerun with: -v
==63== Use --track-origins=yes to see where uninitialised values come from
==63== ERROR SUMMARY: 29 errors from 4 contexts (suppressed: 0 from 0)

```



### ✗ - [0/20] - Test printRooms() (valgrind)

- **Points**: 0 / 20

```
==65== Memcheck, a memory error detector
==65== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==65== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==65== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==65== 
==65== Conditional jump or move depends on uninitialised value(s)
==65==    at 0x408563: Allocator::largestOpening() (allocator.cpp:114)
==65==    by 0x4083F8: Allocator::solve() (allocator.cpp:94)
==65==    by 0x407ED4: Allocator::allocate() (allocator.cpp:72)
==65==    by 0x4406FB: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:29)
==65==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x4698CA: Catch::Session::run() (catch.hpp:10106)
==65== 
==65== Conditional jump or move depends on uninitialised value(s)
==65==    at 0x40861C: Allocator::minSpaceRemaining() (allocator.cpp:104)
==65==    by 0x408446: Allocator::solve() (allocator.cpp:98)
==65==    by 0x407ED4: Allocator::allocate() (allocator.cpp:72)
==65==    by 0x4406FB: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:29)
==65==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x4698CA: Catch::Session::run() (catch.hpp:10106)
==65== 
==65== Conditional jump or move depends on uninitialised value(s)
==65==    at 0x4084EE: Allocator::printRooms(std::__1::basic_ostream<char, std::__1::char_traits<char> >&) (allocator.cpp:86)
==65==    by 0x440A4E: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:32)
==65==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==65==    by 0x4698CA: Catch::Session::run() (catch.hpp:10106)
==65==    by 0x469849: Catch::Session::run(int, char**) (catch.hpp:10074)
==65==    by 0x4968C1: main (catch.hpp:13613)
==65== 
==65== 
==65== HEAP SUMMARY:
==65==     in use at exit: 2,592 bytes in 11 blocks
==65==   total heap usage: 2,493 allocs, 2,482 frees, 276,536 bytes allocated
==65== 
==65== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x407912: Allocator::createLetterGroups() (allocator.cpp:24)
==65==    by 0x4078C3: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==65==    by 0x4406D2: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==65==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==65== 
==65== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==65==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==65==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==65==    by 0x407C16: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:50)
==65==    by 0x4078DD: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==65==    by 0x4406D2: ____C_A_T_C_H____T_E_S_T____4() (tests.cpp:28)
==65==    by 0x476A12: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==65==    by 0x467166: Catch::TestCase::invoke() const (catch.hpp:10793)
==65==    by 0x46709C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==65==    by 0x4635F6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==65==    by 0x461BCE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==65==    by 0x46AF66: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==65==    by 0x469C02: Catch::Session::runInternal() (catch.hpp:10149)
==65== 
==65== LEAK SUMMARY:
==65==    definitely lost: 720 bytes in 2 blocks
==65==    indirectly lost: 1,872 bytes in 9 blocks
==65==      possibly lost: 0 bytes in 0 blocks
==65==    still reachable: 0 bytes in 0 blocks
==65==         suppressed: 0 bytes in 0 blocks
==65== 
==65== For counts of detected and suppressed errors, rerun with: -v
==65== Use --track-origins=yes to see where uninitialised values come from
==65== ERROR SUMMARY: 30 errors from 5 contexts (suppressed: 0 from 0)

```



### ✗ - [0/30] - Test printRooms() for overall output

- **Points**: 0 / 30


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/40] - Test printRooms() for individual output

- **Points**: 0 / 40


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---

This report was generated for **mingw4** using **dcbe665fad00b38ef79798fc749d55a9b3e559a3** (from **September 14th 2020, 12:33:19 am**)
