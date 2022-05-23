---

This report was generated for **mingw4** using **cc8977e817ae82bc96e8cc2944684734febfc193** (latest commit as of **November 7th 2020, 2:02 pm**)

---




## Score: 18/20 (90.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - test_heapify_down_1

- **Points**: 1 / 1

```
==70== Memcheck, a memory error detector
==70== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==70== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==70== Command: ./test -r xml "test_heapify_down_1"
==70== 
==70== 
==70== HEAP SUMMARY:
==70==     in use at exit: 0 bytes in 0 blocks
==70==   total heap usage: 1,868 allocs, 1,868 frees, 236,956 bytes allocated
==70== 
==70== All heap blocks were freed -- no leaks are possible
==70== 
==70== For counts of detected and suppressed errors, rerun with: -v
==70== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_2

- **Points**: 1 / 1

```
==72== Memcheck, a memory error detector
==72== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==72== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==72== Command: ./test -r xml "test_heapify_down_2"
==72== 
==72== 
==72== HEAP SUMMARY:
==72==     in use at exit: 0 bytes in 0 blocks
==72==   total heap usage: 1,869 allocs, 1,869 frees, 237,012 bytes allocated
==72== 
==72== All heap blocks were freed -- no leaks are possible
==72== 
==72== For counts of detected and suppressed errors, rerun with: -v
==72== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_3

- **Points**: 1 / 1

```
==74== Memcheck, a memory error detector
==74== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==74== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==74== Command: ./test -r xml "test_heapify_down_3"
==74== 
==74== 
==74== HEAP SUMMARY:
==74==     in use at exit: 0 bytes in 0 blocks
==74==   total heap usage: 1,870 allocs, 1,870 frees, 237,116 bytes allocated
==74== 
==74== All heap blocks were freed -- no leaks are possible
==74== 
==74== For counts of detected and suppressed errors, rerun with: -v
==74== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_4

- **Points**: 1 / 1

```
==76== Memcheck, a memory error detector
==76== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==76== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==76== Command: ./test -r xml "test_heapify_down_4"
==76== 
==76== 
==76== HEAP SUMMARY:
==76==     in use at exit: 0 bytes in 0 blocks
==76==   total heap usage: 1,870 allocs, 1,870 frees, 237,148 bytes allocated
==76== 
==76== All heap blocks were freed -- no leaks are possible
==76== 
==76== For counts of detected and suppressed errors, rerun with: -v
==76== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_5

- **Points**: 1 / 1

```
==78== Memcheck, a memory error detector
==78== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==78== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==78== Command: ./test -r xml "test_heapify_down_5"
==78== 
==78== 
==78== HEAP SUMMARY:
==78==     in use at exit: 0 bytes in 0 blocks
==78==   total heap usage: 1,873 allocs, 1,873 frees, 238,452 bytes allocated
==78== 
==78== All heap blocks were freed -- no leaks are possible
==78== 
==78== For counts of detected and suppressed errors, rerun with: -v
==78== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_6

- **Points**: 1 / 1

```
==80== Memcheck, a memory error detector
==80== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==80== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==80== Command: ./test -r xml "test_heapify_down_6"
==80== 
==80== 
==80== HEAP SUMMARY:
==80==     in use at exit: 0 bytes in 0 blocks
==80==   total heap usage: 1,869 allocs, 1,869 frees, 237,456 bytes allocated
==80== 
==80== All heap blocks were freed -- no leaks are possible
==80== 
==80== For counts of detected and suppressed errors, rerun with: -v
==80== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_7

- **Points**: 1 / 1

```
==82== Memcheck, a memory error detector
==82== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==82== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==82== Command: ./test -r xml "test_heapify_down_7"
==82== 
==82== 
==82== HEAP SUMMARY:
==82==     in use at exit: 0 bytes in 0 blocks
==82==   total heap usage: 1,870 allocs, 1,870 frees, 238,128 bytes allocated
==82== 
==82== All heap blocks were freed -- no leaks are possible
==82== 
==82== For counts of detected and suppressed errors, rerun with: -v
==82== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_8

- **Points**: 1 / 1

```
==84== Memcheck, a memory error detector
==84== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==84== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==84== Command: ./test -r xml "test_heapify_down_8"
==84== 
==84== 
==84== HEAP SUMMARY:
==84==     in use at exit: 0 bytes in 0 blocks
==84==   total heap usage: 1,870 allocs, 1,870 frees, 238,368 bytes allocated
==84== 
==84== All heap blocks were freed -- no leaks are possible
==84== 
==84== For counts of detected and suppressed errors, rerun with: -v
==84== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_9

- **Points**: 1 / 1

```
==86== Memcheck, a memory error detector
==86== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==86== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==86== Command: ./test -r xml "test_heapify_down_9"
==86== 
==86== 
==86== HEAP SUMMARY:
==86==     in use at exit: 0 bytes in 0 blocks
==86==   total heap usage: 1,871 allocs, 1,871 frees, 239,424 bytes allocated
==86== 
==86== All heap blocks were freed -- no leaks are possible
==86== 
==86== For counts of detected and suppressed errors, rerun with: -v
==86== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_heapify_down_10

- **Points**: 1 / 1

```
==88== Memcheck, a memory error detector
==88== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==88== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==88== Command: ./test -r xml "test_heapify_down_10"
==88== 
==88== 
==88== HEAP SUMMARY:
==88==     in use at exit: 0 bytes in 0 blocks
==88==   total heap usage: 1,871 allocs, 1,871 frees, 239,856 bytes allocated
==88== 
==88== All heap blocks were freed -- no leaks are possible
==88== 
==88== For counts of detected and suppressed errors, rerun with: -v
==88== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_build_heap_1

- **Points**: 1 / 1

```
==90== Memcheck, a memory error detector
==90== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==90== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==90== Command: ./test -r xml "test_build_heap_1"
==90== 
==90== 
==90== HEAP SUMMARY:
==90==     in use at exit: 0 bytes in 0 blocks
==90==   total heap usage: 1,871 allocs, 1,871 frees, 236,984 bytes allocated
==90== 
==90== All heap blocks were freed -- no leaks are possible
==90== 
==90== For counts of detected and suppressed errors, rerun with: -v
==90== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - test_build_heap_2

- **Points**: 0 / 1


```
Original: matches == true
Expanded: false == true
```


### ✓ - [1/1] - test_build_heap_3

- **Points**: 1 / 1

```
==93== Memcheck, a memory error detector
==93== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==93== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==93== Command: ./test -r xml "test_build_heap_3"
==93== 
==93== 
==93== HEAP SUMMARY:
==93==     in use at exit: 0 bytes in 0 blocks
==93==   total heap usage: 1,876 allocs, 1,876 frees, 237,308 bytes allocated
==93== 
==93== All heap blocks were freed -- no leaks are possible
==93== 
==93== For counts of detected and suppressed errors, rerun with: -v
==93== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_build_heap_4

- **Points**: 1 / 1

```
==95== Memcheck, a memory error detector
==95== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==95== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==95== Command: ./test -r xml "test_build_heap_4"
==95== 
==95== 
==95== HEAP SUMMARY:
==95==     in use at exit: 0 bytes in 0 blocks
==95==   total heap usage: 1,878 allocs, 1,878 frees, 237,612 bytes allocated
==95== 
==95== All heap blocks were freed -- no leaks are possible
==95== 
==95== For counts of detected and suppressed errors, rerun with: -v
==95== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/1] - test_build_heap_5

- **Points**: 0 / 1

```
==97== Memcheck, a memory error detector
==97== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==97== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==97== Command: ./test -r xml "test_build_heap_5"
==97== 
==97== Conditional jump or move depends on uninitialised value(s)
==97==    at 0x44971E: heap<int, std::__1::less<int> >::maxPriorityChild(unsigned long) const (heap.cpp:53)
==97==    by 0x4483C7: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:66)
==97==    by 0x447FAE: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:102)
==97==    by 0x42FA82: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==97==    by 0x47C012: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==97==    by 0x46C766: Catch::TestCase::invoke() const (catch.hpp:10793)
==97==    by 0x46C69C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==97==    by 0x468BF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==97==    by 0x4671CE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==97==    by 0x470566: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==97==    by 0x46F202: Catch::Session::runInternal() (catch.hpp:10149)
==97==    by 0x46EECA: Catch::Session::run() (catch.hpp:10106)
==97== 
==97== Conditional jump or move depends on uninitialised value(s)
==97==    at 0x4483FF: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:66)
==97==    by 0x447FAE: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:102)
==97==    by 0x42FA82: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==97==    by 0x47C012: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==97==    by 0x46C766: Catch::TestCase::invoke() const (catch.hpp:10793)
==97==    by 0x46C69C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==97==    by 0x468BF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==97==    by 0x4671CE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==97==    by 0x470566: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==97==    by 0x46F202: Catch::Session::runInternal() (catch.hpp:10149)
==97==    by 0x46EECA: Catch::Session::run() (catch.hpp:10106)
==97==    by 0x46EE49: Catch::Session::run(int, char**) (catch.hpp:10074)
==97== 
==97== Conditional jump or move depends on uninitialised value(s)
==97==    at 0x44971E: heap<int, std::__1::less<int> >::maxPriorityChild(unsigned long) const (heap.cpp:53)
==97==    by 0x448414: heap<int, std::__1::less<int> >::heapifyDown(unsigned long) (heap.cpp:67)
==97==    by 0x447FAE: heap<int, std::__1::less<int> >::heap(std::__1::vector<int, std::__1::allocator<int> > const&) (heap.cpp:102)
==97==    by 0x42FA82: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:183)
==97==    by 0x47C012: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==97==    by 0x46C766: Catch::TestCase::invoke() const (catch.hpp:10793)
==97==    by 0x46C69C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==97==    by 0x468BF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==97==    by 0x4671CE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==97==    by 0x470566: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==97==    by 0x46F202: Catch::Session::runInternal() (catch.hpp:10149)
==97==    by 0x46EECA: Catch::Session::run() (catch.hpp:10106)
==97== 
==97== Conditional jump or move depends on uninitialised value(s)
==97==    at 0x430763: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==97==    by 0x430763: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==97==    by 0x430763: operator==<int, std::__1::allocator<int> > (vector:3312)
==97==    by 0x430763: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==97==    by 0x47C012: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==97==    by 0x46C766: Catch::TestCase::invoke() const (catch.hpp:10793)
==97==    by 0x46C69C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==97==    by 0x468BF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==97==    by 0x4671CE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==97==    by 0x470566: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==97==    by 0x46F202: Catch::Session::runInternal() (catch.hpp:10149)
==97==    by 0x46EECA: Catch::Session::run() (catch.hpp:10106)
==97==    by 0x46EE49: Catch::Session::run(int, char**) (catch.hpp:10074)
==97==    by 0x49BEC1: main (catch.hpp:13613)
==97== 
==97== Conditional jump or move depends on uninitialised value(s)
==97==    at 0x430AC2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *>, std::__1::__equal_to<int, int> > (algorithm:1325)
==97==    by 0x430AC2: equal<std::__1::__wrap_iter<const int *>, std::__1::__wrap_iter<const int *> > (algorithm:1337)
==97==    by 0x430AC2: operator==<int, std::__1::allocator<int> > (vector:3312)
==97==    by 0x430AC2: ____C_A_T_C_H____T_E_S_T____28() (tests.cpp:188)
==97==    by 0x47C012: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==97==    by 0x46C766: Catch::TestCase::invoke() const (catch.hpp:10793)
==97==    by 0x46C69C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==97==    by 0x468BF6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==97==    by 0x4671CE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==97==    by 0x470566: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==97==    by 0x46F202: Catch::Session::runInternal() (catch.hpp:10149)
==97==    by 0x46EECA: Catch::Session::run() (catch.hpp:10106)
==97==    by 0x46EE49: Catch::Session::run(int, char**) (catch.hpp:10074)
==97==    by 0x49BEC1: main (catch.hpp:13613)
==97== 
==97== 
==97== HEAP SUMMARY:
==97==     in use at exit: 16 bytes in 1 blocks
==97==   total heap usage: 1,888 allocs, 1,887 frees, 240,416 bytes allocated
==97== 
==97== LEAK SUMMARY:
==97==    definitely lost: 0 bytes in 0 blocks
==97==    indirectly lost: 0 bytes in 0 blocks
==97==      possibly lost: 0 bytes in 0 blocks
==97==    still reachable: 16 bytes in 1 blocks
==97==         suppressed: 0 bytes in 0 blocks
==97== Reachable blocks (those to which a pointer was found) are not shown.
==97== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==97== 
==97== For counts of detected and suppressed errors, rerun with: -v
==97== Use --track-origins=yes to see where uninitialised values come from
==97== ERROR SUMMARY: 20 errors from 5 contexts (suppressed: 0 from 0)

```
```
Original: matches == true
Expanded: false == true
```


### ✓ - [1/1] - test_update_elem_1

- **Points**: 1 / 1

```
==99== Memcheck, a memory error detector
==99== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==99== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==99== Command: ./test -r xml "test_update_elem_1"
==99== 
==99== 
==99== HEAP SUMMARY:
==99==     in use at exit: 0 bytes in 0 blocks
==99==   total heap usage: 1,869 allocs, 1,869 frees, 236,968 bytes allocated
==99== 
==99== All heap blocks were freed -- no leaks are possible
==99== 
==99== For counts of detected and suppressed errors, rerun with: -v
==99== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_update_elem_2

- **Points**: 1 / 1

```
==101== Memcheck, a memory error detector
==101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==101== Command: ./test -r xml "test_update_elem_2"
==101== 
==101== 
==101== HEAP SUMMARY:
==101==     in use at exit: 0 bytes in 0 blocks
==101==   total heap usage: 1,870 allocs, 1,870 frees, 237,036 bytes allocated
==101== 
==101== All heap blocks were freed -- no leaks are possible
==101== 
==101== For counts of detected and suppressed errors, rerun with: -v
==101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_update_elem_3

- **Points**: 1 / 1

```
==103== Memcheck, a memory error detector
==103== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==103== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==103== Command: ./test -r xml "test_update_elem_3"
==103== 
==103== 
==103== HEAP SUMMARY:
==103==     in use at exit: 0 bytes in 0 blocks
==103==   total heap usage: 1,871 allocs, 1,871 frees, 237,160 bytes allocated
==103== 
==103== All heap blocks were freed -- no leaks are possible
==103== 
==103== For counts of detected and suppressed errors, rerun with: -v
==103== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_update_elem_4

- **Points**: 1 / 1

```
==105== Memcheck, a memory error detector
==105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==105== Command: ./test -r xml "test_update_elem_4"
==105== 
==105== 
==105== HEAP SUMMARY:
==105==     in use at exit: 0 bytes in 0 blocks
==105==   total heap usage: 1,871 allocs, 1,871 frees, 237,208 bytes allocated
==105== 
==105== All heap blocks were freed -- no leaks are possible
==105== 
==105== For counts of detected and suppressed errors, rerun with: -v
==105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - test_update_elem_5

- **Points**: 1 / 1

```
==107== Memcheck, a memory error detector
==107== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==107== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==107== Command: ./test -r xml "test_update_elem_5"
==107== 
==107== 
==107== HEAP SUMMARY:
==107==     in use at exit: 0 bytes in 0 blocks
==107==   total heap usage: 1,874 allocs, 1,874 frees, 238,716 bytes allocated
==107== 
==107== All heap blocks were freed -- no leaks are possible
==107== 
==107== For counts of detected and suppressed errors, rerun with: -v
==107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---