#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int>& arr, int n){
for(int i = 1; i <= n - 1; i++){
for(int j = 0; j < n - i; j++){
if(arr[j] > arr[j + 1]){
swap(arr[j], arr[j + 1]);
}
}
}
}
void print(vector<int> arr){
cout << "Array = ";
for(int i: arr){
cout << i << " ";
}
cout << endl;
}

int main(){
int n; cin >> n;
vector<int> arr(n);
for(int &i: arr){
cin >> i;
}
bubbleSort(arr, n);
print(arr);
return 0;
}