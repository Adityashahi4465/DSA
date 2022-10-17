#include <bits/stdc++.h>
using namespace std;


int main(){

vector<int>arr{1,2,3 , 4 ,5};
//1st :-  *max_element(starting index , ending index);

cout<< *max_element(arr.begin() , arr.end())<<endl;


//2nd :-   next_permutation  , it gives nect higher permutation for example : __ABC__  next permutation will be  __ACB__

string s = "ABC";     // using do wilhe loop to print given permutation also
do{
    for(auto x : arr){
        cout<<x;
    }
    cout<<endl;
}while (next_permutation(arr.begin() , arr.end()));

//3rd :-  __builtin_popcount();      // return number of 1's from binery represntaion of any number

int n = 7; // (7 -> 111) so, o/p = 3
cout<<"\n __builtin_popcount() \n"<<__builtin_popcount(n)<<endl;

//4th :-  binery_search(starting to end index , target )      // perform binery search

if(binary_search(arr.begin(), arr.end() , 8)) {
    printf("\nPresent\n");
}
else{
    cout<<"Not Present"<<endl;
}
return 0;
}