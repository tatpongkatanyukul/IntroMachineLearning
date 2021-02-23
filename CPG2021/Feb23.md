# Feb 23rd, 2021

Tuesday: lecture session
Thursday: hand-on session

TA:
	Group: ComProgramming2021-ENKKU
		Specify "Section 5" when ask a question!
	Messenger: Ball JP, 	โจ้ มีไม้โท
	email: chakkawat_so@kkumail.com, jaruwak@kkumail.com
	(Please do only one channel at a time.)



Last time, we have learned:
============================


* Selections
	+ if
	+ if-else
	+ flowchart
	+ logical operators: &&, ||, !
	

Today:
============

* ```if (x == 0)``` vs ```if (x = 0)```
* ```if (70 < x < 80)``` vs ```if (70 < x && x < 80)```


Left Over
==============

** Limitations of int
 [-2147483648, 2147483647]

        https://en.cppreference.com/w/cpp/language/types

** Limitations of float
        (-3.4e+038, -1.4013e-045), 0, (1.4013e-045, 3.4e+038)

    int x;
    cout << "x = " << x << endl;
    cout << "size of " << sizeof(x) << endl;
    cout << "size of " << sizeof(int) << endl;


* Iterations
	+ while / do-while
	+ for
	
* Functions
	+ header file / library
	+ passed by reference
	
* Strings
* Arrays
* File I/O


CPG Journey
=============

* Introduction and computer system <-- Done. Week 1
* Basic file system, OS, and system commands <-- Done. Week 2 
* Development Tools <-- Done. Week 3
* Our First Program <-- Done. Week 4/Jan 12
* Solid foothold on cout <-- Done. Week 4/Jan 14
	+ How to use C++ reference <-- Done. Week 4/Jan 14
* Variables and Assignments <-- Done. Week 5/Jan 19
* Input/Output <-- Done. Week 5/Jan 19
	(L000 & Autolab) <-- Done. Week 5/Jan 21
	+ Expression: + - * int/int % float(/) <-- Done. Week 6/Jan 26
	+ Debugging <-- Done. Week 6/Jan 28 
	+ Float: casting, operation, precedence, display <-- Done. Week 6/Jan 28 
* Selections
	+ if <-- Done. Week 7/Feb 4
	+ bool <-- Done. Week 7/Feb 4
	+ if-else <-- Done. Week 8/Feb 9
	+ ```if x == 0``` vs ```if x = 0``` <-- Done. Week 9/Feb 23
	+ ```if (70 < x < 80)``` vs ```if( (70 < x) && (x < 80) )``` <-- Done. Week 9/Feb 23
	+ char
* Iterations
* Functions
	+ Inuition (Turtle)
	+ Practice
	+ User-defined library
* Strings
* Arrays
* File I/O
* (Extra, if time allows)


Tentative Plan (Instructor Only)
==================================

# Week 5: Jan 19th, 2021
# Week 5: Jan 21st, 2021


* variables / int
	* declaration
	* assignment
	* input

* Autolab L000

# Week 6: Jan 26th, 2021
# Week 6: Jan 28th, 2021

* assignment: x = x op v
* debugging
* float

* Autolab L000 & L001

# Week 7: Feb 2nd, 2021
# Week 7: Feb 4th, 2021

* ! overflow
	* representation limitation

* Peek into functions
	* standard cmath
	* caveman's turtle / user-defined simple function

* Autolab L002 (Assignments)

# Week 8: Feb 9th
# Week 8: Feb 11th

* selections
* boolean (intro slide)
* if
* boolean operators: &&, ||, !
* familiarize with if statements
* flowchart

* if else
* familiarize with if-else statements
	* if vs if-else

* Autolab L003: (Simple Functions)

* Autolab Mockup MTE


KKU MTE Feb 15-19
==================================

# Week 9: Feb 23
# Week 9: Feb 25

* nested selections
* familiarize with nested selections
* switch/CANCELED
* familiarize with switch/CANCELED

* character (intro slide)
* Familiarize with characters
* const (intro slide) 
* peek into string 
	just string assignment
	<cstring>: C-style strings w/ null-terminated arrays of characters.
	<string>: C++ w/ std::string



* Iterations
* for loop
* flowchart
* familiarize with for loop
* Autolab HW: if/if-else/switch/for

* while loop
* do while loop
* break/continue
* COMMENT AGAINST GOTO
* familiarize with while-loop
* Autolab HW: for/while/do-while

* functions
	* standard libraries: cmath, cstdlib
		* random/seed
* user-defined functions
	* declaration/definition
* local variables
* pass by value
* Autolab Mocking Test


* user-defined function
* pass by reference

* Strings
  getline (std::cin, name); // This works
  std::cin >> name; // This does not work!

* Autolab: pass by reference/strings

# Week 10: Mar 2
* Arrays
* familiarize with arrays

# Week 10: Mar 4
* ?linear search
* ?sort array
* Autolab: array

# Week 11: Mar 9
* 2D array 
* familiarize with 2D

# Week 11: Mar 11
* 3D array
* Autolab: array

# Week 12: Mar 16
* File I/O

# Week 12: Mar 18

# Week 13: Mar 23
# Week 13: Mar 25

# Week 14: Mar 30
# Week 14: Apr 1

# Week 15: Apr 6
# Week 15: Apr 8

# Week 16: Apr 13
# Week 16: Apr 15 (last class)


