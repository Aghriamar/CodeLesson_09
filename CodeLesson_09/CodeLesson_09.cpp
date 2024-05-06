#include <iostream>

enum Result
{
    SUCCESS,
    FAIL,
    ERROR_WRITE,
    ERROR_READ,
};

Result DoWork()
{
    return SUCCESS;
}

int main()
{
    Result workResult = DoWork();
    if (workResult == SUCCESS)
    {

    }
}