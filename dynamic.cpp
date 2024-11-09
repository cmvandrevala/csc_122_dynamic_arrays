#include <iostream>

using namespace std;

class DynamicArray
{
private:
  int *top;
  int *start;
  int size;

public:
  DynamicArray()
  {
    size = 5;
    top = new int[size];
    start = top;
  }

  void push(int x)
  {
    if (start + size == top)
    {
      cout << "Sorry, can't do it..." << endl;
    }
    else
    {
      *top = x;
      top++;
      cout << "Added " << x << endl;
    }
  }

  int get_at_index(int indx)
  {
    if (indx < 0 || indx > size - 1)
    {
      return 0;
    }
    else
    {
      return *(start + indx);
    }
  }
};

int main()
{
  DynamicArray array;
  array.push(10);
  array.push(20);
  array.push(30);
  array.push(40);
  array.push(50);
  array.push(60);
  array.push(70);
  array.push(80);

  cout << array.get_at_index(0) << endl;
  cout << array.get_at_index(1) << endl;
  cout << array.get_at_index(2) << endl;
  cout << array.get_at_index(3) << endl;
  cout << array.get_at_index(4) << endl;
  cout << array.get_at_index(5) << endl;

  return 0;
}
