#include "TaskService.h"

void TaskService::create(string name, bool completed, bool starred, string detail, time_t time)
{
    short id = m_repo.generateId();
    Task newTask(id, name, completed, starred, detail, time);
    this->m_repo.add(newTask);
}

void TaskService::remove(short id)
{
    this->m_repo.remove(id);
}
