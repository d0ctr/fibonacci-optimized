# Optimized recursive way to get Fibanacci's numbers

The tiniest way to get Fibanacci's number by the index is recursive functions6 but also it is very time consuming even with thehighest level of optimisation.

# Idea of overcoming lack of time

To solve time issue I decided to create local indexed row of Fibanacci's numbers. Right after function enters base it adds new values to the ```std::list<long long>``` container which iterators are the ```this.second``` of ```std::map<int, std::list<long long>::iterator>```. Before pushing new value ```map``` is checked for elements that have the same index(and new value is not pushed if there is such). 

## Details to now at the start

### Makefile instructions

To create object and executable files for the optimesed recursive solution

```
make kursach.out
```
To create optimised and non-optimised executables(object files are removed after linkink)
```
make / make all
```
To delete all, but source files
```
make clean
```
To compare time of optimised and non-optimised executables(non-optimised, is actually compiled with ```-O3``` optimisation level)
```
make compare
```

### Defaults

By default there is no output, but ```gitFibNum()``` function actually returns values of ```FibanaciNumber``` structure.

Both executables runs ```getFibNum()``` in cycle from 0 to 40. It is made to show comparison resaults.

### Unreacheble values

By now type for numbers is ```long long```(```long long int```) and according to tests can only reach 92nd Fibanacci's number.

# What to do next
## Infinity is not a limit

Find a way to get for 150th Fibanacci's number.(highest is 93rd reached with ```unsigned long long```)(string calculator???)

## Made for users

Create user's text-based interface with commands that return requested numbers, row(known row, row to requested index and row from one position to other)

## Get signed

Modernize function to get numbers from negative indexes
