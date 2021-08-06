#include <iostream>
using namespace std;

#define TABLE_SIZE 100
int table1[TABLE_SIZE];
#undef TABLE_SIZE
#define TABLE_SIZE 200
int table2[TABLE_SIZE];

int main()
{
std::cout<<TABLE_SIZE<<endl;
std::cout << "table1 " << sizeof(table1)/sizeof(table1[0]) << std::endl;
std::cout << "table2 " << sizeof(table2)/sizeof(table1[0]) << std::endl;

return 0;
}
