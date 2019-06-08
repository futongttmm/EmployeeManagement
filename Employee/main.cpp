#include "Employee.h"
#include "Technician.h"
#include "Manager.h"
#include "CTO.h"
#include "Company.h"

int main()
{
    Company& company = Company::getCompany();
    company.run();
    return 0;
}




