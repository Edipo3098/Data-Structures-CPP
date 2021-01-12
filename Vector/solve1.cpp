#include<iostream>
#include<string>
#include<vector>
#include <algorithm>


using namespace std;

int main(){
    vector<string> names;
    vector<float> grades;
    int c_names = 0;
    cout<< "Input the numbers of name you are going to submit ";
    cin >> c_names;
    cout<< endl;
    cout<< "Input the numbers of grades ";
    int c_grades = 0;
    cin >> c_grades;
    string name;
    long grade;
   float sum_all_elemnts = 0;
    for (int i = 0; i < c_names; i++){  //Ingresar en los dos vectores los datos necesarios
        cout <<"Input the name: ";
        cin >> name;
        names.push_back(name);
        cout<< endl;    
        sum_all_elemnts = 0;
        for (int j =0; j<c_grades; j++){
            cout<<"Input the grade: ";
            cin >> grade;
            grades.push_back(grade);
            cout<<endl;
            sum_all_elemnts += grade;


        }

        std::sort (grades.begin()+c_grades*i, grades.begin()+c_grades*i+c_grades); // Algoritmo que organiza todas las grades de un alumno c_grades es la cantidad de materias
                                                                                // al multiplicarlo por i nos permite organizar solo las asignaturas de cada estudiante sin revolverlas

        int mediann =0;     
        float median = 0.0;
        if(c_grades%2 ==0){mediann = c_grades/2;
            median =   (grades.operator[](c_grades*i+(mediann-1)) +  grades.operator[]((c_grades*i+mediann-1+1))  ) /2;}
        else { mediann = ((c_grades+1)/2);
            median = grades.operator[](c_grades*i+(mediann-1));} 
        cout<< "The sum of all the elemnts is: "<< sum_all_elemnts<<endl; 
        cout<< "The mean is: "<< sum_all_elemnts/c_grades<<endl;  
        //cout<< "The median is: "<< mediann-1<<endl;
        cout<< "The median is: "<< median <<endl;
    }
    // Calculo de las variables pedidas
    long mean = 0;
    
    
    for(long x:grades){
        sum_all_elemnts += x;
        cout<< x << " ";



    }
   /* cout<<endl;
    long median = 0;
    if(grades.size()%2 ==0){median = ((grades.size()/2) + ((grades.size()/2)+1));}
    else { median = (grades.size()+1)/2;}    */

   // cout<< "The sum of all the elemnts is: "<< sum_all_elemnts<<endl;
    //cout<< "The mean is: "<< sum_all_elemnts/grades.size()<<endl;
    
    //cout<< "The median is: "<< grades.size() <<endl;



    return 0;

}