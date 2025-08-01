#include "Task.h"

void Task::setId(int id)
{
    this->m_id = id;
}

int Task::getId() const
{
    return this->m_id;
}

void Task::setName(string name)
{
    this->m_name = name;
}

string Task::getName() const
{
    return this->m_name;
}

void Task::setCompletion(bool completed)
{
    this->m_completed = completed;
}

bool Task::isCompleted() const
{
    return this->m_completed;
}

void Task::setStar(bool star)
{
    this->m_starred = star;
}

bool Task::isStarred() const
{
    return this->m_starred;
}

void Task::setDetail(string detail)
{
    this->m_detail = detail;
}

string Task::getDetail() const
{
    return this->m_detail;
}

void Task::setDateTime(time_t time)
{
    this->m_time = time;
}

time_t Task::getTimeDate() const
{
    return this->m_time;
}

string Task::print() const
{
    // TODO: think about how to show.
}