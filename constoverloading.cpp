#include <iostream> 
using namespace std; 
  
class construct 
{  
  
public: 
    float area;  
      
    construct() 
    { 
        area = 0; 
    } 
   
    construct(int a, int b) 
    { 
        area = a * b; 
    }
    construct(construct &t)
    {
        area=t.area;
    }
      
    void disp() 
    { 
        cout<< area<< endl; 
    } 
}; 
  
int main() 
{ 
    
    construct d( 10, 20); 
    construct d2(d);
    d.disp();
    d2.disp(); 
    
    
    return 1; 
} 