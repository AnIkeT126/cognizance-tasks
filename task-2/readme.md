
## DEBUGGING DERBIES
# WORK FLOW

As I looked at the code, first error was identified in first few lines only where one of the many header files were commented and I immediately umcommented **import java.awt.Font** without even compiling it.

Then one fucntion name **questionLabel** was not used as the same in the later stages of the program and hence I was supposed to change it. 
Then I compiled it and the rest of the errors were eliminated by adding **;** as the statement terminator and **()** against a function.

Then I renamed *public class Mathjava* as *public class Main()* to remove some unexpected errors for which [google](https://www.google.com/) was a great help and in a simliar way I changed *Mathjava* to *Main* in public static void declaration i.e the declaration of the main function.

Also, a major change was that we have to get  a opearotr runnnig as user wants and it shouldnot change after n attempts which it was initally.

And after such few changes the **code was compiled successfully**.

[**OUTPUT-1**](https://github.com/AnIkeT126/cognizance-tasks/blob/main/task-2/OUTPUT-1.png)

[**OUTPUT-2**](https://github.com/AnIkeT126/cognizance-tasks/blob/main/task-2/OUTPUT-2.png)
