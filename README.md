`test0` uses recalcuation in an attempt to save resources. `test1` calculates directly.

You can run these tests by:
- compiling with GCC (`gcc -o test# test#.c dtol.c` where `#` is replaced with either `0` or `1`),
- running either test (`./test1 x y` where `x` and `y` are replaced with doubles and where the sum of `x` and `y` is a number between `1e16` and `1e19`)