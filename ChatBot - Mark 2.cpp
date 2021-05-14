// CHATBOT - MARK 2.cpp

//Includes
#include <iostream>
#include <string>
#include "CHATBOT - Mark 2.h"

using namespace std;

int main()
{
    //inputs
    string sentence;
    string Question[14];

    //Questions
    Question[0] = "hello";
    Question[1] = "how are you";
    Question[2] = "how are you?";
    Question[3] = "what is your name?";
    Question[4] = "what is your name";
    Question[5] = "who made you?";
    Question[6] = "who made you";
    Question[7] = "hi";
    Question[8] = "hey";
    Question[9] = "hola";
    Question[10] = "shortcuts";
    Question[11] = "help";
    Question[12] = "google shortcuts";
    Question[13] = "music";

    //starting sentence
    cout << "Please type in lowercase" << endl;

    do {
        getline(cin, sentence);
        if (sentence == Question[0]) {
            cout << "Hi!" << endl;
        }

        else if (sentence == Question[1]) {
            cout << "I am fine, thank you" << endl;
        }

        else if (sentence == Question[2]) {
            cout << "I am fine, thank you" << endl;
        }

        else if (sentence == Question[3]) {
            cout << "My name is JARVIS" << endl;
        }

        else if (sentence == Question[4]) {
            cout << "My name is JARVIS" << endl;
        }

        else if (sentence == Question[5]) {
            cout << "MST is the person who programmed me" << endl;
        }

        else if (sentence == Question[6]) {
            cout << "MST is the person who programmed me" << endl;
        }

        else if (sentence == Question[7]) {
            cout << "sup" << endl;
        }

        else if (sentence == Question[8]) {
            cout << "Heyyyyyyyyyyyyyyyyyyyyy" << endl;
        }

        else if (sentence == Question[9]) {
            cout << "Hola" << endl;
        }

        else if (sentence == Question[12]) {
            cout << "gdocs for Google Docs" << endl;
            cout << "gexcel for Google Sheets" << endl;
            cout << "gslide for Google Slides" << endl;
            cout << "gdrive for Google Drive" << endl;
            cout << "gduo for Google Duo" << endl;
            cout << "gmeet for Google Meet" << endl;
            cout << "gphotos for Google Photos" << endl;
        }

        else if (sentence == "gdocs") {
            cout << "Starting Browser..." << endl;
            cout << "Opening Browser..." << endl;
            cout << "Browser Opened!" << endl;
            cout << "Typing in URL..." << endl;
            cout << "Opening Webpage..." << endl;
            cout << "Webpage Opened!" << endl;
            cout << "Redirecting to Webpage..." << endl;
            cout << "Redirect Successful!" << endl;
            system("start https://docs.google.com/document/u/0/");
        }

        else if (sentence == "gexcel") {
            cout << "Starting Browser..." << endl;
            cout << "Opening Browser..." << endl;
            cout << "Browser Opened!" << endl;
            cout << "Typing in URL..." << endl;
            cout << "Opening Webpage..." << endl;
            cout << "Webpage Opened!" << endl;
            cout << "Redirecting to Webpage..." << endl;
            cout << "Redirect Successful!" << endl;
            system("start https://docs.google.com/spreadsheets/u/0/");
        }

        else if (sentence == "gslides") {
            cout << "Starting Browser..." << endl;
            cout << "Opening Browser..." << endl;
            cout << "Browser Opened!" << endl;
            cout << "Typing in URL..." << endl;
            cout << "Opening Webpage..." << endl;
            cout << "Webpage Opened!" << endl;
            cout << "Redirecting to Webpage..." << endl;
            cout << "Redirect Successful!" << endl;
            system("start https://docs.google.com/presentation/u/0/");
        }

        else if (sentence == "gduo") {
            cout << "Starting Browser..." << endl;
            cout << "Opening Browser..." << endl;
            cout << "Browser Opened!" << endl;
            cout << "Typing in URL..." << endl;
            cout << "Opening Webpage..." << endl;
            cout << "Webpage Opened!" << endl;
            cout << "Redirecting to Webpage..." << endl;
            cout << "Redirect Successful!" << endl;
            system("start https://duo.google.com/?usp=duo_ald");
        }

        else if (sentence == "gdrive") {
            cout << "Starting Browser..." << endl;
            cout << "Opening Browser..." << endl;
            cout << "Browser Opened!" << endl;
            cout << "Typing in URL..." << endl;
            cout << "Opening Webpage..." << endl;
            cout << "Webpage Opened!" << endl;
            cout << "Redirecting to Webpage..." << endl;
            cout << "Redirect Successful!" << endl;
            system("start https://drive.google.com/drive/u/0/");
        }

        else if (sentence == "gphotos") {
        cout << "Starting Browser..." << endl;
        cout << "Opening Browser..." << endl;
        cout << "Browser Opened!" << endl;
        cout << "Typing in URL..." << endl;
        cout << "Opening Webpage..." << endl;
        cout << "Webpage Opened!" << endl;
        cout << "Redirecting to Webpage..." << endl;
        cout << "Redirect Successful!" << endl;
        system("start https://photos.google.com/?pageId=none");
        }

        else if (sentence == "gmeet") {
        cout << "Starting Browser..." << endl;
        cout << "Opening Browser..." << endl;
        cout << "Browser Opened!" << endl;
        cout << "Typing in URL..." << endl;
        cout << "Opening Webpage..." << endl;
        cout << "Webpage Opened!" << endl;
        cout << "Redirecting to Webpage..." << endl;
        cout << "Redirect Successful!" << endl;
        system("start https://meet.google.com/?hs=197&pli=1&authuser=0");
        }

        else if (sentence == Question[10]) {
            cout << "Youtube ===========> y" << endl;
            cout << "Instagram ==============> insta" << endl;
            cout << "Facebook =============> fb" << endl;
            cout << "Google =============> ggl" << endl;
        }

        else if (sentence == "y") {
            cout << "Opening Browser..." << endl;
            cout << "Opening Site..." << endl;
            system("start https://www.youtube.com/");
            cout << "Youtube Has Been Opened." << endl;
        }

        else if (sentence == "fb") {
            cout << "Opening Browser..." << endl;
            cout << "Opening Site..." << endl;
            system("start https://www.facebook.com/");
            cout << "Facebook Has Been Opened." << endl;
        }

        else if (sentence == "insta") {
            cout << "Opening Browser..." << endl;
            cout << "Opening Site..." << endl;
            system("start https://www.instagram.com/");
            cout << "Instagram Has Been Opened." << endl;
        }

        else if (sentence == "ggl") {
            cout << "Opening Browser..." << endl;
            cout << "Opening Site..." << endl;
            system("start https://www.google.com/");
            cout << "Google Has Been Opened." << endl;
        }

        else if (sentence == "help") {
            cout << "Type shortcuts to check out all shortcuts." << endl;
            cout << "Type play to play a couple of online games." << endl;
            cout << "Type google shortcuts for the Google Menu." << endl;
            cout << "Type music for a menu of music sites." << endl;
        }

        else if (sentence == "play") {
            cout << "type kr to play krunker" << endl;
            cout << "type pac to play pacman" << endl;
            cout << "type ms to play minesweeper" << endl;
            cout << "type sn to play the snake game" << endl;
            cout << "type sol to play solitaire" << endl;
            cout << "type crossy to play crossy road" << endl;
        }

        else if (sentence == "kr") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://krunker.io/");
            cout << "Game Started." << endl;
        }

        else if (sentence == "pac") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://www.google.com/logos/2010/pacman10-i.html");
            cout << "Game Started." << endl;
        }

        else if (sentence == "ms") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://play-minesweeper.com/");
            cout << "Game Started." << endl;
        }

        else if (sentence == "sn") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://playsnake.org/");
            cout << "Game Started." << endl;
        }

        else if (sentence == "sol") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://www.google.com/logos/fnbx/solitaire/standalone.html");
            cout << "Game Started." << endl;
        }

        else if (sentence == "crossy") {
            cout << "Opening game..." << endl;
            cout << "Starting Game..." << endl;
            system("start https://www.friv.cm/crossy-road/fullscreen/");
            cout << "Game Started." << endl;
        }

        else {
            cout << sentence + " " + "is not a valid question" << endl;
        }
    }

    while (sentence != "exit");
}
