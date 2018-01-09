#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    -gender name
    */

    bool hasNames = !(firstName.empty() || lastName.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    if(firstName.empty() &&
        lastName.empty() &&
        phoneNumber.empty() &&
        address.empty()
}

bool Contact::isEmpty() const
{l.empty()&&
            gender.empty()&&
            nationality.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
         &&
        emai
