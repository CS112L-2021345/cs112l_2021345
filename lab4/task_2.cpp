#include<iostream>

using namespace std;

class twoDArray{

private: 
    const int static size=5;
    int a[size][size];

public:
void initialize()
{
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        {
            cout<<"Enter element "<<i+1<<" "<<j+1<<" of matrix : ";
            cin>>a[i][j];
        }
}

void print()
{
        for(int i=0;i<size;i++)
        {
        for(int j=0;j<size;j++)
        {
           cout<<a[i][j]<<" ";

        }
        cout<<endl;
        }

}

void Transpose()
{
  int b[size][size];

  for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
    {
        b[i][j]=a[j][i];
    }  

cout<<"Transpose of matrix is: "<<endl;
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
}

void isSymmetric()
{
    bool flag=1;
    int b[size][size];

      for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
    {
        b[i][j]=a[j][i];
    }

     for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
    {
        if(a[i][j]!=b[i][j])
        {
            flag=0;
        }
    }

if(flag)
cout<<"Matrix is symmetric";

else
cout<<"Matrix is not symmetric";
}

twoDArray multiply(twoDArray b1,twoDArray b2)
{
    twoDArray temp; 

for(int i=0;i<size;i++)
    for(int j=0;j<size;j++)
           temp.a[i][j]=0; 

    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            for(int k=0;k<size;k++)
            {
                temp.a[i][j]+=b1.a[i][k]*b2.a[k][j];
            }

    return temp;
}

};

int main()
{


while(1)
{
    int c;
if(c==1)
{
    twoDArray t;
    cout<<"enter elements of: "<<endl;
    t.initialize();
    t.Transpose();
}
if(c==2)
{
    twoDArray t;
    cout<<"Enter elements of matrix: "<<endl;
    t.initialize();
    t.isSymmetric();
}
if(c==3)
{    
twoDArray t;
twoDArray t1;
twoDArray result;

t.initialize();
t1.initialize(); 

result=result.multiply(t,t1);

result.print();
}
while(c!=1 && c!=2 && c!=3 && c!=4)
{
    cout<<"INVALID COMMAND"<<endl;
    cout<<"Enter again: ";
    cin>>c;
}


}