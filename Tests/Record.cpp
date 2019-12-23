//
// Created by Diana Freitas on 22/12/2019.
//

#include "Record.h"

Record::Record(const Date & date,const string &place,const string &recordist,const string &sport,const string &competititon){
    this->date = date;
    this->place = place;
    this->sport = sport;
    this->competititon = competititon;
    this->recordist = recordist;
}

Record::Record(const Record & record){
    this->date = record.getDate();
    this->place = record.getPlace();
    this->recordist = record.getRecordist();
    this->sport = record.getSport();
    this->competititon = record.getCompetititon();
}

bool Record::operator<(const Record &rhs) const {
    if(sport == rhs.getSport())
        return competititon < rhs.getCompetititon();
    return sport < rhs.getSport();
}

bool Record::operator==(const Record &rhs) const {
    return sport == rhs.getSport() && competititon == rhs.getCompetititon();
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

const string &Record::getCompetititon() const {
    return competititon;
}

void Record::setCompetititon(const string &competititon) {
    this->competititon = competititon;
}
