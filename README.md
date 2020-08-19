# Assignment One - Source code and algorithm outline. 

## Question One:
1. Start
2. Declare char variable named `grade`.
3. Declare int variable named `maxScore` and assign the maxScore a student can get.
4. Declare double variable named `percentage` and `userScore`.
5. Ask user to enter score and assign score to `userScore`
6. If `userScore` is greater OR equal to 0 AND `userScore` less than or equal to 59.99.
    - 5.1: Divide userScore by maxScore then times by 100.
    - 5.2: Assign result to percentage 
7. If `percentage` is greater OR equal to 0 AND `percentage` is less or equal to 59.99
    - 6.1: Assign variable `grade` with character `F`
8. If `percentage` is greater OR equal to 60 AND `percentage` is less or equal to 69.99
    - 7.1: Assign variable `grade` with character `D`
9. If `percentage` is greater OR equal to 70 AND `percentage` is less or equal to 79.99
    - 8.1: Assign variable `grade` with character `C`
10. If `percentage` is greater OR equal to 80 AND `percentage` less or equal to 89.99
    - 9.1: Assign variable `grade` with character `B`
11. If `percentage` is greater OR equal to 90 AND `percentage` less or equal to 100
    - 10.1: Assign variable `grade` with character `A`
12. If `userScore` is greater than `maxScore` 
    - 11.1: Print "Score is greater than `maxScore`
13. If `userScore` is not greater than `maxScore`
    - 12.1: Print "You have passed with `percentage`%, and received a grade `grade`
14. Stop

## Question Two:
1. Start
2. Define a constant above function using `#define LITE_OF_PETROL` assign one liter of petrol number in gallons.
3. Declare three double variables `petrolConsumed`, `milesPerGallon`, `milesTravelled`
4. Ask user to enter in `petrolConsumed` and `milesTravelled`.
5. If `petrolConsumed` or `milesTravelled` is less than 0 (in the negatives)
    - Then return error message and exit program
6. Assign `milesPerGallon` to the calculations of `milesTravelled / petrolConsumed / literOfPetrol`
7. Print out the data and set the decimal points to 3
8. Stop

## Question Three:
1. Start 
2. Declare two float variables `startValue` and `endValue`
3. Ask user to enter start value 
4. Assign user input to `startValue`
5. Ask user to enter in end value
6. Assign user input to `endValue`
7. for loop declare and assign index `count` to `startValue` 
8. for count is less than or equal to end value
    - if `count` is greater than 0 AND `count` less than 5 
        - case `count` equals 0 
            - print "zero"
        - case `count` equals 1
            - print "one"
        - case `count` equals two
            - print "two"
        - case `count` equals three
            - print "three"
        - case `count` equals four
            - print "four"
        - case `count` equals five
            - print "five"
        - default 
            - print "Number not between one and five" 
    - else
        - if number is dividable by 2
            - print "odd"
        - else
            - print "even"
9. Stop

## Question Four: 
1. Start,
2. Declare `numbers` array of integers with length of 3,
3. Ask user to input numbers and push them to `numbers` array,
4. Sort `numbers` in ascending order using `sort` function,
5. Print out header text `Ascending order:` for user,
6. Loop through `numbers` and print each number which has been sorted by `sort` function,
7. Sort `numbers` in descending order using `sort` function,
8. Print out header text `Descending order:` for user,
9. Loop through `numbers` array and print out each number which has been sorted by `sort` function in descending order,
10. Stop