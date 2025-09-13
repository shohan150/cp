#include <iostream>
#include <string>
using namespace std;

int reference(){
    /* References must be initialized. You can't just declare a Reference and initialize it later. And you can't change what a ref is referring to.
    Any variable starting with & is a reference. It does not store any value just gives the memory location.
    We can add &(ampersand) before any variable and see it's memory location e.g: int a=2; count << &a;
    The type of Reference must be the of the type of the value it is referring to. You can't refer a string variable with int ref.
    References hold the memory location of the variable referred to. A ref of a ref again holds on to the very first value or
    in other words the variable location directly.
    Changing the value of the ref means changing the variable as ref just directs to that variable.*/
    int a = 2;  // the varaiable
    int &b = a; // first ref
    int &c = b; // first ref of ref
    int &d = c; // &d just holds the memory location of a. Changing it changes a itself.
    int &e = d; // This much nested. Still holds the memory address of a directly.
    int f = a;  // a normal variable
    a=4;        // changing a
    d=9;        // changing d. Means changing a.
    cout << a << b << c << d << e << f<< endl;  // Output: 9 9 9 9 9 2
    cout << &c << endl; // both holds same value. Memory location a. So, all the other refs here.
    cout << &d << endl;

    return 0;
}

int pointer(){
    /*The difference is, & just gives the memory location. You can think declaring any variable with & e.g: int &b = a; does not have
    any memory of itself. It just refers to the memory location of a so that we can pass that variable a reference in out code.
    Sounds a bit confusing. But & (ref) is just ref. It just refers to a location.
    Now, pointer does the saving part. It takes memory space and saves the referred memory location to there. Anything stating with *.
    Even int *z=NULL; is also okay. And you can change what a pointer points to. It's not one time declaration like ref.
    You can initialize an empty pointer. And initialize a value a later. May be because it's just like a variable declared later.
    Let's check examples. */
    int x = 2;
    int *y = &x;    // &x is the ref or the memory location where x variable is kept. Now, *y is the pointer that stores it.
    cout << &x << endl;  // Both &x, y are same y actually store the location of x
    cout << y << endl;
    cout << &y << endl;  // But the memory location of y is different. As y = &x. But itself has a location.
    cout << *y << endl;  // 2. The dereferencing operation. it shows the variable value kept at the pointed location.

    // additional
    int arr[] = {1,5,10};
    // int *head = &arr; // X will not work X. Because x is not a value itself. So, it can't get the memory location of x. However,
    // int *head = &arr[0];  // works fine. because now it gets a variable and can store that location. Even
    int *head = arr;  // works as well. Because the array itself is actually the memory location of it's first element. So, x = &x[0]. IMPORTANT.

    cout << endl<<  "Space each integer array element takes: 4 bytes (4*8 = 32 bits)" << endl;
    for(int i=0; i<3; i++){
        head = arr+i;   // Adding 1 to array memory location. And we see location increased by 4 bytes. Meaning, integer memory
                        // locations are 4 bytes each. So, increasing single location in code means 4 step advance at PC level.
        cout << *head << " location: " <<head << endl;
    }
    return 0;
}


int main(){
    reference();
    cout << "--------------------------" << endl;
    pointer();
}
