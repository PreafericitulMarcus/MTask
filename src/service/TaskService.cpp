#include "TaskService.h"
#include <utils.cpp>

void TaskService::create(string name, bool completed, bool starred, string detail, time_t time)
{
    int id = createId(name, time);
    Task newTask(id, name, completed, starred, detail, time);
    this->m_repo.add(newTask);
}


