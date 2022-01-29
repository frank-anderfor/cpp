/*
 * TASK #3
 * Try to comment out individual lines of code of the first program.
 * Check if program can successfully compile withouth them
 * Look at error's messages - does they make any sense?
 * Do you know why these errors happened after code modifications?
 */

#include <iostream>
// task_3.cpp: In function ‘int main()’:
// task_3.cpp:15:5: error: ‘cout’ was not declared in this scope
//    15 |     cout << "Your name is Frank" << endl;
//       |     ^~~~
// task_3.cpp:1:1: note: ‘std::cout’ is defined in header ‘<iostream>’; did you forget to ‘#include <iostream>’?
//   +++ |+#include <iostream>
//     1 | /*
// task_3.cpp:15:37: error: ‘endl’ was not declared in this scope
//    15 |     cout << "Your name is Frank" << endl;
//       |                                     ^~~~
// task_3.cpp:1:1: note: ‘std::endl’ is defined in header ‘<ostream>’; did you forget to ‘#include <ostream>’?
//   +++ |+#include <ostream>
//     1 | /*

// I think that 'cout' and 'endl' cannot be resolved without including <iostream> library;
// It seems like these functions are included in it. It should make sense...

using namespace std;
// task_3.cpp: In function ‘int main()’:
// task_3.cpp:31:5: error: ‘cout’ was not declared in this scope; did you mean ‘std::cout’?
//    31 |     cout << "Your name is Frank" << endl;
//       |     ^~~~
//       |     std::cout
// In file included from task_3.cpp:9:
// /usr/include/c++/9/iostream:61:18: note: ‘std::cout’ declared here
//    61 |   extern ostream cout;  /// Linked to standard output
//       |                  ^~~~
// task_3.cpp:31:37: error: ‘endl’ was not declared in this scope; did you mean ‘std::endl’?
//    31 |     cout << "Your name is Frank" << endl;
//       |                                     ^~~~
//       |                                     std::endl
// In file included from /usr/include/c++/9/iostream:39,
//                  from task_3.cpp:9:
// /usr/include/c++/9/ostream:599:5: note: ‘std::endl’ declared here
//   599 |     endl(basic_ostream<_CharT, _Traits>& __os)
//       |     ^~~~

// It seems like 'cout' and 'endl' have to have a std:: prefix to run correctly, when there is no using of 'std' namespace;

int main()
// task_3.cpp:50:1: error: expected unqualified-id before ‘{’ token
//    50 | {
//       | ^

// This is more enigmatic to me at my actual level.
// Well, it does not tell my why, but it seems like there is no way to run
// any block of code without function 'main'. I hope, I'm right...

{
// task_3.cpp:58:5: error: expected initializer before ‘cout’
//    58 |     cout << "Your name is Frank" << endl;
//       |     ^~~~
// task_3.cpp:59:1: error: expected declaration before ‘}’ token
//    59 | }
//       | ^

// So there are 2 different errors without any connection.
// What is an initializer? What is declaration?

    cout << "Your name is Frank" << endl;
// No errors. We need no program to compile and run a program.

}
// task_3.cpp: In function ‘int main()’:
// task_3.cpp:69:41: error: expected ‘}’ at end of input
//    69 |     cout << "Your name is Frank" << endl;
//       |                                         ^
// task_3.cpp:58:1: note: to match this ‘{’
//    58 | {
//       | ^

// These error is a very clear one. I just have to close every open bracket.