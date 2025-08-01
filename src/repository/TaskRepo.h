#include "Task.h"

class TaskRepo{
    private:
        Task m_task;
    
    public: 
        void add(Task task);
        void printAll();
        void modify();
        void remove();
        
};