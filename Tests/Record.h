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
    string country;/**< The athlete's country*/
    string sport;/**< The sport in which the record was achieved*/
    string competition;/**< The competition in which the record was achieved*/
    string trial;/**< The competition trial in which the record was achieved*/
    float record;/**< The value of the record*/
    char comparisonCriteria; /**< - or + indicates if a record is better if it's value is lower(-) or higher(+) */
public:
    /*Record Default Constructor*/
    Record();

    /**Record Constructor with parameters
     * @param sport The sport in which the record was achieved
     * @param competition The competition in which the record was achieved
     * @param trial The competition trial in which the record was achieved
     * */
    Record(const string &sport,const string &competititon,const string & trial="");

    /**Record Copy Constructor
     * @param r the Record to copy
     */
    Record(const Record & record);

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
    * @param sport the name of the sport in which the record was achieved
    */
    void setSport(const string &sport);

    /** Get the name of the competition in which the record was achieved
    * @returns the name of the competition in which the record was achieved
    */
    const string &getCompetition() const;

    /** Set the name of the competition in which the record was achieved
    * @param competition the name of the competition in which the record was achieved
    */
    void setCompetition(const string &competition);

    /** Get the name of the trial in which the record was achieved
    * @returns the name of the trial in which the record was achieved
    */
    const string &getTrial() const;

    /** Set the name of the trial in which the record was achieved
    * @param trial the name of the trial in which the record was achieved
    */
    void setTrial(const string &trial="");

    /** Get the value of record
   * @returns the value of the record
   */
    float getRecord() const;

    /** Set the value of the record
    * @param record the value of the record
    */
    void setRecord(float record);

    /** Get the comparison criteria
   * @returns the comparison criteria (+ or -)
   */
    char getComparisonCriteria() const;

    /** Set the comparison criteria
    * @param comparisonCriteria the comparisonCriteria for the records - to check if a record is better or worse than actual one
    */
    void setComparisonCriteria(char comparisonCriteria);

    /** Get the country of the recordist
   * @returns the country of the recordist
   */
    const string &getCountry() const;

    /** Set the country of the recordist
    * @param country the country of the recordist
    */
    void setCountry(const string &country);

    /** Shows information about the Record in a human friendly way*/
    void showInfo() const;
};


#endif //PROJETO2_RECORD_H
