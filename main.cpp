#include <iostream>

using namespace std;

class arrayList{
    int*arr;
    int maxSize;
    int length;

public:
    arrayList(int s=10)
    {
        if(s<0)
        {
            maxSize=10;
        }
        else
        {
            maxSize=s;
        }
        length=0;
        arr=new int[maxSize];
    }
    bool isEmpty()
    {
        return length==0;
    }
    bool isFull()
    {
        return length==maxSize;
    }
    int getSize()
    {
        return length;
    }

    void print(){
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    void removeAtPos(int pos)
    {
        if(isEmpty())
        {
            cout<<"LIST IS FULL . . . !"<<"\n";
        }
        else if(pos<0 || pos>length)
        {
            cout<<"Out of Range . . . !"<<"\n";
        }
        else
        {
            for(int i=pos;i<length;i++)
            {
                arr[i]=arr[i+1];
            }
            length--;
        }
    }


    void addAtPos(int pos, int element)
    {
        if(isFull())
        {
            cout<<"LIST IS FULL . . . !"<<"\n";
        }
        else if(pos<0 || pos>length)
        {
            cout<<"Out of Range . . . !"<<"\n";
        }
        else
        {
            for(int i=pos;i<length;i++)
            {
                arr[i]=arr[i-1];
            }
            arr[pos]=element;
            length++;
        }
    }

    void insertAtEnd(int element)
    {
        if(isFull())
        {
            cout<<"The list Is Full Can't Insert. . . !";
        }
        else
        {
            arr[length]=element;

        }
        length++;
    }

    int search(int element)
    {
        for(int i=0;i<length;i++)
        {
            if(arr[i]==element)
            {
                return i;
            }

        }
         return -1;
    }

    void updateAt(int pos, int element)
    {
        if(pos<0 || pos>=length)
        {
            cout<<"Out Of Range . . . !"<<"\n";
        }
        else
        {
            arr[pos]=element;
        }
    }
    int getElement(int pos)
    {
        if(pos<0 || pos>=length)
        {
            cout<<"Out of Range. . . !"<<"\n";
        }
        else
        {
            return arr[pos];
        }
    }

    ~arrayList()
    {
        delete[]arr;
    }


};

int main()
{
    arrayList arr(50);

    arr.addAtPos(0,10);
    arr.addAtPos(1,20);
    arr.insertAtEnd(30);
    arr.updateAt(0,5);

    cout<<arr.getSize()<<"\n";
    arr.print();


    return 0;
}
