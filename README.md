# Optimized recursive way to get Fibanacci's numbers

The tiniest way to get Fibanacci's number by the index is recursive functions but also it is very time consuming even with the highest level of optimisation.

# Idea of overcoming lack of time

To solve time issue I decided to create local indexed row of Fibanacci's numbers. Right after function enters base it adds new values to the ```std::list<long long>``` container which iterators are the ```this.second``` of ```std::map<int, std::list<long long>::iterator>```. Before pushing new value ```map``` is checked for elements that have the same index(and new value is not pushed if there is such).

## Details to now at the start

### Makefile instructions

To create object and executable files for the optimesed recursive solution

```
make fib.out
```
To create optimised executable(object files are removed after linking)
```
make / make all
```
To delete all, but source files
```
make clean
```
To execute compiled program and test it with fixed testfile.
```
make test
```

### Defaults

By default there is no output, but ```getFibNum()``` function actually returns values of ```FibanaciNumber``` structure.

Both executables runs ```getFibNum()``` in cycle from 0 to 40. It is made to show comparison resaults.

### Unreachable values

By now type for numbers is ```long long```(```long long int```) and according to tests can only reach 92nd Fibanacci's number.

# What to do next
## Infinity is not a limit

Find a way to get for 150th Fibanacci's number.(highest is 93rd reached with ```unsigned long long```)(string calculator???)

## Test better

Make randomly created testfile
