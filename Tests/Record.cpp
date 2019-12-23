//
// Created by Diana Freitas on 22/12/2019.
//

#include "Record.h"
#include <iomanip>

Record::Record(const string &sport,const string &competition,const string & trial){
    this->date = Date();
    this->place = "";
    this->sport = sport;
    this->competition = competition;
    this->recordist = "";
    this->trial = trial;
    this->country = "";
    this->comparisonCriteria = '0';
    this->record = -1;
}

Record::Record(const Record & record){
    this->date = record.getDate();
    this->place = record.getPlace();
    this->recordist = record.getRecordist();
    this->sport = record.getSport();
    this->competition = record.getCompetition();
    this->trial = record.getTrial();
    this->country = record.getCountry();
    this->comparisonCriteria = record.getComparisonCriteria();
    this->record = record.getRecord();
}

Record::Record(){
    this->date = Date();
    this->place = "";
    this->sport = "";
    this->competition = "";
    this->recordist = "";
    this->trial = "";
    this->country = "";
    this->comparisonCriteria = '0';
    this->record = -1;
}

bool Record::operator<(const Record &rhs) const {
    if(sport == rhs.getSport()){
        if(competition == rhs.getCompetition())
            return trial < rhs.getTrial();
        return competition < rhs.getCompetition();
    }
    return sport < rhs.getSport();
}

bool Record::operator==(const Record &rhs) const {
    return sport == rhs.getSport() && competition == rhs.getCompetition() && trial == rhs.getTrial();
}

const Date &Record::getDate() const {
    return date;
}

void Record::setDate(const Date &date) {
    this->date = date;
}

const string &Record::getPlace() const {
    return place;
}

void Record::setPlace(const string &place) {
    this->place = place;
}

const string &Record::getRecordist() const {
    return recordist;
}

void Record::setRecordist(const string &recordist) {
    this->recordist = recordist;
}

const string &Record::getSport() const {
    return sport;
}

void Record::setSport(const string &sport) {
    this->sport = sport;
}

const string &Record::getCompetition() const {
    return competition;
}

void Record::setCompetition(const string &competition) {
    this->competition = competition;
}

const string &Record::getTrial() const {
    return trial;
}

void Record::setTrial(const string &trial) {
    this->trial = trial;
}

float Record::getRecord() const {
    return record;
}

void Record::setRecord(float record) {
    Record::record = record;
}

char Record::getComparisonCriteria() const {
    return comparisonCriteria;
}

void Record::setComparisonCriteria(char comparisonCriteria) {
    Record::comparisonCriteria = comparisonCriteria;
}

const string &Record::getCountry() const {
    return country;
}

void Record::setCountry(const string &country) {
    Record::country = country;
}

void Record::showInfo() const{
    cout <<  left <<setw(17) << "Sport" << setw(4) << " "<< sport <<endl;
    cout <<  left <<setw(17) << "Competition" <<setw(4) << " "<< competition << endl;
    if(!trial.empty())
        cout <<  left <<setw(17) << "Trial" <<setw(4) << " "<< trial << endl;
    cout <<  left <<setw(17) << "Date" << setw(4) << " "<< date <<endl;
    cout <<  left <<setw(17) << "Place" << setw(4) << " "<< place <<endl;
    cout <<  left <<setw(17) << "Record" <<setw(4) << " "<< record << endl;
    cout <<  left <<setw(17) << "Recordist Country" << setw(4) << " "<< country <<endl;
    cout <<  left <<setw(17) << "Recordist" << setw(4) << " "<< recordist <<endl;
}
