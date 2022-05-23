---

This report was generated for **mingw4** using **9735e8e206cd6768854a2a27663ee45477e7ced4** (latest commit as of **November 8th 2020, 11:07 am**)

---




## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
.objs/tests/test_part2.o: In function `____C_A_T_C_H____T_E_S_T____10()':
/job/studentFiles/tests/test_part2.cpp:212: undefined reference to `SquareMaze::solveMaze()'
.objs/tests/test_part2.o: In function `____C_A_T_C_H____T_E_S_T____12()':
/job/studentFiles/tests/test_part2.cpp:232: undefined reference to `SquareMaze::solveMaze()'
.objs/tests/test_part2.o: In function `____C_A_T_C_H____T_E_S_T____14()':
/job/studentFiles/tests/test_part2.cpp:248: undefined reference to `SquareMaze::solveMaze()'
.objs/tests/test_part2.o: In function `helpSolveMaze(MazeReader const&)':
/job/studentFiles/tests/test_part2.cpp:268: undefined reference to `SquareMaze::solveMaze()'
.objs/tests/test_part2.o: In function `____C_A_T_C_H____T_E_S_T____26()':
/job/studentFiles/tests/test_part2.cpp:331: undefined reference to `SquareMaze::solveMaze()'
.objs/tests/test_part2.o:/job/studentFiles/tests/test_part2.cpp:344: more undefined references to `SquareMaze::solveMaze()' follow
clang-6.0: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [test] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c dsets.cpp -o .objs/dsets.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c maze.cpp -o .objs/maze.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part1.cpp -o .objs/tests/test_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2.cpp -o .objs/tests/test_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/mazereader.cpp -o .objs/tests/mazereader.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/dsets.o .objs/maze.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/test_part1.o .objs/tests/test_part2.o .objs/tests/mazereader.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


---