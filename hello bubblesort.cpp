#include<iostream>
using namespace std;

int main()
{
    int arr[8];
    cout<<"Please input 8 numbers:";

    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }

  
    for(int i=0;i<8-1;i++)
    {

        for(int j=0;j<8-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"After sorting:";
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    system("pause");
    return 0;
}
