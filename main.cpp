
#include <iostream>
using namespace std;
#include <conio.h>
#include "lib_lesson05.hpp"


int menu();
int main()
{
    setlocale(LC_ALL, "Russian");
    while(true){
    int answer=menu();
    switch (answer)
    {
        case 0: square()
        ;break;
        case 1: isoscelesTriangle();
        break;
        case 2: rightTriangle();
        break;
        case 3: rhombus();
        return 0;
    }
        system("pause");
        if(answer==4) break;
    }
    return 0;
}
 
int menu() {
        int key=0;
        int code;
        do {
                system("cls");
                key=(key+4)%4;
                if (key==0) cout<<"-> нарисовать прямоугольник"<<endl;
                        else  cout<<"   нарисовать прямоугольник"<<endl;
                if (key==1) cout<<"-> нарисовать прямоугольный треугольник"<<endl;
                        else  cout<<"   нарисовать прямоугольный треугольник"<<endl;
                if (key==2) cout<<"-> нарисовать правильный треугольник"<<endl;
                        else  cout<<"  нарисовать правильный треугольник"<<endl;
                if (key==3) cout<<"-> нарисовать ромб"<<endl;
                        else  cout<<"   нарисовать ромб"<<endl;
                if (key==4) cout<<"-> выйти"<<endl;
                    else  cout<<"  выйти "<<endl;
            
                code=_getch();
                if (code==224)
                {
                    code=_getch();
                    if (code==80) key++;
                    if (code==72) key--;
                        }
           }while(code!=13);
        system("cls");
        return key;
}
