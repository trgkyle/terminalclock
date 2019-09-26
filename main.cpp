#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
int n = 1;
void print(char x)
{
    x = (int)x - 48;
    switch (x)
    {
    case 0:
    {
        if (n == 1)
            cout << "   =========    ";
        if (n == 2)
            cout << "  ||        ||  ";
        if (n == 3)
            cout << "||            ||";
        if (n == 4)
            cout << "||            ||";
        if (n == 5)
            cout << "||            ||";
        if (n == 6)
            cout << "  ||        ||  ";
        if (n == 7)
            cout << "   ==========   ";
        break;
    }
    case 1:
    {
        if (n == 1)
            cout << "       //||     ";
        if (n == 2)
            cout << "     //  ||     ";
        if (n == 3)
            cout << "    --   ||     ";
        if (n == 4)
            cout << "         ||     ";
        if (n == 5)
            cout << "         ||     ";
        if (n == 6)
            cout << "         ||     ";
        if (n == 7)
            cout << "      ===||===  ";
        break;
    }
    case 2:
    {
        if (n == 1)
            cout << "||||||||||||||| ";
        if (n == 2)
            cout << "           |||| ";
        if (n == 3)
            cout << "           |||| ";
        if (n == 4)
            cout << "||||||||||||||| ";
        if (n == 5)
            cout << "||||            ";
        if (n == 6)
            cout << "||||            ";
        if (n == 7)
            cout << "||||||||||||||| ";
        break;
    }
    case 3:
    {
        if (n == 1)
            cout << "||||||||||||||| ";
        if (n == 2)
            cout << "            ||| ";
        if (n == 3)
            cout << "            ||| ";
        if (n == 4)
            cout << " |||||||||||||| ";
        if (n == 5)
            cout << "            ||| ";
        if (n == 6)
            cout << "            ||| ";
        if (n == 7)
            cout << "||||||||||||||| ";
        break;
    }
    case 4:
    {
        if (n == 1)
            cout << "||||         |||";
        if (n == 2)
            cout << "||||         |||";
        if (n == 3)
            cout << "||||         |||";
        if (n == 4)
            cout << "||||||||||||||||";
        if (n == 5)
            cout << "             |||";
        if (n == 6)
            cout << "             |||";
        if (n == 7)
            cout << "             |||";
        break;
    }
    case 5:
    {
        if (n == 1)
            cout << "||||||||||||||||";
        if (n == 2)
            cout << "||||            ";
        if (n == 3)
            cout << "||||            ";
        if (n == 4)
            cout << "||||||||||||||||";
        if (n == 5)
            cout << "            ||||";
        if (n == 6)
            cout << "            ||||";
        if (n == 7)
            cout << "||||||||||||||||";
        break;
    }
    case 6:
    {
        if (n == 1)
            cout << "||||||||||||||||";
        if (n == 2)
            cout << "||||            ";
        if (n == 3)
            cout << "||||            ";
        if (n == 4)
            cout << "||||||||||||||||";
        if (n == 5)
            cout << "||||        ||||";
        if (n == 6)
            cout << "||||        ||||";
        if (n == 7)
            cout << "||||||||||||||||";
        break;
    }
    case 7:
    {
        if (n == 1)
            cout << "||||||||||||||| ";
        if (n == 2)
            cout << "            ||| ";
        if (n == 3)
            cout << "            ||| ";
        if (n == 4)
            cout << "            ||| ";
        if (n == 5)
            cout << "            ||| ";
        if (n == 6)
            cout << "            ||| ";
        if (n == 7)
            cout << "            ||| ";
        break;
    }
    case 8:
    {
        if (n == 1)
            cout << "||||||||||||||||";
        if (n == 2)
            cout << "||||        ||||";
        if (n == 3)
            cout << "||||        ||||";
        if (n == 4)
            cout << "||||||||||||||||";
        if (n == 5)
            cout << "||||        ||||";
        if (n == 6)
            cout << "||||        ||||";
        if (n == 7)
            cout << "||||||||||||||||";
        break;
    }
    case 9:
    {
        if (n == 1)
            cout << "||||||||||||||||";
        if (n == 2)
            cout << "||||        ||||";
        if (n == 3)
            cout << "||||        ||||";
        if (n == 4)
            cout << "||||||||||||||||";
        if (n == 5)
            cout << "            ||||";
        if (n == 6)
            cout << "            ||||";
        if (n == 7)
            cout << "||||||||||||||||";
        break;
    }
    }
}
void gio()
{
    int vitri = 0;
    int xgio, ygio, xphut, yphut, xgiay, ygiay;
    time_t thoigian = time(0);
    char *controthoigian = ctime(&thoigian);
    string gioo = controthoigian;
    for (int i = 0; i <= gioo.size(); i++)
    {
        if (gioo[i] == ':')
            vitri = i;
    }
    //    xgio=gioo[vitri-5];
    //    ygio=gioo[vitri-4];
    //    xphut=gioo[vitri-2];
    //    yphut=gioo[vitri-1];
    //    xgiay=gioo[vitri+1];
    //    ygiay=gioo[vitri+2];
    while (n <= 7)
    {
        print(gioo[vitri - 5]);
        cout << "   ";
        print(gioo[vitri - 4]);
        if (n == 4 or n == 5)
        {
            cout << "**";
        }
        else
            cout << "  ";
        print(gioo[vitri - 2]);
        cout << "   ";
        print(gioo[vitri - 1]);
        cout << "   ";
        if (n == 4 or n == 5)
        {
            cout << "**";
        }
        else
            cout << "  ";
        print(gioo[vitri + 1]);
        cout << "   ";
        print(gioo[vitri + 2]);
        cout << "   ";
        cout << endl;
        n++;
    }

    //    cout<<gioo[vitri-5]<<gioo[vitri-4]<<":";
    //    cout<<gioo[vitri-2]<<gioo[vitri-1]<<":";
    //    cout<<gioo[vitri+1]<<gioo[vitri+2]<<endl;
}
int main()
{
    while (true)
    {
        n = 1;
        gio();
        system("cls");
    }
    return 0;
}