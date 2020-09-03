#include<iostream>
using namespace std;

class toe{
private:
  int a[3][3];
public:
  toe()
  {
    for(int i=0;i<3;i++)                                                                 //Setting all the values of the matrix = 0
    {
      for(int j=0;j<3;j++)
      {
        a[i][j] = 0;
      }
    }
  }

  void display()
  {
    cout<<"\n";
    for(int i=0;i<3;i++)                                                                 //Printing the Array at the starting
    {
      cout<<"\t";
      for(int j=0;j<3;j++)
      {
        cout<<a[i][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"\n";
  }

  void play(string p1, string p2)
  {
    int m,n;
    for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        if (((i + j) % 2) == 0)
        {
          cout<<"Player 1 turn - ";
          cin>>m>>n;                                                                  //taking the input from the user
          if ((m == 1 || m == 2 || m == 3 ) && (n == 1 || n == 2 || n == 3))          //Checking if the input is valid or not.
          {
            a[m-1][n-1] = 1;
            display();
          }
          else
          {
            cout<<"\nInvalid input.";
            j--;
          }
        }
        else
        {
          cout<<"Player 2 turn - ";
          cin>>m>>n;
          if ((m == 1 || m == 2 || m == 3 ) && (n == 1 || n == 2 || n == 3))          //Checking if the input is valid or not.
          {
            a[m-1][n-1] = 2;
            display();
          }
          else
          {
            cout<<"\nInvalid input.";
            j--;
          }
        }
        if ((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && a[0][0] == 1)             //Horizontal win.
        {
          cout<<"\n****"<<p1<<" wins. 1****";
          exit(0);
        }
        else if ((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && a[0][0] == 2)        //Horizontal win.
        {
          cout<<"\n****"<<p2<<" wins. 2****";
          exit(0);
        }
        else if ((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && a[0][0] == 1)        //Diagonal win.
        {
          cout<<"\n****"<<p1<<" wins. 3****";
          exit(0);
        }
        else if ((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && a[0][0] == 2)        //Diagonal win.
        {
          cout<<"\n****"<<p2<<" wins. 4****";
          exit(0);
        }
        else if ((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && a[1][0] == 1)        //Horizontal win.
        {
          cout<<"\n****"<<p1<<" wins. 5****";
          exit(0);
        }
        else if ((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && a[1][0] == 2)        //Horizontal win.
        {
          cout<<"\n****"<<p2<<" wins. 6****";
          exit(0);
        }
        else if ((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]) && a[2][0] == 1)        //Horizontal win.
        {
          cout<<"\n****"<<p1<<" wins. 7****";
          exit(0);
        }
        else if ((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]) && a[2][0] == 2)        //Horizontal win.
        {
          cout<<"\n****"<<p2<<" wins. 8****";
          exit(0);
        }
        else if ((a[2][0] == a[1][1]) && (a[1][1] == a[0][2]) && a[2][0] == 1)        //Horizontal win.
        {
          cout<<"\n****"<<p1<<" wins. 9****";
          exit(0);
        }
        else if ((a[2][0] == a[1][1]) && (a[1][1] == a[0][2]) && a[2][0] == 2)        //Diagonal win.
        {
          cout<<"\n****"<<p2<<" wins. 10****";
          exit(0);
        }
        else if ((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && a[0][0] == 1)        //Vertical win.
        {
          cout<<"\n****"<<p1<<" wins. 11****";
          exit(0);
        }
        else if ((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && a[0][0] == 2)        //Vertical win.
        {
          cout<<"\n****"<<p2<<" wins. 12****";
          exit(0);
        }
        else if ((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && a[0][1] == 1)        //Vertical win.
        {
          cout<<"\n****"<<p1<<" 1 wins. 13****";
          exit(0);
        }
        else if ((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && a[0][1] == 2)        //Vertical win.
        {
          cout<<"\n****"<<p2<<" wins. 14****";
          exit(0);
        }
        else if ((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]) && a[0][2] == 1)        //Vertical win.
        {
          cout<<"\n****"<<p1<<" wins. 15****";
          exit(0);
        }
        else if ((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]) && a[0][2] == 2)        //Vertical win.
        {
          cout<<"\n****"<<p2<<" wins. 16****";
          exit(0);
        }
      }
    }
  }
};



int main()
{
  toe t;
  string player1, player2;
  cout<<"Enter Player-1 name: ";
  cin>>player1;
  cout<<"Enter Player-2 name: ";
  cin>>player2;
  cout<<player1<<" - 1\n"<<player2<<" - 2"<<endl;
  t.display();
  t.play(player1, player2);
  return 0;
}
