#include <iostream>  
using namespace std;  
class Copy_construct  
{  
public:  
    int d;  
    Copy_construct()   
    {  
        d = 0;  
    }  
    Copy_construct(const Copy_construct &s)   
    {  
        d = s.d;  
    }  
};  
int main()   //Main   
{  
    Copy_construct obj_1;  
    obj_1.d = 35;  
    cout << "obj_1 data is: " << obj_1.d << endl;  
    Copy_construct obj_2(obj_1);  
    cout << "obj_2 data is: " << obj_2.d << endl;  
    return 0;  
}  
