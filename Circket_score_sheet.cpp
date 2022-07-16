#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class scorecard
{
    char batname[11][20];
    int runscored[11];
    char bowlername[11][20];
    float oversplayed[11];
    int maiden[11];
    int runsgiven[11];
    int wicketstaken[11];

public:
    void updatebatsname(void);
    void updatebowler(void);
    void displaybat(void);
    void displaybowl(void);
    void menu(void);
    scorecard()
    {
        for (int n = 0; n < 12; n++)
        {
            runscored[n] = {0};
            oversplayed[n] = {0};
            maiden[n] = {0};
            runsgiven[n] = {0};
            wicketstaken[n] = {0};
        }
    }
};
int main()
{
    int jb = 0;
    scorecard s1;
    int kb;
    s1.menu();

    do
    {
        cout << " ____________ CHOICE THE OPTION TO VIEW ________________ " << endl;
        cout << "(1) Display Batting score " << endl;
        cout << "(2) Display Bowling score " << endl;
      
        cin >> kb;
        switch (kb)
        {
        case 1:
            s1.displaybat();
            break;
        case 2:
            s1.displaybowl();
            break;
     
        default:
            cout << " WRONG CHOICE ";
        }
    } while (jb < 1);
}
void scorecard ::updatebowler(void)
{
    char bowlname[20];
    int str, k, option, overnumbers, maidenumb, uprun, upwicket;
    cout << "Enter Bowler Name : ";
    cin.getline(bowlname, 20);

    for (k = 0; k < 11; k++)
    {
        str = strcmp(bowlername[k], bowlname);
        if (str == 0)
        {
            cout << "_______MENU FOR BOWLER INFORMATION UPDATE _______ " << endl;
            cout << "(1) update Number of Overs " << endl
                 << "(2)update maiden overs" << endl
                 << "(3)update runsgiven" << endl;
            cout << "(4) update wicketstaken" << endl;

            cin >> option;
            switch (option)
            {
            case 1:
            {
                cout << "Enter Number of overs to be updated : ";
                cin >> overnumbers;
                cout << endl;
                oversplayed[k] += overnumbers;
                break;
            }
            case 2:
            {
                cout << "Enter the number of maiden overs to be updated :";
                cin >> maidenumb;
                cout << endl;
                maiden[k] += maidenumb;
                break;
            }
            case 3:
            {
                cout << "Enter the number of runs to be added : ";
                cin >> uprun;
                cout << endl;
                runsgiven[k] += uprun;
                break;
            }
            case 4:
            {
                cout << "Enter number of wickets to be updated :";
                cin >> upwicket;
                cout << endl;
                wicketstaken[k] += upwicket;
            }
            default:
                cout << "WRONG CHOICE";
            }
            break;
        }
    }
    if (str != 0)
        cout << "You entered Wrong player." << endl;
}

void scorecard ::updatebatsname(void)
{
    char batsmaname[20];
    int str, k;
    cout << "Enter Batsman_name : ";
    cin.getline(batsmaname, 20);

    for (k = 0; k < 11; k++)
    {
        str = strcmp(batname[k], batsmaname);
        if (str == 0)
        {
            cout << "Enter runs scored :";
            cin >> runscored[k];
            cout << endl
                 << "Enter weather out or not out:";                 
            break;
        }
    }
    if (str != 0)
        cout << "You entered wrong player ." << endl;
}
void scorecard ::displaybat(void)
{
    cout << " Batsman_name " << " || "<< " runscored " << " || "<<endl;

    for (int j = 0; j < 12; j++)
    {
        cout << batname[j] << " || "<< runscored[j] << " || "<< endl;
    }
}
void scorecard ::displaybowl(void)
{
    cout << " Bowler_name " << " || "<< " overs_played " << " || "<< " maiden overs " " || "<< " wickets_taken " << " || "<< " runs_given " << endl;
    cout << endl;
    for (int j = 0; j < 12; j++)
    {
        cout << bowlername[j] << " || "<< oversplayed[j] << " || "<< maiden[j] << " || "<< wicketstaken[j] << " || "<< runsgiven[j] << endl;
    }
}
void scorecard ::menu(void)
{
    cout << " Enter the name of played of batting team " << endl;
    for (int k = 0; k < 11; k++)
    {
        cout << " Enter name of player " << k + 1 << " : ";
        cin >> batname[k];
    }
    cout << " Enter the name of player of bowlering team " << endl;

    for (int n = 0; n < 11; n++)
    {
        cout << " Enter name of player " << n + 1 << " : ";
        cin >> bowlername[n];
    }
}
