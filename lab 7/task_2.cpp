#include <iostream>

using namespace std;

class matrix
{
 
    private:
    int row, column;
    int **a;
 
    public:
    matrix(int r = 1, int c = 1)
    {
        a=new int *[row];

        row = r;
        column = c;

        for (int i = 0; i < row; i++)
        {
            a[i] = new int[column];
        }

        for(int i=0;i<row;i++)
            for(int j=0;j<column;j++)
            {
                a[i][j]=0;
            }
    }

    matrix operator +(matrix b)
    {
        matrix temp(row, column);
        if (this->row == b.row && this->column == b.column)
        {
            for (int i = 0; i < row; i++)
                for (int j = 0; j < column; j++)
                {
                    temp.a[i][j] = a[i][j] + b.a[i][j];
                }
        }

        else
            cout << "Can't add matrices!! rows and columns are not equal!!"<<endl;
        return temp;
    }

    matrix operator-(matrix b)
    {
        matrix temp(row, column);
        if (this->row == b.row && this->column == b.column)
        {
            for (int i = 0; i < row; i++)
                for (int j = 0; j < column; j++)
                {
                    temp.a[i][j] = a[i][j] - b.a[i][j];
                }

            return temp;
        }

        else
        {
            cout << "Can't subtract matrices!! rows and columns are not equal!!"<<endl;
            return temp;
        }
    }

     matrix operator *(matrix b)
     {
         matrix temp(row,b.column);
         if(this->column==b.row)
         {
             for(int i=0;i<row;i++)
                 for(int j=0;j<b.column;j++)
                     for(int k=0;k<column;++k)
                 {
                     temp.a[i][j]+=a[i][k]*b.a[k][j];
                 }

             return temp;
         }

         else
         {
             cout<<"Can't multiply both matrices as columns of first matrix are not equal to rows of second matrix"<<endl;
             return temp;
         }
     }

    friend ostream &operator<<(ostream &out, matrix c)
    {
        for (int i = 0; i < c.row; i++)
        {
            for (int j = 0; j < c.column; j++)
            {
                out << c.a[i][j] << " ";
            }

            cout << endl;
        }

        return out;
    }

    friend istream &operator>>(istream &in, matrix &c)
    {
        for (int i = 0; i < c.row; i++)
            for (int j = 0; j < c.column; j++)
            {
                cout << "Enter [" << i+1 << "] [" << j+1 << "] element of matrix: ";
                in >> c.a[i][j];
            }

        return in;
    }

    /*~matrix()
    {
        delete []a;
    }*/
};

int main()
{
    matrix m1(2,3), m2(3,2), m3(2,2);

    cout << "Matrix 1: " << endl;
    cin >> m1;
    cout << "Matrix 2: " << endl;
    cin >> m2;

    cout << "Matrix after multiplication is: "<<endl;
    m3 = m1 * m2;
    cout << m3<<endl;


    cout<<"Matrix after addition: "<<endl;
    m3=m1+m2;
    cout<<m3<<endl;

    cout<<"Matrix after subtraction: "<<endl;
    m3=m1-m2;
    cout<<m3<<endl;

    return 0;
}