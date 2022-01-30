TASK #5

Try to solve tasks above using all kind of loop.
Make a note of which loop works best for each task.

-----
-----

TASK #1
 * Write a program to print the full lyrics of '99 Bottles of Beer' song.

FIRST TRY: WHILE LOOP

WHILE
 * While version of this task is quite simple,
 * but decrementation is hidden in displaying text
 * what can make troubles for code review.
 * I decided to move to last lines out of the loop block
 * to avoid using conditionals.
 * I'm afraid this makes code less scalable,
 * but I don't have to worry about that in this task.

DO-WHILE
 * I just changed place of while conditional
 * and added do on the beggining of the loop.
 * In this task while and do-while work very similar.
 * Thanks to predecrementation there is no problem
 * with exiting do-while in a proper time.

FOR
 * For loop works good for this task.
 * I had to make 3 level conditional check to print whole correctly
 * instead of no conditional in while-loop version,
 * but I think it is better readable and whole program is closed
 * in one block of loop code.

-----
-----

TASK #2
 * Write a program that provides a menu, which allows user to make a choice from different options.
 * If user's choice is not compatible with any option, display menu again.

FIRST TRY: INFINITE WHILE LOOP

WHILE
 * Using infinite while loop was the first thing I had in my mind
 * while solving this task. 
 * Infinite loop is a riskful tool, but after adding quit instruction
 * there is no fear to make it real.
 * There is only one line outside of loop body what is good for scalability.

DO-WHILE
 * One more time there is nothing surprising in changing while loop to do-while loop.
 * There is a little more of code to write and I had to scroll down to knwo that I used
 * an infinite loop.
 * On the other hand do-while could be better for menu-type programs as there is a guarantee
 * that the menu will be displayed at least once no matter what.

FOR
 * I did not decided to modify anything of the engine of this code.
 * Just changed infinite while loop with infite for loop (empty for header).
 * It is working in the same way, but it can be a little more confusing,
 * for not experienced programmer.
 * I remember when a few years later my friend showed me this tricky way
 * of infinite loop and I did not know what was happening.
 * I think it is not the best to write an infinite loop, because there is a need
 * of know how the for loop works when it is empty.
 * It is not obvious and less readable.

-----
-----

TASK #3
 * Write a program to calculate cumulative sum of numbers given from user
 * which finish running after user input 0.

FIRST TRY: DO-WHILE LOOP

DO-WHILE
 * Using do-while here gives an opportunity to fit all the logic
 * in the loop body.
 * If using an if-statement inside of loop there would be no need
 * to use any code outside.

FOR
 * There was no need to make a big modification to run this task
 * using a for loop, but I think this kind of structure is not
 * designed for that.
 * It is working good but looking tricky and strange in my opinion.

WHILE
 * This example show that modifying do-while loop into while
 * is not as fact as the opposite.
 * I had to changing double variable declaration
 * into declaration with initialization and add a little trick
 * with start value of user input (uInput = 1) to make the it works
 * at least once no matter what.
 * So do-while is more comfortable in this task.

-----
-----

TASK #4
 * Write a program for password verification
 * which gives a user only a few chances for
 * input the correct password thanks to using
 * a password cracker would be more difficult.

FIRST TRY: FOR LOOP

FOR
 * For loop is good for this task as I can keep all control instruction in one line.
 * It is very readable and easy to modify without looking for variables inside of loop body.

DO-WHILE
 * After changing for-loop version into while-loop, making a do-while-loop version was simply as fuck.
 * I just moved conditional to the end of the loop body, wrote 'do' at the beginning and did not need
 * to worry about the rest.

WHILE
 * It is not hard to do to modify this program to use while-loop insead of for loop.
 * There is a need to declare and initialize an iterator variable outside of the loop body
 * and remember to decrement it in the proper time.
 * 
 * I did predecrementation one more time what can be confusing and hard to find in the review
 * but it is working and I saved some bytes of code.