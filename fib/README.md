# Fibonacci Tutorial

## Compiling:

* Mac / Linux
```
python setup.py build_ext --inplace
```
This is also included in the makefile.


* Windows
```
python setup.py build_ext --inplace -c mingw32
```

I'm not exactly sure what `hand_fib_setup.py` means.

## Profiling with annotations (slide 22)

```
cython -a fib_orig.pyx
open fib_orig.html
```
