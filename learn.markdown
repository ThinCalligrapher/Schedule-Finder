# Things that I have learned
## IO stream
- Use the <iomanip> library to use <std::cout << std::setprecision(value)> to set how many sig figs
- use <std::cout << fixed << setprecision(how_many)> to get a fixed floating point representation
- We also have <std::getline(_which-stream_, string variable)> 
- this can have issues so we need to, if its after cin, use std::cin.ignore() to ignore the hanging new line
- and int <b = std::stoi(string)> to convert a string to an integer
-<std::boolaplha> to change your booleans to true/false!! <std::noboolalpha> reverse

### sizeof() will give us the size of a variable in bytes

## increments
-you can increment inside of pretty much anything!

## std::setprecision() and static_cast<type>
- setprecision is found in the iomanip library
- you can use <std::cout << fixed << setprecision(x)> to set a fixed amount of decimals
- staticcast needs the () after to cast that one specific variable! keep in mind the inside variable is evaluated then cast

## compound operators
- += *= /= %= -=

## comparison operators
- <, >, <=, >= == != 
- we want to put parenthesis around or comparisons to keep things clean

## logical operators
- <&&> and
- <||> or
- <!> not

## output formatting
- <ios> and <iomanip>
- <std::endl;> flushed stream but we can use </n> for now
- <std::flush> sends whatever is in output buffer to terminal! does not make a new line?
    - the output stream holds values until its full or a time has passed, then the terminal is flushed automatically
- <std::setw(int width)> specifies width of text you want to print
    - std::cout << std::setw(col_width) << output << std::endl;
- <std::setfill(-)> sets - as the spaces from setw
- <std::left/right/internal>
- <std::showpos> / <std::noshowpos> shows + and - always
- <std::dec> <std::hex> <std::oct> <std::showbase> - shows base of number system <std::uppercase>
# Things that I have learned
## IO stream
- Use the <iomanip> library to use <std::cout << std::setprecision(value)> to set how many sig figs
- use <std::cout << fixed << setprecision(how_many)> to get a fixed floating point representation
- We also have <std::getline(_which-stream_, string variable)> 
- this can have issues so we need to, if its after cin, use std::cin.ignore() to ignore the hanging new line
- and int <b = std::stoi(string)> to convert a string to an integer
-<std::boolaplha> to change your booleans to true/false!! <std::noboolalpha> reverse

### sizeof() will give us the size of a variable in bytes

## increments
-you can increment inside of pretty much anything!

## std::setprecision() and static_cast<type>
- setprecision is found in the iomanip library
- you can use <std::cout << fixed << setprecision(x)> to set a fixed amount of decimals
- staticcast needs the () after to cast that one specific variable! keep in mind the inside variable is evaluated then cast

## compound operators
- += *= /= %= -=

## comparison operators
- <, >, <=, >= == != 
- we want to put parenthesis around or comparisons to keep things clean

## logical operators
- <&&> and
- <||> or
- <!> not

## output formatting
- <ios> and <iomanip>
- <std::endl;> flushed stream but we can use </n> for now
- <std::flush> sends whatever is in output buffer to terminal! does not make a new line?
    - the output stream holds values until its full or a time has passed, then the terminal is flushed automatically
- <std::setw(int width)> specifies width of text you want to print
    - std::cout << std::setw(col_width) << output << std::endl;
- <std::setfill(-)> sets - as the spaces from setw
- <std::left/right/internal>
- <std::showpos> / <std::noshowpos> shows + and - always
- <std::dec> <std::hex> <std::oct> <std::showbase> - shows base of number system <std::uppercase>
- <std::scientific> <std::fixed> changes the way permanently the way we see values
- set floating point output to default std::cout.unsetf(std::ios::scientific | std::ios::fixed);
- <std::showpoint> shows decimal point
 - <https://en.cppreference.com/w/cpp/io/manip>

 ## limits
 - <limits>
 - std::numeric_limits<type>::max/min/lowest()

 ## math functions
 - <cmath>
 - std:: --- floor, ceil, abs, exp, log, cos, pow, sqrt, round, sin, tan()...
 - <weight> and <floor> round a float
 - <exp(x)> = e^x
 - <log> is in base e,# Things that I have learned
## IO stream
- Use the <iomanip> library to use <std::cout << std::setprecision(value)> to set how many sig figs
- use <std::cout << fixed << setprecision(how_many)> to get a fixed floating point representation
- We also have <std::getline(_which-stream_, string variable)> 
- this can have issues so we need to, if its after cin, use std::cin.ignore() to ignore the hanging new line
- and int <b = std::stoi(string)> to convert a string to an integer
-<std::boolaplha> to change your booleans to true/false!! <std::noboolalpha> reverse

### sizeof() will give us the size of a variable in bytes

## increments
-you can increment inside of pretty much anything!

## std::setprecision() and static_cast<type>
- setprecision is found in the iomanip library
- you can use <std::cout << fixed << setprecision(x)> to set a fixed amount of decimals
- staticcast needs the () after to cast that one specific variable! keep in mind the inside variable is evaluated then cast

## compound operators
- += *= /= %= -=

## comparison operators
- <, >, <=, >= == != 
- we want to put parenthesis around or comparisons to keep things clean

## logical operators
- <&&> and
- <||> or
- <!> not

## output formatting
- <ios> and <iomanip>
- <std::endl;> flushed stream but we can use </n> for now
- <std::flush> sends whatever is in output buffer to terminal! does not make a new line?
    - the output stream holds values until its full or a time has passed, then the terminal is flushed automatically
- <std::setw(int width)> specifies width of text you want to print
    - std::cout << std::setw(col_width) << output << std::endl;
- <std::setfill(-)> sets - as the spaces from setw
- <std::left/right/internal>
- <std::showpos> / <std::noshowpos> shows + and - always
- <std::dec> <std::hex> <std::oct> <std::showbase> - shows base of number system <std::uppercase>
- <std::scientific> <std::fixed> changes the way permanently the way we see values
- set floating point output to default std::cout.unsetf(std::ios::scientific | std::ios::fixed);
- <std::showpoint> shows decimal point
 - <https://en.cppreference.com/w/cpp/io/manip>

 ## limits
 - <limits>
 - std::numeric_limits<type>::max/min/lowest()

 ## math functions
 - <cmath>
 - std:: --- floor, ceil, abs, exp, log, cos, pow, sqrt, round, sin, tan()...
 - <weight> and <floor> round a float
 - <exp(x)> = e^x
 - <log> is in base e, there is log10() as well



 there is log10() as well



- <std::scientific> <std::fixed> changes the way permanently the way we see values
- set floating point output to default std::cout.unsetf(std::ios::scientific | std::ios::fixed);
- <std::showpoint> shows decimal point
 - <https://en.cppreference.com/w/cpp/io/manip>

 ## limits
 - <limits>
 - std::numeric_limits<type>::max/min/lowest()

 ## math functions
 - <cmath>
 - std:: --- floor, ceil, abs, exp, log, cos, pow, sqrt, round, sin, tan()...
 - <weight> and <floor> round a float
 - <exp(x)> = e^x
 - <log> is in base e, there is log10() as well




