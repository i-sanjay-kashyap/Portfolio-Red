#include<iostream.h>
#include<conio.h>

int *a,n;
void mychoice()
{
    int t;
    cout<<"1 Add \n 2 List \n 3 Delete \n 4 exit";
    cin>>t;

    switch(t)
    {
        case 1: addchoice();
                break;
        case 2: listchoice();
                break;
        case 3: deletechoice();
                break;
        default: return;
    }
}

void addchoice()
{
    int k;
    cout<<"1 front add \n 2 back add \n : ";
    cin>>k;
    if (i==n)
        myrealloc();
        
    switch(k)
    {
        case 1: for (j=i;j>=0;j--)
                a[j+1]=a[j];
                break;
        case 2: a[++i]=n;
                break;
        default: cout<<"INVALID";
                return;
        
        
    }
}

void myrealloc()
{
    int t;
    cout<<"Amount required: \n";
    cin>>t;
    a=(int*)realloc(a,n+t);
    n+=t;
}


void listchoice()
{
    int k;
    cout<<"1 front list \n 2 back list \n : ";
    cin>>k;
        
    switch(k)
    {
        case 1: for (j=0;j<=i;j++)
                cout<<a[j];
                break;
        case 2: for(j=i;j>=0;j--)
                cout<<a[j];
                break;
        default: cout<<"INVALID";
                return;
        
        
    }
}


void deletechoice()
{
    if (i==-1)
        cout<<"No element to delete";
        
    int k;
    cout<<"1 front delete \n 2 back delete \n : ";
    cin>>k;
    
    switch(k)
    {
        case 1: for (j=0;j<i;j++)
                a[j]=a[j+1];
                i--;
                break;
        case 2; i--;
                break;
        default: cout<<"INVALID";
                return;
        
        
    }
}



int main()
{
    cout<<"Enter no. of elements: \n";
    cin>>n;
    a=new int[n];
    mychoice();
    return 0;
}