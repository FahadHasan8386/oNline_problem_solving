#include<iostream>
using namespace std;
#define MAX_SIZE 100


class q{
    int Queue[MAX_SIZE];
    int Front;
    int rear;
public:
    q()
    {
        Front = -1;
        rear = -1;
    }
    bool isEmpty()
    {
        if((Front == -1) &&(rear == -1))return true;
        if((Front != -1) && (Front == rear))return true;
        else return false;
    }
    bool isFull()
    {
        if(Front == (MAX_SIZE-1))return true;
        else return false;
    }
    void push(int val)
    {
        if(isFull() == true)
        {
            cout << "Queue Full: " << endl;
            return;
        }
        if(Front == -1)
        {
            ++Front;
        }
        Queue[++rear] = val;
    }
    void pop()
    {
        if(isEmpty() == true)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        ++Front;
    }
    int getFront()
    {
        if(isEmpty() == true)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return Queue[Front];
    }
    void show()
    {
        if(isEmpty() == true)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        for(int i = Front; i <= rear; i++)cout << Queue[i] << " ";
        cout << endl;
    }
};
int main()
{
    q que;

    que.push(100);
    que.push(20);
    que.push(31);
    que.push(11);

    que.pop();
    que.pop();

    que.push(42);


    que.show();
}
