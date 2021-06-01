#include <iostream>
#include <string>

using namespace std;

bool isSumEqual(string strFirstWord, string strSecondWord, string strThirdWord)
{
    bool bReturn = false;
    int iFirstNum, iSecondNum, iThirdNum;
    string strTemp;

    for (int i = 0; i < strFirstWord.length(); ++i)
    {
        strTemp = to_string(strFirstWord[i] - 97);
        strFirstWord[i] = strTemp[0];
    }

    cout << "strFirstWord: " << strFirstWord << endl;

    iFirstNum = stoi(strFirstWord);

    cout << "iFirstNum: " << iFirstNum << endl;

    for (int i = 0; i < strSecondWord.length(); ++i)
    {
        strTemp = to_string(strSecondWord[i] - 97);
        strSecondWord[i] = strTemp[0];
    }

    iSecondNum = stoi(strSecondWord);

    cout << "strSecondtWord: " << strSecondWord << endl;

    cout << "iSecondNum: " << iSecondNum << endl;

    for (int i = 0; i < strThirdWord.length(); ++i)
    {
        strTemp = to_string(strThirdWord[i] - 97);
        strThirdWord[i] = strTemp[0];
    }

    iThirdNum = stoi(strThirdWord);

    cout << "iThirdNum: " << iThirdNum << endl;

    if ((iFirstNum + iSecondNum) == iThirdNum)
    {
        bReturn = true;
    }

    return bReturn;
}

bool isSumEqual_1(string strFirstWord, string strSecondWord, string strThirdWord)
{
    int iFirstNum = 0, iSecondNum = 0, iThirdNum = 0;

    for (int i = 0; i < strFirstWord.length(); ++i)
    {
        iFirstNum = (iFirstNum * 10) + (strFirstWord[i] - 'a');
    }

    for (int i = 0; i < strSecondWord.length(); ++i)
    {
        iSecondNum = (iSecondNum * 10) + (strSecondWord[i] - 'a');
    }

    for (int i = 0; i < strThirdWord.length(); ++i)
    {
        iThirdNum = (iThirdNum * 10) + (strThirdWord[i] - 'a');
    }

    return ((iFirstNum + iSecondNum) == iThirdNum);
}

int main()
{
//    bool bIsSumEqual = isSumEqual("acb", "cba", "cdb");
//    bool bIsSumEqual = isSumEqual("acb", "cba", "cdb"aab);
    //bool bIsSumEqual = isSumEqual("aaa", "a", "aab");
//    bool bIsSumEqual = isSumEqual_1("aaa", "a", "aab");
    bool bIsSumEqual = isSumEqual_1("acb", "cba", "cdb");
    cout << "bIsSumEqual: " << bIsSumEqual << endl;
    return 0;
}
