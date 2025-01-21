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