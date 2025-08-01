#include <string>
#include <ctime>

using std::string;

// string name, bool completed, bool starred, string detail, time_t time

class Task
{
private:
    int m_id;
    string m_name = "new task";
    bool m_completed = false;
    bool m_starred = false;
    string m_detail = "no details";
    time_t m_time;

public:

    Task(int id, string name, bool completed, bool star, string detail, time_t time);

    void setId(int id);
    int getId() const;

    void setName(string name);
    string getName() const;

    void setCompletion(bool completed);
    bool isCompleted() const;

    void setStar(bool star);
    bool isStarred() const;

    void setDetail(string detail);
    string getDetail() const;

    void setDateTime(time_t time);
    time_t getTimeDate() const;

    string print() const;
};
