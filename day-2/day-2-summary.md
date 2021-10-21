## Data Types, Variables, and Constants

### Variables
The general syntax for declaring variables is:
```c
<data_type> <var_name>; // variable declaration

<data_type> <var_name> = <value>; // assigning values to variable
```

### Common Data Types
|Type| Description| Format Specifier|
|-----|-----|-----|
|int|integer| %d (integer in the decimal system, use %kd when you need a width of k)|
|float|single-precision floating point number| %f (%.kf where you need k digits after the decimal point)|
|double|double-precision floating point number| %f (%.kf where you need k digits after the decimal point)|
|char| character| %c|

### Constants
When you don't want a variable to be modified during the course of the program, you should declare it as a constant
- Using `#define`
```c
#define ID 204

#define ID 207 //this compiles without errors :/ 
```
- Although you'd like `ID` to be a constant, it's in some sense not *completely constant* as you can redefine its value

- Using `const` keyword
```c
const int id = 204; //cannot re-define elsewhere
```
- Using the `const` keyword renders `id` as a read-only variable, so you cannot modify it elsewhere in the program
- And trying to do so will raise errors

### Naming conventions
- Names of constants are usually in upper case
```c
#define PI 3.14159
```
- Variable and function names should be descriptive
```c
float calc_total(float bill_amt, float tip_perc)
{
  float total;
  total = bill_amt( 1 + tip_perc * 0.01);
  return total;
}
```
