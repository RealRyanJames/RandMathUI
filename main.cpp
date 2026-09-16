#include <iostream>
#include <algorithm>
#include <list> 
#include "Extras.cpp"
#include "Lines.cpp"

static int add(int a, int b);
static int sub(int a, int b);
static int mul(int a, int b);
static float divide(float a, float b);


class NumbersInit
{

private:
    int num1 = 0;
    int num2 = 0;
    int answer = 0;
    bool checkAnswerCorrect;

public:
    bool getChecked()
    {

        NumbersInit m;
        m.checkAnswerCorrect = true;

        if (checkAnswerCorrect)
        {

            return m.checkAnswerCorrect;
        }

        return m.checkAnswerCorrect;
    }
};

class GeneratedNumbers
{

private:
    int num1 = 10;
    int num2 = 5;

public:
    static int getFirstNumber()
    {

        GeneratedNumbers nums;
        srand(time(NULL));
        return rand() % nums.num1;
    }

    static int getSecondNumber()
    {
        GeneratedNumbers nums;

        srand(time(NULL));
        return rand() % nums.num2;
    }
};

static std::string upper(std::string str)
{
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}

static bool isCheck()
{
    NumbersInit init;
    if (init.getChecked())
    {
        std::cout << upper("Enter Answer: ") << std::endl;
        return true;
    }

    return false;
}

struct Pos
{

    std::string operatorsCreated;
};

class Stdin

{

public:
    std::string getStdinInit()
    {

        std::string str;
        std::cout << "Enter Operator for Math: " << std::endl;

        std::cin >> str;
        return str;
    }
};

class ISUIAvalible {

    struct AppStartup {

        static bool isWorkingUI;
        int Length;

    };

private:

    bool isUIReady = true;

public:

    AppStartup appStartup;

    bool isReady() const {

        if (isUIReady) {

            return AppStartup::isWorkingUI;
        }

        return true;

    }

    void setMessageEndConsole() {

        std::cout << upper("Application Has Exited");
    };
};

struct PostionsBoxFinal {

    float x, y, z;
};



static std::string checkStdin()
{
    Stdin s;
    std::string inUser = s.getStdinInit();
    return inUser;
}

static void setupBoxUI(PostionsBoxFinal posInit) {


    for (int i = 0; i < (posInit.x * posInit.y) * 2 / 1.7f; i++) {

        std::cout << "-";
    }

};

static std::string optionPicked(char personsOptionSet)
{
    if (personsOptionSet == 'y' || personsOptionSet == 'Y')
    {
        //setupBoxUI(boxUI);
        return upper("You Chose To Continue With Option [Y] | [y]");
        //setupBoxUI(boxUI);
    }

    return upper("You Chose Not to Continue with the Application Please Try Later");
    //setupBoxUI(boxUI);
};

static char checkedKeyPressed()
{

    //linesWindowUI();
    std::cout << "\n";
    std::cout << "Enter Y | N: " << std::endl;
    char keyPressed = getchar();

    switch (keyPressed)
    {
    case 'Y':
        std::cout << optionPicked(keyPressed) << std::endl;

        break;
    }

    return keyPressed;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

struct MathsUITracker {

    float x;
    float y;
    float z;
};

static void GETUI() {

    if (UISet::isShowing) {

        MathsUITracker mathsUI{};
        mathsUI.x = 20.0f;
        mathsUI.y = 2.0f;

        for (int i = 1; i < (mathsUI.x * mathsUI.y) * 2 / 1.7f; i += 1) {

            LinesUI lines;
            lines.lines = "-";

            std::cout << lines.lines;
        }

    }
}

float divide(float a, float b)
{

    if (b == 0)
    {
        std::cout << "Cannot Divide by Zero" << std::endl;

    }

    return a / b;
};

auto main() -> int
{
    ISUIAvalible appUI;
    checkedKeyPressed();
    GETUI();
    std::cout << "\n";

    if (checkStdin().empty())
    {
        std::cout << upper("Empty Message") << std::endl;
    }

    Positions pos{};
    TypeNumbers num{};

    num.xPos = 10;
    num.yPos = 5;

    srand(time(NULL));

    Positions::positions();

    Stdin s;

    std::string inUser = checkStdin();

    if (inUser == "+")
    {

        std::cout << "\n";
        //linesWindowUI();
        GeneratedNumbers numbers;
        int num1 = numbers.getFirstNumber();
        int num2 = numbers.getSecondNumber();
        std::cout << "What is: " << num1 << " + " << num2 << std::endl;

        int answer = 0;
        std::cin >> answer;

        if (answer == add(num1, num2))
        {
            std::cout << upper("Correct") << std::endl;
        }
    }

    if (inUser == "-")
    {

        int num1 = GeneratedNumbers::getFirstNumber();
        int num2 = GeneratedNumbers::getSecondNumber();

        int answer = 0;

        std::cout << "What is: " << num1 << " - " << num2 << std::endl;
        std::cin >> answer;

        if (answer == sub(num1, num2))
        {
            std::cout << upper("Correct") << std::endl;
        }
    }

    if (inUser == "*")
    {

        int num1 = GeneratedNumbers::getFirstNumber();
        int num2 = GeneratedNumbers::getSecondNumber();

        int answer = 0;
        std::cout << "What is: " << num1 << " * " << num2 << std::endl;
        std::cin >> answer;

        if (answer == mul(num1, num2))
        {
            std::cout << upper("Correct") << std::endl;
        }
    }

    if (inUser == "/")
    {

        float num1 = GeneratedNumbers::getFirstNumber();
        float num2 = GeneratedNumbers::getSecondNumber();

        int answer = 0;
        std::cout << "What is: " << num1 << " / " << num2 << std::endl;
        std::cin >> answer;

        if (answer == divide(num1, num2))
        {
            std::cout << upper("Correct") << std::endl;
        }
    }

    GETUI();
    std::cout << "\n";
    appUI.setMessageEndConsole();

    system("pause > 0");
    return 0;
}