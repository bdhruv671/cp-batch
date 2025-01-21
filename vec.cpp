// Write a C++ program that demonstrates the concept of dynamic arrays using std::vector. The program should:

// Prompt the user to enter the number of elements they want to store in a dynamic array (vector).
// Use a std::vector to store the elements entered by the user.
// Allow the user to input the elements of the vector.
// Display the elements of the vector.
// Include functionality to add a new element to the vector and display the updated vector."




#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int> us ;
    int n ;
    cout <<"numbers of elements "<< endl;
    cin >> n ;

    cout << "enter the elements "<< " ";

    for(int i= 0 ; i < n ; i++ ){
        int elements ;
        cin >> elements ;
        us.push_back(elements);

    }

for ( int elements : us )cout << elements<<" ";
cout << " you wanna add more elements yes / no "<< endl;
string what ;
cin >> what ;

if ( what == "yes") {
    int newelement ;
    cout << "enter new element"<< endl;

    cin >> newelement ;
    us.push_back(newelement);

    cout << "Now the updated list is : ";

    for ( int update : us) cout << update<< " ";

}


return 0;

}