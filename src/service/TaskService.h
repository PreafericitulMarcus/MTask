#include "TaskUi.h"
#include "Task.h"
#include "TaskRepo.h"

class TaskService
{
private:
    Ui m_ui;
    TaskRepo m_repo;

public:
    void create(string name, bool completed, bool starred, string detail, time_t time);
    void remove(short id);
    void modify();
    void printAll();
};
