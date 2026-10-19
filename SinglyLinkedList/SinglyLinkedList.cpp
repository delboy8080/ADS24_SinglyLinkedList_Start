#include <iostream>
#include "SList.h"
using namespace std;

void print(SList<int>& items)
{
    SListIterator<int> it = items.getIterator();
    while (it.isValid())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}


int main()
{
    SList<int> nums;
    for (int i = 1; i <= 5;i++)
    {
        nums.append(i);
    }
    print(nums);
    for (int i = 6; i <= 10;i++)
    {
        nums.prepend(i);
    }
    print(nums);
    nums.removeHead();
    nums.removeTail();
    print(nums);
    return 0;
}

