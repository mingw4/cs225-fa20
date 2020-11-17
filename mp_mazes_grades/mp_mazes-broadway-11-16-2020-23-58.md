---

This report was generated for **mingw4** using **0c8e7d0df420569298b2b7541573f88d7f5f5f8c** (latest commit as of **November 16th 2020, 11:58 pm**)

---




## Score: 0/0 (0.00%)


### ✗ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
maze.cpp:137:1: fatal error: control reaches end of non-void function [-Wreturn-type]
}
^
1 error generated.
make: *** [.objs/maze.o] Error 1

```
```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c dsets.cpp -o .objs/dsets.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c maze.cpp -o .objs/maze.o

```


---