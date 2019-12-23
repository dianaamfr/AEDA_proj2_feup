//
// Created by Diana Freitas on 22/12/2019.
//

#ifndef PROJETO2_RECORD_H
#define PROJETO2_RECORD_H

#include "Date.h"

using namespace std;

/**A class to store the information about a record*/
class Record {
    Date date;/**< The date when the record was achieved*/
    string place;/**< The place where the record was achieved*/
    string recordist;/**< The athlete who achieved the record*/
    string sport;/**< The sport in which the record was achieved*/
    string competititon;/**< The competition in which the record was achieved*/
public:
    /*Record Default Constructor*/
    Record(){};

    /**Record Copy Constructor
     * @param r the Record to copy
     */
    Record(const Record & r);

    /** Compares two records and checks if they are equal - same competition and sport
   * @param Record the rhs record object of the comparison
   * @returns true if the records are equal and false otherwise
   */
    bool operator==(const Record &rhs) const;

    /** Orders records alphabetically by sport and, if the sport is the same, by competition
   * @param Record the rhs record object of the comparison
   * @returns true if this record comes before the rhs object
   */
    bool operator<(const Record &rhs) const;

    /** Get the date whenthe record was achieved
    * @returns the date when the record was achieved
    */
    const Date &getDate() const;

    /** Set the date when the record was achieved
    * @param date the date when the record was achieved
    */
    void setDate(const Date &date);

    /** Get the place where the record was achieved
    * @returns the place where the record was achieved
    */
    const string &getPlace() const;

    /** Set the place where the record was achieved
    * @param place the place where the record was achieved
    */
    void setPlace(const string &place);

    /** Get the name of the recordist
    * @returns the name of the recordist
    */
    const string &getRecordist() const;

    /** Set the name of the recordist
    * @param recordist the name of the recordist
    */
    void setRecordist(const string &recordist);

    /** Get the name of the sport in which the record was achieved
    * @returns the name of the sport in which the record was achieved
    */
    const string &getSport() const;

    /** Set the name of the sport in which the record was achieved
    * @param recordist the name of the sport in which the record was achieved
    */
    void setSport(const string &sport);

    /** Get the name of the competition in which the record was achieved
    * @returns the name of the competition in which the record was achieved
    */
    const string &getCompetititon() const;

    /** Set the name of the competition in which the record was achieved
    * @param recordist the name of the competition in which the record was achieved
    */
    void setCompetititon(const string &competititon);
};


#endif //PROJETO2_RECORD_H
