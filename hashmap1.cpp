#include <iostream>
using namespace std;

class Hashmap
{
    int values[10];

    int hashfunction(int key)
    {
        return key % 10;
    }


public:
 
    Hashmap()
    {
        for(int i = 0; i<10;i++)
        {
            values[i] = -1;
        }
    }

    void insert(int key, int value)
    {
        int index = hashfunction(key);
        values[index] = value;
    }

    int get(int key)
    {
        int index = hashfunction(key);
        return values[index];
    }
};

int main()
{
    Hashmap myMap;

    myMap.insert(105,500);
    myMap.insert(42,999);

    cout<< "105 - " << myMap.get(105) << endl;
    cout<< "42 - " << myMap.get(42) << endl;

    return 0;


}


