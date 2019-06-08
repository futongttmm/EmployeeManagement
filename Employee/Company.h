#ifndef __COMPANY_H_
#define __COMPANY_H_

#include "Employee.h"
#include "Technician.h"
#include "Manager.h"
#include "CTO.h"
#include <vector>//容器

class Company{//企业类
public:
    //获取企业对象
    static Company& getCompany(void);
    //求员工个数
    size_t size(void)const;
    //运行
    void run(void);
    //打印菜单选项
    void printMenu(void);
    //增加
    void addEmployee(void);
    //删除
    void deleteEmployee(void);
    //修改
    void updateEmployee(void);
    //查询
    void queryEmployee(void);
    void queryAll(void);//查询所有员工信息
    void queryOne(void);//查询指定员工信息
    //结算工资
    void paySalary(void);
    
private:
    Company(void);
    ~Company(void);
    Company(const Company&);
    Employee* loadInfo(const string& filename);
    
private:
    static Company company;
    //保存员工对象的容器(类似数组)
    vector<Employee*> empVector;
};

#endif//__COMPANY_H_

