
//ActionCalculategpa.h
using namespace std;
class ActionCalculategpa : public Action
{
private:
	int c;
	string lettergrade;
	double credit;
	double totgrade = 0;
	double totalc = 0;
	double totalcredit = 0;
	double gpa = 0;

public:
	ActionCalculategpa(Registrar*);
	bool virtual Execute();
	virtual ~ActionCalculategpa();

};
