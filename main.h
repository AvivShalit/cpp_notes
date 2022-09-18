//
//  main.h
//  Test2
//
//  Created by Aviv Shalit on 15/09/2022.
//

#ifndef main_h
#define main_h

/*
//Cost of materials for the remodel
 const float PAINTCOST = .50; //per square foot
 const float WALLPAPERCOST = 2.00; //per square foot
 const float CARPETCOST = 4.00; //per square foot
 const float TILECOST = 5.50; //per square foot
 const float WOODCOST = 6.00; //per square foot

void getUserInformation( string &name, string &number, string &address);
string getRoomChoice();
int getTaskAssignment();
void printTask(int task);
void getRoomInformation(int task,float &roomWidth, float &roomDepth, float &roomHeight);
void printJobInformation(string userName, string phoneNumber,string userAddress, string remodelRoom, int task);
float calcWallSurfaceArea(float roomWidth,float roomDepth,float roomHeight);
float calcPaintCost(float wallSurfaceArea);
float calcWallPaperCost(float wallSurfaceArea);
void printWallCostComparisons(float paintCost, float wallpaperCost);
float calcFloorArea(float roomWidth, float roomDepth);
float calcCarpetCost(float floorArea);
float calcTileCost(float floorArea);
float calcWoodFloor(float floorArea);
void printFloorCostComparisons(float carpetCost,float tileCost, float woodFloorCost);


void getUserInformation(string &userName,string &phoneNumber,string &userAddress)
{
   cout<<"Customer Name: \n";
   getline(std::cin, userName);

   cout<<"Customer Phone Number: \n";
   getline(std::cin, phoneNumber);

   cout<<"Customer Address: \n";
   getline(std::cin, userAddress);
}

string getRoomChoice()
{//We don't do anything with this information in the program
   string room;
   cout<<"What room are we remodeling?: \n";
   getline(std::cin, room);
   return room;
}

int getTaskAssignment()
{  //the possible task list
   int task;
   std::cout<<"What job needs to be done?\n";
   std::cout<<"0: Paint\n";
   std::cout<<"1: Wallpaper\n";
   std::cout<<"2: Carpet\n";
   std::cout<<"3: Tile\n";
   std::cout<<"4: Wood Floor\n";
   cin>>task;
   //std::cout<<"Task = "<<task;
   return task;
}

void printTask(int task)
{//depending on which task was selected, print the corresponding string
   switch(task) {
       case 0:
           std::cout<<" paint ";
           break;
        case 1:
           std::cout<<" wallpaper ";
           break;
       case 2:
           std::cout<<" carpet ";
           break;
       case 3:
           std::cout<<" tile ";
           break;
       case 4:
          std::cout<<" wood floor ";
           break;
       default:
           std::cout<<" Ivalid task ";
   }
}

void getRoomInformation(int task,float &roomWidth, float &roomDepth, float &roomHeight)
{//all the tasks require the width and depth.
 //wall treatments require the height also
   std::cout<<"What is the room width? \n";
   std::cin>>roomWidth;
   std::cout<<"What is the room depth? \n";
   std::cin>>roomDepth;
   if(task == 0 or task == 1)
   {
       std::cout<<"What is the room height? \n";
       std::cin>>roomHeight;
   }
}

void printJobInformation(string userName, string phoneNumber,string userAddress, string      remodelRoom, int task)
{//print user information. This is the only place the
 //remodel room string is used
   cout<<"\n\nPreparing order for:\n\n"<<userName<<"\n";
   cout<<"\t"<< phoneNumber<<"\n";
   cout<<"\t"<< userAddress<<"\n";
   cout<<"\t"<<"Remodeling the "<<remodelRoom<<" with";
   printTask(task);
}

float calcWallSurfaceArea(float roomWidth,float roomDepth,float roomHeight)
{//Calculate the wall surface area. Assume the room is rectangluar
 //Assume the two walls opposite each other are the same
   float wallWide = roomWidth * roomHeight * 2;//two walls
   float wallDeep = roomDepth * roomHeight * 2;//two walls
   return wallWide + wallDeep;
}

float calcPaintCost(float wallSurfaceArea)
{//cost estimates are simply surface area times material per sq. foot
   return PAINTCOST * wallSurfaceArea;
}

float calcWallPaperCost(float wallSurfaceArea)
{//cost estimates are simply surface area times material per sq. foot
   return WALLPAPERCOST * wallSurfaceArea;
}

void printWallCostComparisons(float paintCost, float wallpaperCost)
{//print the estimates for the wall coverings
   std::cout<<"\nPaint Estimate: "<<paintCost<<"\n\n";
   std::cout<<"Wallpaper Estimate: "<<wallpaperCost<<"\n\n";
}

float calcFloorArea(float roomWidth, float roomDepth)
{
   return roomWidth * roomDepth;
}
float calcCarpetCost(float floorArea)
{//cost estimates are simply surface area times material per sq. foot
   return CARPETCOST * floorArea;
}

float calcTileCost(float floorArea)
{//cost estimates are simply surface area times material per sq. foot
   return TILECOST * floorArea;
}

float calcWoodFloor(float floorArea)
{//cost estimates are simply surface area times material per sq. foot
   return WOODCOST * floorArea;
}

void printFloorCostComparisons(float carpetCost,float tileCost, float woodFloorCost)
{//print the estimates for the floor coverings
   cout<<"\n\t\tCarpet Estimate: "<<carpetCost;
   cout<<"\n\t\tTile Estimate: "<<tileCost;
   cout<<"\n\t\tWood Estimate: "<<woodFloorCost;
}




// New main


class Student
{
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};

void Student::setName(string nameIn)
{
     name = nameIn;
}

void Student::setId(int idIn)
{
     id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
     gradDate = gradDateIn;
}

void Student::print()
{
     cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
     return name;
}

int Student::getId()
{
     return id;
}

int Student::getGradDate()
{
     return gradDate;
}
*/


// New
/*
class Student
{
    private:
        string name;
        int id;
        int gradDate;

    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();
};
*/



/*
class Dog
{
    int licenseNumber;
public:
    string name;
    void setName(string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(string nameIn)
{
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
    return name;
}

int Dog::getLicenseNumber()
{
    return licenseNumber;
    
}
 
void Dog::printInfo()
{
    cout<<"The dog's name is "<<name<<"m and the license number is "<<licenseNumber<<" .";
}

 
 
 

// Constructor and Destructors

class Cats
{
    string name;
    string breed;
    int age;
public:
    Cats(); //declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//defining the constructor
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}
void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}
string Cats::getName()
{
    return name;
}
string Cats::getBreed()
{
    return breed;
}
int Cats::getAge()
{
    return age;
}
void Cats::printInfo()
{
    cout<<name<<" "<<breed<<" "<<age;
}


// destructor
//One of the more important tasks of a destructor is releasing memory that was allocated by the class constructor and member functions.
 */

/*

class Gameboard
{
        char gameSpace[4][4];
    public:
        Gameboard(); //initialize the board with '-' in all 16 spaces
        void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
        char getGameSpace(int row,int column);
        int fourInRow(); //four 'x's in any row 'wins'
        void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            gameSpace[i][j] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row,int column, char value){
    gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column){
    return gameSpace[row][column];
}

int Gameboard::fourInRow(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        for(int j=0; j<5; j++){
            if (gameSpace[i][j]=='x') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
        }
    }
    return 0;
}


void Gameboard::printInfo(){
    cout<<std::setw(5);
    cout<<"\n";
    for(int i=0;i<4; i++)
    {
        for(int j=0;j<4; j++)
        {
            cout<<gameSpace[i][j];
        }
        cout<<"\n";
    }
}

*/


// TicTacToe header

/*
class Gameboard
{
        char gameSpace[4][4];
    public:
        Gameboard(); //initialize the board with '-' in all 16 spaces
        void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
        void setGameSpaceByUserX();
        void setGameSpaceByUserO();
        char getGameSpace(int row,int column);
        int fourInRowX(); //four 'x's in any row 'wins'
        int fourInRowO(); //four 'o's in any row 'wins'
        int fourInColumnX(); //four 'x's in any column 'wins'
        int fourInColumnO(); //four 'o's in any column 'wins'
        int fourInDiagX(); //four 'x's in any fiag 'wins'
        int fourInDiagO(); //four 'o's in any fiag 'wins'

        void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            gameSpace[i][j] = '-';
        }
    }
}

void Gameboard::setGameSpace(int row,int column, char value){
    gameSpace[row][column] = value;
}

void Gameboard::setGameSpaceByUserX(){
    int row; int column;
    cout<<"player X, please select a row from {1,2,3,4} \n";
    cin>>row;
    cout<<"player X, please select a column from {1,2,3,4} \n";
    cin>>column;
    if (gameSpace[row][column] == 'x') {
        cout<<"already marked by x, please select again \n";
        setGameSpaceByUserX();
    }
    else if (gameSpace[row][column] == 'o') {
        cout<<"already marked by o, please select again \n";
        setGameSpaceByUserX();
    }
    else if (gameSpace[row][column] == '-') {
        gameSpace[row][column]='x';
    }
    
}

void Gameboard::setGameSpaceByUserO(){
    int row; int column;
    cout<<"player O, please select a row from {1,2,3,4} \n";
    cin>>row;
    cout<<"player O, please select a column from {1,2,3,4} \n";
    cin>>column;
    if (gameSpace[row][column] == 'x') {
        cout<<"already marked by x, please select again \n";
        setGameSpaceByUserO();
    }
    else if (gameSpace[row][column] == 'o') {
        cout<<"already marked by o, please select again \n";
        setGameSpaceByUserO();
    }
    else if (gameSpace[row][column] == '-') {
        gameSpace[row][column]='o';
    }
}

char Gameboard::getGameSpace(int row,int column){
    return gameSpace[row][column];
}

int Gameboard::fourInRowX(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        for(int j=0; j<5; j++){
            if (gameSpace[i][j]=='x') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
        }
    }
    return 0;
}

int Gameboard::fourInRowO(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        for(int j=0; j<5; j++){
            if (gameSpace[i][j]=='o') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
        }
    }
    return 0;
}

int Gameboard::fourInColumnX(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        for(int j=0; j<5; j++){
            if (gameSpace[j][i]=='x') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
        }
    }
    return 0;
}

int Gameboard::fourInColumnO(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        for(int j=0; j<5; j++){
            if (gameSpace[j][i]=='o') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
        }
    }
    return 0;
}

int Gameboard::fourInDiagX(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        if (gameSpace[i][i]=='x') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
    }
    return 0;
}

int Gameboard::fourInDiagO(){
    int temp = 0;
    for(int i=0; i<5; i++){
        temp = 0;
        if (gameSpace[i][i]=='x') {
                temp++;
            }
            if(temp == 4){
                return 1;
            }
    }
    return 0;
}





void Gameboard::printInfo(){
    cout<<std::setw(5);
    cout<<"\n \n";
    for(int i=0;i<4; i++)
    {
        for(int j=0;j<4; j++)
        {
            cout<<gameSpace[i][j];
        }
        cout<<"\n";
    }
}
*/

// template
/*
template <typename T>  //tell the compiler we are using a template
T sumTwo(T input1,T  input2);



template <typename T>
T sumTwo(T  a,T  b)
{
    //Note  that the sum is a variable type T. This means whatever
    //variable type is passed in
   //will become the variable type for sum.
    T  sum;
    sum = a + b;
    return sum;
}
*/

/*

template <class T>
class Multiplier
{
    T m1, m2;
    T product;
public:
    void printEquation();
    void setM1(T mIn);
    void setM2(T mIn);
    void setProduct();
    T getProduct();
    T getM1();
    T getM2();
};

template <class T>
void Multiplier<T>::printEquation()
{
    std::cout<<m1<<" * "<<m2<<" = "<<product;
}

template <class T>
void Multiplier<T>::setM1(T mIn)
{
   m1 = mIn;
}

template <class T>
void Multiplier<T>::setM2(T mIn)
{
   m2 = mIn;
}

template <class T>
void Multiplier<T>::setProduct()
{
   product = m1 * m2;
}

template <class T>
T Multiplier<T>::getM1()
{
   return m1;
}

template <class T>
T Multiplier<T>::getM2()
{
   return m2;
}

template <class T>
T Multiplier<T>::getProduct()
{
   return product;
}

*/


void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function
    vector<float>::iterator it;
    for (it = vIn.begin(); it != vIn.end(); ++it)
        cout<<*it<<" ";
 }


#endif /* main_h */
