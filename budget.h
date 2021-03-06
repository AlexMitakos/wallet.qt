#ifndef BUDGET_H
#define BUDGET_H

#include <QObject>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QCalendarWidget>
using namespace std;

class Budget
{
private:
    double amount;
    QDate dateFrom;
    QDate dateTo;
    int id;
public:
        Budget(int id,double amount,QDate dateFrom,QDate dateTo);
        Budget();
        int getID(){return id;}
        double getAmount() {return amount;}
        QDate getDateFrom() {return dateFrom;}
        QDate getDateTo() {return dateTo;}

        void setAmount(double amount) { this->amount=amount;}
        void setDateFrom(QDate dateFrom){this->dateFrom=dateFrom;}
        void setDateTo(QDate dateTo){this->dateTo=dateTo;}
};

#endif // BUDGET_H
