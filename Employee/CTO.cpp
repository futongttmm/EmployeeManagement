
#include "CTO.h"

CTO::CTO(const string& name,double salary,double allow,double bonus):
    Technician(name,salary,allow),
    Manager(name,salary,bonus),
    Employee(name,salary,L4){}
CTO::CTO(const string & filename):
    Technician(filename),Manager(filename),Employee(filename){
    
    fscanf(file,"%lf %lf",&m_allow,&m_bonus);
    fflush(file);
}
CTO::~CTO(void){}

void CTO::printExtra(void)const{
    cout << "职位:技术主管" << endl;
    cout << "研发津贴:" << m_allow << endl;
    cout << "绩效奖金:" << m_bonus << endl;
}
double CTO::calMerit(void){
    return (Technician::calMerit() + Manager::calMerit()) / 2;
}




