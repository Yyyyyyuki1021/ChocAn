#ifndef SERVER_LEDGER
#define SERVER_LEDGER

using namespace std;
#include <fstream>
#include <iostream>
#include <string>
#include <vector>


class service_record
{
public:
    service_record();
    ~service_record();
    int create_record(string set_date, int set_mem_num, int set_prov_num, int set_code, int set_fee);
    int display(void);
    //int compare(int to_compare)

private:
  string provide_date;
  int receive_year;
  int receive_mon;
  int receive_day;
  int receive_hour;
  int receive_min;
  int mem_num;
  int prov_num;
  int service_code;
  int fee;
};


class service_ledger
{
public:
    service_ledger();
    ~service_ledger();
    int insert(const service_record &to_add);
    int display(void);
    //int compare(int to_compare);

private:
    vector<service_record> record_list;
};

#endif
