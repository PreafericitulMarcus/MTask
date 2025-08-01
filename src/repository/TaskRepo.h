#include "Task.h"
#include <set>

class TaskRepo
{
private:
    Task m_task;

    short m_currentId = 1;
    std::set<short> m_deletedIdSet;

public:
    void add(Task task);
    void printAll();
    void modify();
    void remove(short id);

    short generateId();
};