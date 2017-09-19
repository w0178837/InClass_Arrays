#include <iostream>
#include <string>
#include <vector>

using namespace std;

//int main() {
//    int size;
//    //int myArray[size]; // issue, must have constant value
//    int myArrayOne[10];
//    const int SIZE = 10;
//
//
//    int intMyArrayTwo[SIZE];
//
//    int anArray[3];
//    anArray[12] = 666; // why no error? because c++ will try to use the memory that could have been allocated to another process
//
//    const int MAX = 5;
//
//    int nonD[MAX];
//    int c = 0;
//
//    // read an integer into the above array
//    cout << "Hey user, enter an integer." << endl;
//    cin >> nonD[0];
//
//    cout << "You entered: " << nonD[0];


    // this will allow us to use space that isn't avaialable. A HUGE PROBLEM!!!
//    while(cin >> nonD[c])
//    {
//        c++;
//        if(c<5)
//            cout << c << " elements used" << " max is: " << MAX << endl;
//        else
//            cout << "At max - next will exceed array size" << endl;
//
//        for(int i = 0; i < MAX; i++)
//        {
//            cout << nonD[i] << endl;
//        }
//    }


//    // "Dynamic Array" as in declared in dynamic mem, NOT that its size can change at runtime
//    // This demo starts with a small array and then makes a bigger array and copies one to the other. Then moves the pointer to the larger array.
//
//    int max = 5; // this max is not a constant. We will change it at runtime
//    int *dynArray = new int[max];
//
//    int c = 0;
//
//    cout << "enter an integer";
//
//    while(cin >> dynArray[c])
//    {
//        c++;
//        if(c>=max)//test if array is full
//        {
//            max = max * 2; // double the array size
//            int *temp = new int[max];
//            for(int i = 0; i<max ; i++)
//            {
//                temp[i] = dynArray[i];
//            }
//            //delete dynArray; // This is a memory leak, it only deletes the first element of array
//            delete []dynArray; // tells the computer that its dealing with an array
//            dynArray = temp;
//        }
//        for(int i = 0; i < max ; i++)
//        {
//            cout << "Element #" << i << " in dynArray is " << dynArray[i] << endl;
//        }
//    }



    // vector example
//    vector<float> v;
//    v.assign(8,16.3);
//    v[2]=16.4;
//    v[3]=66.6;
//
//    v.push_back(11.8);
//    v.push_back(-7.3);
//
//    for(int i = 0; i <v.size(); i ++)
//    {
//        cout << v[i] << " this is the float at v[" << i << "]" << endl;
//    }
//
//    cout << endl;
//    cout << v.front() << " "<<v.at(2)<< " " << v.back() << endl;
//
//    vector<float>::iterator iter;
//    for (iter=v.begin();iter!=v.end();iter++)
//    {
//        cout << *iter << endl;
//    }

class Test
{
public:
    void mod2DArray(int p[][3], int rowSize, int colSize)
    {
        for(int row = 0; row<rowSize; row++)
        {
            for(int col = 0; col < colSize; col ++)
            {
                p[row][col] += 10;
            }
        }
    }

    void print2DArray(int p[][3], int rowSize, int colSize)
    {
        for(int row = 0; row<rowSize; row++)
        {
            for(int col = 0; col < colSize; col ++)
            {
                cout << p[row][col] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

}; // end class


int main (){

    Test myTest = Test();

    int twoDNumArray[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // print out before mod,
    myTest.print2DArray(twoDNumArray,3,3);

    // modify the array
    myTest.mod2DArray(twoDNumArray,3,3);

    //print out after mod
    myTest.print2DArray(twoDNumArray,3,3);



    return 0;
}