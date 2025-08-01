#include "TaskRepo.h"

/* This function depends on the set of deleted ids. I am making a sequential creation of ids, so each time a task gets deleted its id will be sent to the m_deletedIdSet. Buy doing this we can reuse deleted id later. And not have weird gaps (ex: 1 2 5 9 19)

Benefits of using a set: each element is unique and ordered. Meaning we can use binary search.
*/
short TaskRepo::generateId()
{
    if (this->m_deletedIdSet.empty() == false) // set should NOT be empty.
    {
        short id = *m_deletedIdSet.begin(); // get the first deleted it in order to reuse it.
        m_deletedIdSet.erase(id);           // erase it from the deleted list. you are going to use it
        return id;
    }
    else
        m_currentId++;
}