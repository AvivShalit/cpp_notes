//
//  main.cpp
//  Test2
//
//  Created by Aviv Shalit on 25/08/2022.
//

#include "main2.hpp"
#include "main.h"



/*Fix the errors and get an error free compilation and execution.*/

/*
int main()
{
    int coeff1, coeff2, constant;
    int exp1, exp2;
    int y;
    int x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout<<"What is the first coefficient?";
    std::cin>>coeff1;
    std::cout<<coeff1<<"\n";
    std::cout<<"What is the exponent of the first term?";
    std::cin>>exp1;
    std::cout<<exp1<<"\n";
    std::cout<<"What is the second coefficient?";
    std::cin>>coeff2;
    std::cout<<coeff2<<"\n";
    std::cout<<"What is the exponent of the second term?";
    std::cin>>exp2;
    std::cout<<exp2<<"n";
    std::cout<<"What is the constant?";
    std::cin>>constant;
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    std::cout<<"\t"<<coeff1<<"*x^"<<exp1<<" + "<<coeff2<<"*x^"<<exp2<<"+ "<<constant;
    std::cout<<"\nWhat is the value of x?";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    y = coeff1*std::pow(x,exp1) + coeff2*std::pow(x,exp2);
    std::cout << "y = "<<coeff1<<"*x^"<<exp1<<" + "<<coeff2<<"*x^"<<exp2<<"+ "<<constant<<" = "<< y ;
    return 0;
} */


/*
int main()
{

   char skin, location;
   cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
   cin>>skin;
   cout<<skin<<"\n";
   
   //Use if-else statements to control program flow
    if (skin == 'f') {
        std::cout<<"Get a dog"<<"\n";
    }
    else if(skin == 't'){
        std::cout<<"Get a bird"<<"\n";

    }
    if(skin == 's'){
        std::cout<<"Get a shark"<<"\n";

    }
   
   std::cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
   std::cin>>location;
   std::cout<<location<<"\n";
   
   //Use if-else statements to control program flow
    if (location=='w') {
           std::cout<<"Get a fish"<<"\n";

    }
    else if (location=='l'){
        std::cout<<"Get a gecko"<<"\n";

    }
    if (location=='b'){
        std::cout<<"Get a frog"<<"\n";

    }
   
   return 0;
}
*/


/*
int main()
{
    int menuItem = 1;
    
    std::cout<<"What is your favorite winter sport?: \n";
    std::cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    std::cout<<"\n4.Drinking hot chocolate\n";
    std::cout<<"\n\n";
    cin>>menuItem;
    
    switch(menuItem)
    {
        case(1): std::cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): std::cout<<"Sledding?! Sounds like work!\n";
                 break;
        case(3): std::cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): std::cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: std::cout<<"Enter a valid menu item";
    }
    
    char begin;
    std::cout<<"\n\nWhere do you want to begin?\n";
    std::cout<<"B. At the beginning?\nM. At the middle?";
    std::cout<<"\nE. At the end?\n\n";
    begin = 'M';
    cin>>begin;

    
    switch(begin)
    {
        case('B'): std::cout<<"Once upon a time there was a wolf.\n";
        case('M'): std::cout<<"The wolf hurt his leg.\n";
        case('E'): std::cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}
*/

/*
int main()
{
    float input;
    float sum = 0;

    for(int i=0;i<5;i++)
    {
        std::cout<<"What is the next number?\n";
        std::cin>>input;
        sum = sum + input;
    }//end of for loop

    std::cout<<"Sum = "<<sum<<"\n";
    std::cout<<"Average = "<<sum/5<<"\n";
    return 0;
}
*/


/*
int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;
    std::cout<<"Guess a number between 0 and 100: \n";
    std::cin>>guess;
    while (guess!=target) {
        if (guess < target) {
            std::cout<<"Your guess "<< guess<<" is smaller than the target \n";
            std::cout<<"Guess a larger number, a number between "<<guess<<" and 100: \n";
        }
        if(guess > target){
            std::cout<<"Your guess "<< guess<<" is larger than the target \n";
            std::cout<<"Guess a smaller number, a number between 0 and "<<guess<<": \n";
        }
        std::cin>>guess;
    }
    std::cout<<"You are correct, the number is indeed: "<<guess<<"\n";
    return 0;
}*/

/*
 int main()
 {
     int target;
     std::string userString;
     int guess = -1;

     srand(time(NULL));  //set the seed for the random number generator
     target = rand() %100 + 1; //generate the 'random' number

     while(guess != target)
     {
         std::cout<<"Guess a number between 0 and 100: ";
         std::getline (std::cin,userString);
         //convert to an int
         std::stringstream(userString) >> guess;
         std::cout<<userString<<"\n";
         if(guess > target)
             std::cout<<"Your guess is too high\n";
         else if(guess < target)
             std::cout<<"Your guess is too low\n";
         else
             std::cout<<"You guessed the target!\n";

         //Note I had to use double quotes around "q"
         //because it is a string
         if(userString == "q")
         {
             std::cout<<"good bye!";
             std::cout<<"The number was "<<target<<"\n";
             break;
         }
     }
     return 0;
 }
 */


/*
int main()
{
    int a = 0;
    while(a < 5)
    {
        std::cout<<"a = "<<a<<"\n";
        a++;
        if(a == 3)
            break;
    }
    std::cout<<"The first statement after the first while loop\n\n";
    
    
    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            std::cout<<"\tWhen a=10, go back to the top of the loop";
            std::cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";
    }
    return 0;
}
 */

// pointers and references

/*
 References
 When a parameter is declared as reference, it becomes an alternative name for an existing parameter.

 Type &newname=existing name;

 
 Pointers
 Pointer variables are used to store the address of variable.
 
 Type *pointer;
 Pointer=variable name;

 
 */

/*
int main()
{
    std::string name;
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt;
    int **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

   //Get the values of each variable
    std::cout<<"integer = \n";
    std::cin>>givenInt;
    std::cout<<"float = \n";
    std::cin>>givenFloat;
    std::cout<<"double = \n";
    std::cin>>givenDouble;
    //We need to use cin.ignore so cin will ignore
   //the characters in the buffer leftover
   //from the givenDouble
    std::cin.ignore();
    std::cout<<"character = \n";
    std::cin>>givenChar;

    std::cout<<"string = \n";
    std::cin.ignore();
    std::getline (std::cin,givenString);


    //The value stored in the data
    std::cout<<"integer = "<<givenInt<<"\n";
    std::cout<<"float = "<<givenFloat<<"\n";
    std::cout<<"double = "<<givenDouble<<"\n";
    std::cout<<"string = "<<givenString<<"\n";
    std::cout<<"character = "<<(char)givenChar<<"\n\n";

    //The address of the data - use pointers
    std::cout<<"address integer = "<<&givenInt<<"\n";
    std::cout<<"address float = "<<&givenFloat<<"\n";
    std::cout<<"address double = "<<&givenDouble<<"\n";
    std::cout<<"address string = "<<&givenString<<"\n";
    std::cout<< "address character = " << (void *) &givenChar<<"\n\n";

   //Use indirection to the get the value stored at the address
    std::cout<< "pointer of givenInt = " << *pointerGivenInt<<"\n";
    std::cout<< "pointer of pointer of givenInt = " << **pointerPointerGivenInt<< "\n";

    return 0;
} */

/*
int main ()
{
  int * pointerI;
  int number;
  char character;
  char * pointerC;
  std::string sentence;
  std::string *pointerS;
  
  pointerI = &number;
  *pointerI=45;
    
  pointerC = &character;
  *pointerC = 'f';
  
  pointerS = &sentence;
  *pointerS = "Hey look at me, I know pointers!";
  
  std::cout << "number = "<<*pointerI<<"\n";
  std::cout<<"character = "<<character<<"\n";
  std::cout<<"sentence = "<<sentence<<"\n";

  return 0;
}
*/

// Arrays

/*
 Declaration in C++:
 
 variableType arrayName [ ] = {variables to be stored in the array};
 OR
 variableType arrayName[array size];

 */
/*
int main()
{
     int userInput[10];

     //Enter the numbers into an array called userInput
     for(int i = 0; i < 10; i++)
     {
         scanf("%d", &userInput[i]);
     }
     //print the array
     std::cout<<"\nThe array\n";
     for(int i = 0; i < 10; i++)
     {
         std::cout << userInput[i] <<" ";
     }
     //print the array in reverse order
     std::cout<<"\n\nThe array in reverse order\n";
     for(int i = 9; i >= 0; i--)
     {
         std::cout << userInput[i] <<" ";
     }
     //sorting the array
      for(int i = 0; i < 10; i++)
     {
         for(int j = 0; j < 9 - i; j++)
             {
                 if(userInput[j] > userInput[j + 1])
                 {
                     int temp;
                     temp=userInput[j];
                     userInput[j]=userInput[j + 1];
                     userInput[j + 1]=temp;
                 }
             }
     }
    std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 10; i++)
    {
    std::cout << userInput[i] <<" ";
    }
    return 0;
}
*/

/*
int main()
{
    int searchKey = 0;
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    int location = 0;

    while(1)
    {
        std::cout<<"Enter an integer ('-1' to quit): ";
        scanf("%d", &searchKey);
        std::cout<< searchKey<<"\n";
        if(searchKey == -1)
        {
            break;
        }
        for(int i = 0; i < 10; i++)
        {
            if(searchKey == searchArray[i])
            {
                location = i;
                break;
            }
            location = -1;
        }
        if(location != -1)
        {
            std::cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            std::cout<<searchKey<<" is not in the array.\n";
        }
   }
    return 0;
}
*/


/*
int main()
{
    //array dimensions must be known at compile time
    //so I used const int to set the row and col numbers
    const int row = 4;
    const int col = 4;

    int arr[row][col];
    int vector[row], product[row];
    int sum;

    //get the values for the array from the user
    for(int i=0;i<row;i++)
        for(int j=0;j<row;j++)
        {
            std::cout<<"arr["<<i<<"]["<<j<<"] = \n";
            std::cin>>arr[i][j];
            //std::cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";
        }

    //getting the values for the vector from the user
    for(int i=0; i<row; i++)
    {
        std::cout<<"vector["<<i<<"] = \n";
        std::cin>>vector[i];
        //std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
    }
    sum = 0;

    for(int i=0;i<row;i++)
    {
        for(int j=0; j<row;j++)
        {
            sum = (arr[i][j] * vector[i]) + sum;
        }
        product[i] = sum;
        sum=0;
    }

    for(int i=0;i<row;i++)
    {
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
    return 0;
}
*/




// Functions

/*
void printMessage(int m1, int m2, int product); //note, this is placed BEFORE main()
void checkingPrintFunction();


int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;
    
    printMessage(m1, m2, product);
    checkingPrintFunction();
    return 0;
}


//note, the definition is conventionally placed after main
void printMessage(int m1, int m2, int product)
{
     std::cout << m1 <<"*"<< m2 <<" = "<<product << " \n";
 }

*/

// The second method for effecting variables outside of their scope, is to pass by reference.

/*
void increment(int &input); //Note the addition of '&'
void increment2(int input2);


int main()
{
    int a = 34;
    std::cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    std::cout<<"After the function call a = "<<a<<"\n";
    
    int b = 34;
    std::cout<<"Before the function call b = "<<b<<"\n";
    increment2(b);
    std::cout<<"After the function call b = "<<b<<"\n";
    
    return 0;
}
void increment(int &input)//Note the addition of '&'
{
    input++; //    Note the LACK OF THE addition of '&'
    std::cout<<"In the function call a = "<<input<<"\n";
}

void increment2(int input)
{
    input++;
    std::cout<<"In the function call a = "<<input<<"\n";
}
*/


/*
 C++ does not allow arrays to be passed to functions, but, as we have seen, it does allow pointers to be passed.


 There are three methods for passing an array by reference to a function:

    void functionName(variableType *arrayName)
    void functionName(variableType arrayName[length of array])
    void functionName(variableType arrayName[])

 */


/*

//Pass the array as a pointer
void arrayAsPointer(int *array, int size);
//Pass the array as a sized array
void arraySized(int array[3], int size);
//Pass the array as an unsized array
void arrayUnSized(int array[], int size);

int main()
{
    const int size = 3;
    int array[size] = {33,66,99};
    //We are passing a pointer or reference to the array
    //so we will not know the size of the array
    //We have to pass the size to the function as well
    arrayAsPointer(array, size);
    std::cout<<"Let's check if it got changed \n";
    for(int i=0; i<size; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";
    
    arraySized(array, size);
    std::cout<<"Let's check if it got changed \n";
    for(int i=0; i<size; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";
    
    arrayUnSized(array, size);
    std::cout<<"Let's check if it got changed \n";
    for(int i=0; i<size; i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"\n";

    return 0;
}

void arrayAsPointer(int *array, int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++){
        array[i] = array[i]+2;
        std::cout<<array[i]<<" ";}
    std::cout<<"\n";
}

void arraySized(int array[3], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++){
        array[i] = array[i]+2;
        std::cout<<array[i]<<" ";}
    std::cout<<"\n";
}

void arrayUnSized(int array[], int size)
{
    std::cout<<std::setw(5);
    for(int i=0; i<size; i++){
        array[i] = array[i]+2;
        std::cout<<array[i]<<" ";}
    std::cout<<"\n";
}

*/
/*
int search(int array[], int size, int searchKey);


int main()
{
    const int size = 4;
    int array[] = {345,75896,2,543};
    int searchKey = 75896;
    std::cout<<"Found at: "<<search(array, size, searchKey);
    std::cout<<"\n";
    return 0;
}

int search(int array[], int size, int searchKey){
    for(int i=0; i<size; i++){
        if (searchKey == array[i]) {
            return i;
        }
    }
    return -1;
}
*/




/*

int main()
 {
     //user information
     string userName = " ";
     string phoneNumber = " ";
     string userAddress = " ";
     string remodelRoom = " ";
     float roomWidth = 0;
     float roomDepth = 0;
     float roomHeight = 0;
     float wallSurfaceArea = 0;
     float floorArea = 0;
     int task = 0;

     //estimate variables
     float paintCost = 0;
     float wallpaperCost = 0;
     float carpetCost = 0;
     float tileCost = 0;
     float woodFloorCost = 0;

     //the possible task list
     enum task {paint, wallpaper, carpet, tile, woodFloor};

     getUserInformation(userName, phoneNumber, userAddress);
     remodelRoom = getRoomChoice();
     task = getTaskAssignment();

     getRoomInformation(task, roomWidth, roomDepth, roomHeight);

     //print the information of the user and room
     printJobInformation(userName, phoneNumber, userAddress, remodelRoom, task);

     //If a wall treatment is to be done, get the wall surface area
     //assume all four walls of the room are to be redone
     if(task == paint or task == wallpaper)
     {
         //calculate and print the estimates
         wallSurfaceArea = calcWallSurfaceArea(roomWidth, roomDepth, roomHeight);
         paintCost = calcPaintCost(wallSurfaceArea);
         wallpaperCost = calcWallPaperCost(wallSurfaceArea);
         printWallCostComparisons(paintCost, wallpaperCost);
     }

     //if a floor is to be done, get the square footage of the room
     if(task == carpet or task == tile or task == woodFloor)
     {
         //calculate and print the estimates
         floorArea = calcFloorArea(roomWidth, roomDepth);
         carpetCost = calcCarpetCost(floorArea);
         tileCost = calcTileCost(floorArea);
         woodFloorCost = calcWoodFloor(floorArea);
         printFloorCostComparisons(carpetCost, tileCost, woodFloorCost);
     }
     return 0;
 }
*/


// Class
/*

int main()
{
    int integer1;
    float float1;
    Student student1;
    
    integer1 = 4; //assign a value to integer1
    float1 = 4.333; //assign a value to float1

    student1.setName("Catherine Gamboa"); //assign a value to the student name
    student1.setId(54345); //assign a value to the student id number
    student1.setGradDate(2017); //assign a value to the student grad date
    
    //Let's print the values of our variables
    cout<<"integer1 = "<<integer1<<"\n";
    cout<<"float1 = "<<float1<<"\n\n";
    
    //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout<<"Using the Student::print function\n";
    cout<<"Student1 = ";
    student1.print();
    cout<<"\n\n";
    
    //The second is to access each member of the class using the get functions
    cout<<"Using the student access functions\n";
    cout<<"Student1 name = "<<student1.getName()<<"\n";
    cout<<"Student1 ID = "<<student1.getId()<<"\n";
    cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";
    
    
    return 0;
}
*/

/*
int main()
{
    Dog dog1;
    Dog dog2;
    Dog dogSpecial;
    
    dog1.setName("Trixie"); //assign a value to the dog's name
    dog2.setName("Kali"); //assign a value to the dog's name
    dogSpecial.name = "Booli";

    dog1.setLicenseNumber(1234); //assign a value to the dog's license number
    dog2.setLicenseNumber(5678); //assign a value to the  dog's license number

    

     //There are two ways we can print the values of our class:
    //The first is to call the print function we created.
    cout<<"Using the Dog::print function\n";
    cout<<"dog1 = ";
    dog1.printInfo();
    cout<<"\n\n";
    
    //The second is to access each member of the class using the get functions
    cout<<"Using the dog access functions\n";
    cout<<"dog2 name = "<<dog2.getName()<<"\n";
    cout<<"dog2 ID = "<<dog2.getLicenseNumber()<<"\n";
    
    
    cout<<"\n\n";
    dogSpecial.printInfo();

    return 0;
}
*/

/*

int main()
{
    Gameboard game1;
    game1.setGameSpace(0,0,'x');
    game1.setGameSpace(0,1,'x');
    game1.setGameSpace(0,2,'x');
    game1.setGameSpace(0,3,'y');
    game1.setGameSpace(1,0,'x');
    game1.setGameSpace(2,0,'x');
    game1.setGameSpace(3,0,'x');
    game1.setGameSpace(3,1,'x');
    game1.setGameSpace(3,2,'x');
    game1.setGameSpace(3,3,'x');
    
    if(game1.fourInRow() == 1)
    {
        cout<<"X got four in a row! \n\n";
    }
    else
    {
        cout<<"X did not get four in a row :(\n\n";
    }
    game1.printInfo();
    return 0;
}
*/
/*
 
 // TicTacToe main
 
int main()
{
    Gameboard game1;
    int turnNumber =0;
    char turn ='x';
    int winner = 0;
    
    
    while (winner == 0 and turnNumber<9)    //the game is played for 8 turns maximum
 {
        turnNumber++;
        if(turn == 'x'){
            game1.setGameSpaceByUserX();
            winner = winner + game1.fourInRowX()+game1.fourInColumnX() + game1.fourInDiagX();
            if(winner>0){
                cout<<"Player X is the winner";
                break;
            }
            turn = 'o';
        }
        
        if(turn == 'o'){
            game1.setGameSpaceByUserO();
            winner = winner + game1.fourInRowO()+game1.fourInColumnO() + game1.fourInDiagO();
            if(winner>0){
                cout<<"Player O is the winner";
                break;
            }
            turn = 'x';
        }

    }
    
    return 0;
}
*/

// Function overloading - using the same function name with different arguments

// Templates - instead of overloading a function with different imputs, we can create a undefined "type" called template that can get any type (type placeholder) like int, char or even can get a class


//Our generic function

/*
int main()
{
    int a = 90;
    int b = 1;
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}

*/

/*
template <typename T, typename U>
T getBigger(T input1, U input2);


int main()
{
    int a = 5;
    float b = 6.334;
    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(a,b)<<" is bigger.\n";

    cout<<"Between "<<a<<" and "<<b<<" "<<getBigger(b,a)<<" is bigger.\n";
    return 0;
}

template <typename T, typename U>
T getBigger(T input1, U input2)
{
    if(input1 > input2)
        return input1;
    return input2;
}
*/

/*

int main()
{
    Multiplier<int> multi1;
    Multiplier<float> multi3;
    
    int input1,input2;
    cin>>input1;
    cin>>input2;
    
    multi1.setM1(input1);
    multi1.setM2(input2);
    multi1.setProduct();
    multi1.printEquation();
    
    cout<<"\n";
    float input3, input4;
    cin>>input3;
    cin>>input4;
    multi3.setM1(input3);
    multi3.setM2(input4);
    multi3.setProduct();
    multi3.printEquation();
    return 0;
}
*/


// Classes and Inheritance

// class DerivedClass : access BaseClass1, ... ,access BaseClassN



// Polymorphism
/*
    A virtual function is a member function that you expect to be redefined in derived classes. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.
*/





// Vectors and Iterators
/*
 * To instantiate a vector :
 std::vector<int> vectorInts;

 * The vector has size 0 when we instantiate it.
 * We use 'resize' to change the size of the vector
 
 
 * creating an iterator for the vector:
 std::vector<int>::iterator it;
 
 for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
   std::cout<<*it<<" ";

*Notice, we dereference the iterator to print out the value of the vector:

 
 */
/*
int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
  std::vector<int>::iterator it;
  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}
*/

int main ()
{
  //TODO: create a vector of floats
   vector<float> vFloat;

  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  //TODO: add elements to the library

  std::cout<<"\n\nAdding 10 elements to the vector\n";

  //TODO: assign the value 8.8 to 10 elements of the vector
   vFloat.assign(10, 8.8);
   std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";


  //TODO: Complete the Print function in main.hpp
  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  return 0;
}
