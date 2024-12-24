# Menu-Driven-Loops-and-Algorithms-Program

## What I need to do
- Create a menu-driven program which makes use of the following types of loops as appropriate: 
  while, do-while, for, for-each. You need to use each specific loop type at least once in the 
  assignment.  
- Your program should present the user with the following options: 
  • Option A: Your program must output the following sequence (the number of terms in 
    the sequence is given by the user): 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 (Fibonacci 
    number1) 
  • Option B: Your program must calculate the sum of 𝑛 Fibonacci numbers (𝑛 is given by 
    the user) 
  • Option C: Your program must accept a string from the user and use it to create and 
    output a palindrome2. For example: 
    ◦ if the user enters the string “race”, your program must output “racecar” 
    ◦ If the user enters the string “ten”, your program must output “tenet” 
    ...and so forth. 
  • Option X: The program must exit 

## 2024-12-23
- I have to test the Fibonacci sequence using recursive function 
- When using the fibonacci to use in the array, in order for the value to change there should the initial value adding the i (conditioner)
- for(int i = 0; i < intValue; i++>)
  {
    intSequence[i] = fibonacci(intValue + i);
  }
- For each loop was used for the palindrome
- A for each loop is used to loop through elements in an array or other data strucutes
- for(dataType variableName : arrayName){}
- eg    int intNumbers[5] = {10, 20, 30, 40, 50};
        for(int i : myNumbers)
        {
            cout << i << endl;
        }

## 2024-12-23
- During the creation of option c, the palindrome I had to use a for each loop but the problem I was facing was that a for each loop only traverses
  forward so when adding to the word from the front.
- In order to combat this I used this module called std::reverse_iterate which iterates from the back using rbegin() and rend().
