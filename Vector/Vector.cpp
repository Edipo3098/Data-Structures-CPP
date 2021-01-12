#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main(){

    // Los vectores son utilizados para manejar datos que no se conoce su dimension.
    // vector de 5 enteros
    vector <int> vector5int(5);
    cout<< "Implementation of a vector of INTS"<< endl; 
    for(int x: vector5int){  // para cada valor del vector vector 5 int se agrega en x
        cout << x <<endl;
    }

    // string 
    string arr[]={
        "first",
        "Second",
        "Third",
        "Fourth",
        "Fifth"
    };
    cout<< "Implementation of a vector of STRING" << endl;
    vector <string> vector_str(arr,arr+ 5);  //sizeof  tamano en bytes  
    //vector <string> vector_str(5);
    for(string str: vector_str){
        cout<< str << endl;
    }
    // LIST
    cout <<" Implementation vector with a LIST"<< endl;
    list <string> listofSTR;
    listofSTR.push_back("first");
    listofSTR.push_back("second");
    listofSTR.push_back("third");
    listofSTR.push_back("fourth");
    listofSTR.push_back("fifth");
    vector<string> vector_str_list(listofSTR.begin(),listofSTR.end());
    for(string i: vector_str_list){
        cout<< i<<endl;

    } 

    cout<< "Assign one vector to another" << endl;
    vector<string> second_vector(vector_str);
    int n = second_vector.size();
    cout<< " Size of the vector is "<< n<< endl;
    



    
    return 0;
}