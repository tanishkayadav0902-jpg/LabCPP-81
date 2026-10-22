#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// 1. Class and 2. Encapsulation
class Detective
{
private:
    string detectiveName;
    int score;

public:
    // 3. Constructor
    Detective(string name)
    {
        detectiveName = name;
        score = 0;
    }

    void addPoints(int points)
    {
        if (points < 0)
            throw invalid_argument("Points cannot be negative!");

        score += points;
    }

    int getScore()
    {
        return score;
    }

    string getName()
    {
        return detectiveName;
    }

    void displayScore()
    {
        cout << "\nDetective: " << detectiveName;
        cout << "\nInvestigation Score: " << score << endl;
    }
};

// 4. Inheritance
class MysteryCase : public Detective
{
private:
    string caseName;
    string correctSuspect;

public:
    MysteryCase(string name)
        : Detective(name)
    {
        caseName = "The Missing Diamond";
        correctSuspect = "Arjun";
    }

    // 5. Function Overloading
    void showClue(int clueNumber)
    {
        if (clueNumber == 1)
            cout << "\nClue: Muddy footprints were found near the window.";
        else if (clueNumber == 2)
            cout << "\nClue: A torn piece of a blue shirt was found.";
        else if (clueNumber == 3)
            cout << "\nClue: The security camera stopped at 9 PM.";
        else
            cout << "\nNo clue available.";
    }

    void showClue(string clueType)
    {
        cout << "\nSpecial Evidence: " << clueType;
    }

    // 6. Operator Overloading
    bool operator>(MysteryCase &other)
    {
        return getScore() > other.getScore();
    }

    void investigate()
    {
        int choice;

        cout << "\n===== " << caseName << " =====";
        cout << "\nA diamond has disappeared from a mansion!";
        cout << "\nThree suspects are being questioned.";
        cout << "\n\nSuspects:";
        cout << "\n1. Arjun - The gardener";
        cout << "\n2. Riya - The housekeeper";
        cout << "\n3. Kabir - The security guard";

        cout << "\n\nInvestigate clues to solve the case.";
        cout << "\n1. Investigate footprints";
        cout << "\n2. Investigate the torn shirt";
        cout << "\n3. Investigate the security camera";
        cout << "\n4. Examine special evidence";
        cout << "\nEnter your choice: ";
        cin >> choice;

        // 7. Exception Handling
        if (choice < 1 || choice > 4)
            throw invalid_argument("Invalid investigation choice!");

        if (choice == 1)
        {
            showClue(1);
            addPoints(10);
        }
        else if (choice == 2)
        {
            showClue(2);
            addPoints(10);
        }
        else if (choice == 3)
        {
            showClue(3);
            addPoints(10);
        }
        else
        {
            showClue(string("Blue fabric matching Arjun's uniform."));
            addPoints(20);
        }

        cout << "\n\nChoose the suspect you think is guilty:";
        cout << "\n1. Arjun";
        cout << "\n2. Riya";
        cout << "\n3. Kabir";
        cout << "\nEnter your accusation: ";

        cin >> choice;

        if (choice < 1 || choice > 3)
            throw invalid_argument("Invalid suspect choice!");

        cout << "\n===== CASE RESULT =====";

        if (choice == 1)
        {
            cout << "\nCorrect! Arjun stole the diamond.";
            addPoints(50);
        }
        else
        {
            cout << "\nIncorrect! The correct suspect was "
                 << correctSuspect << ".";
        }

        displayScore();
    }
};

int main()
{
    try
    {
        string name;

        cout << "====================================";
        cout << "\n     DIGITAL DETECTIVE GAME";
        cout << "\n====================================";

        cout << "\nEnter your detective name: ";
        getline(cin, name);

        if (name.empty())
            name = "Detective";

        // Creating an object
        MysteryCase game(name);

        game.investigate();
    }
    catch (invalid_argument &e)
    {
        cout << "\nError: " << e.what() << endl;
    }

    cout << "\nThank you for playing!";
    cout << "\n====================================\n";

    return 0;
}