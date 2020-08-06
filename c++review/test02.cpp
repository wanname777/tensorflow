#include <iostream>
using namespace std;
double result = 1; //必须是double，后期用temp_result修改类型，并将result复原
int getPower(int x, int y)
{
    if (y < 0)
        return 0; //题目要求
    if (y == 0)
    {
        int temp_result = result;
        result = 1;
        return temp_result;
    }
    result *= x;
    getPower(x, y - 1);
}
double getPower(double x, int y)
{
    if (y < 0)
        return 0; //题目要求
    if (y == 0)
    {
        double temp_result = result;
        result = 1;
        return temp_result;
    }
    result *= x;
    getPower(x, y - 1);
}
int main()
{
    //result=1;
    cout << getPower(3, 3) << endl;
    cout << getPower(1.1, 3) << endl;
}