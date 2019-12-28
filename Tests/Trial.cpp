//
// Created by Diana Freitas on 15/10/2019.
//

#include "Trial.h"
#include <iomanip>
#include <algorithm>

const string & Trial::getName() const{
    return name;
}

const vector<string> & Trial::getParticipants() const{
    return participants;
}

const vector<string> & Trial::getCountries() const{
    return countries;
}

Trial::Trial(const Trial & t){
    name = t.getName();
    date = t.getDate();
    winner = t.getWinner();
    numberOfElements = t.getNumberOfElements();
    participants = t.getParticipants();
    countries = t.getCountries();
    result = t.getResult();
}

const string & Trial::getWinner() const{
    return winner;
}

const Date & Trial::getDate() const{
    return date;
}

void Trial::setDate(const Date & d){
    date = d;
}

void Trial::setName(const string & n){
    name = n;
}

void Trial::setWinner(const string &w) {
    this->winner = w;
}

void Trial::setPlayers(const vector<string> & players){
    participants=players;
}

void Trial::setCountries(const vector<string> & countries){
    this->countries=countries;
}

void Trial::setNumberOfElements(unsigned int n){
    numberOfElements = n;
}

float Trial::getResult() const {
    return result;
}

void Trial::setResult(float result) {
    this->result = result;
}

unsigned int Trial::getNumberOfElements() const{
    return numberOfElements;
}

string Trial::info() const{
    ostringstream os;
    os <<  left <<setw(17) << "Name" << setw(4) << " "<< name <<endl;
    os <<  left <<setw(17) << "Date" <<setw(4) << " "<< date << endl;
    os <<  left <<setw(17) << "Participants" <<setw(4) << " ";
    for(const auto & participant : participants)
        os << participant <<" ";
    os << endl;
    os <<  left <<setw(17) << "Winner" << setw(4) << " "<< winner <<endl;
    os <<  left <<setw(17) << "Number of Elements" << setw(4) << " "<< numberOfElements <<endl;
    return os.str();
}

void Trial::showInfo() const{
    cout <<  left <<setw(17) << "Name" << setw(4) << " "<< name <<endl;
    cout <<  left <<setw(17) << "Date" <<setw(4) << " "<< date << endl;
    cout <<  left <<setw(17) << "Participants" <<setw(4) << " ";
    for(unsigned int i = 0; i< participants.size();i++){
        cout << participants[i];
        if(i != participants.size()-1)
            cout << ", ";
    }
    cout << endl;
    cout <<  left <<setw(17) << "Winner" << setw(4) << " ";
    if(winner != "")
        cout << winner <<endl;
    else
        cout << "No winner to show - result not available\n";
}

void Trial::showResult() const {
    string tmp = name;
    transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
    cout <<  left <<setw(17) << tmp <<endl;
    cout <<  left <<setw(17) << "Date" << setw(4) << " "<< getDate() << setw(3) <<endl;
    cout <<  left <<setw(17) << "Result" <<setw(4) << " "<< getResult() << endl;
    cout <<  left <<setw(17) << "Winner's Country" << setw(4) << " ";
    for(unsigned int i = 0; i< participants.size(); i++){
        if(participants[i] == getWinner())
            cout << countries[i]<<endl;
    }
    cout <<  left <<setw(17) << "Winner" << setw(4) << " "<< getWinner() <<endl;
}

void Trial::showInfoNoDate() const{
    cout <<  left <<setw(17) << "Name" << setw(4) << " "<< name <<endl;
    cout <<  left <<setw(17) << "Participants" <<setw(4) << " ";
    for(const auto & participant : participants)
        cout << participant <<" ";
    cout << endl;
    cout <<  left <<setw(17) << "Winner" << setw(4) << " ";
    if(winner != "")
        cout << winner <<endl;
    else
        cout << "No winner to show - result not available\n";
}

bool Trial::operator == (const Trial & t2) const{
    return getName() == t2.getName();
}
