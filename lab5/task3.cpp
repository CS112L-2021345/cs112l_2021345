// lab5 task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<string>

using namespace std;

class StringType
{
private:
    string s1, s2;

public:
    StringType()
    {
        s1 = "string one";
        s2 = "string 2";

    }

    void set(string str1, string str2)
    {
        s1 = str1;
        s2 = str2;
    }

    void print()
    {
        cout << "Value of first string is: " << s1 << endl;
        cout << "Value of second string is: " << s2;
    }

    int max_len()
    {
        int c1 = 0, c2 = 0;

        int i = 0;
        while (s1[i] != '\0')
        {
            c1++;
            i++;
        }

        i = 0;
        while (s2[i] != '\0')
        {
            c2++;
            i++;
        }

        if (c1 > c2)
            return c1;

        else
            return c2;

    }

    int comp(string str1, string str2)
    {
        int c1 = 0, c2 = 0;

        int i = 0;
        while (str1[i] != '\0')
        {
            c1++;
            i++;
        }

        i = 0;
        while (str2[i] != '\0')
        {
            c2++;
            i++;
        }

        i = 0;

        int count = 0;
        while (str1[i] != '\0' && str2[i] != '\0')
        {
            if (str1[i] > str2[i])
                count++;

            else
                count--;
        }

        return count;
    }


    void copy(string s, string d)
    {
        int c1 = 0, c2 = 0;

        int i = 0;
        while (s[i] != '\0')
        {
            c1++;
            i++;
        }

        i = 0;
        while (d[i] != '\0')
        {
            c2++;
            i++;
        }

        i = 0;

        if (c2 < c1)
        {
            cout << "Error destination string is too small to copy onto ";
            return;
        }

        else
        {
            for (int j = 0; j < c2; j++)
            {
                d[i] = s[i];
            }

        }

    }

    string concatenate(string str1, string str2)
    {

        char s[50];
        int i = 0, j = 0, k = 0;
        
        while (str1[i] != '\0')
        {
            s[j] = str1[i];
            i++;
            j++;
        }

        while (str2[k] != '\0')
        {
            s[j] = str2[k];
            k++;
            j++;
        }
        s[j] = '\0';


        return s;

    }

    bool SearchChar(char s)
    {
        int i = 0;
        bool y = 0;

        while (s1[i] != '\0')
        {
            if (s1[i] == s)
            {
                y = 1;
            }

            i++;
        }

        return y;
    }

    bool searchWord(string s="one")
    {
            char* a = &s1[0];
            char* c = a;
            int j = 0,k=0;

            while (*c != '\0')
            {

                j++;
                c++;
            }
            c = c - j;
        
            bool y = 0;
            char b = ' ',d='\0';

            while (k<j+1)
            {
                if (*c == b || *c==d)
                {
                    *c = '\0';

                    int i = 0;
                    while (s[i] != '\0')
                    {
                        if (*a == s[i])
                        {
                            y = 1;
                        }

                        if (*a != s[i])
                        {
                            y = 0;
                            break;
                        }

                        i++;
                        a++;

                    }
                    a = c + 1;

                }

                c++;
                k++;

            }

            return y;
        
    }


};

int main()
{

    StringType s1, s2;
    //s1.set("1ST","2ND");
    bool b = s1.searchWord("one");

    if (b)
        cout << "Found";
    else
        cout << "Not found";


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
