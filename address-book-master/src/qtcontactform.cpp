#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        genderField(new QLineEdit()),
        nationalityField(new QLineEdit())
{
    addRow("<font style = 'color:green'>First Name</font>", firstNameField);
    addRow("<font style = 'color:yellow'>Last Name</font>", lastNameField);
    addRow("<font style = 'color:orange'>Address</font>", addressField);
    addRow("<font style = 'color:black'>Phone Number</font>", phoneNumberField);
    addRow("<font style = 'color:pink'>Email</font>", emailField);
    addRow("<font style = 'color:blue'>gender</font>", genderField);
    addRow("<font style = 'color:red'>nationality</font>", nationalityField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    genderField->setText("");
    nationalityField->setText("");
}
