
all:
	python setup.py build_ext --inplace
	gcc cfib.c cfib.h main.c -o cfib

clean:
	rm -rf build fib.html fib.c *.so
	rm fib_orig.html
