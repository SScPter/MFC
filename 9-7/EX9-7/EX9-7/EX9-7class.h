class CP
{
protected:
	CString pID;
public:
	void setpid(const CString&);
	void getpid(CString&);
};
//读者类
class CRd: public CP
{
	bool isVip;
	float balance;
	Nodebrw brw[5];
	int length;
public:
	void borrowbook(CString);
	void returnbook(CString);
	void addbalance(float );
	void changevip(bool a);
	void getvip(bool& );
};
//管理员类
class CAdm: public CP
{
public:
	void addbook();
	void deletebook();
	void editbook();
};
//读者节点
struct Noder
{
	CRd* link;
	CRd r;
};
//管理员节点
struct Nodea
{
	CAdm* link;
	CAdm a;
};
//借书节点
struct Nodebrw
{
	int datebrw;
	CString bookbrw;
};
//读者链表
class Clistr{
	Noder* head;
	Noder* tail;
public:
	Clistr() {tail = head = new Noder; head->link =tail->link= NULL;};
	~Clistr() {makeempty(head); if (head)delete head;};
	void createdown();
	void print();
	Noder* find(CString);
	void get(CString);
	void makeempty(Noder*);//删除从下一个结点开始的所有结点
};

//class Clistr
void Clistr::createdown() //与注册页面联系
{
	// string name;
	// float amount = 0;
	// while (1) {
	// 	cout << "Please input the amount" << endl;
	// 	cin >> amount;
	// 	if (!amount)break;
	// 	cout << "Please input the name" << endl;
	// 	cin >> name;
	//
	// 	####tail->link = new Noder(name, amount);
	// 	####tail = tail->link;
	//
	// }
	// cout << "End of input." << endl;
}
Noder* Clistr::find(CString name) {
	Noder* p = head->link;
	while (p->Name != name && p != tail->link) {cout << p->Name; p = p->link;}
	//健壮性，未找到则在对话框中显示
	return p;
}
void Clistr::get(CString name,CString& a,bool& b,float& c) {
	get(find(name),a,b,c);
}
void Clistr::makeempty(Noder* q) {
	Noder* p = q->link;
	Noder* temp = NULL;
	while (p) {
		temp = p->link;
		delete p;
		p = temp;
	}
}
/*void Clistr::print() {
	cout << "No\tName\tAmount\tReward" << endl;
	Noder* p = head->link;
	for (int i = 1; p != tail->link; ++i) {
		cout << i << '\t' << p->Name << '\t' << p->Amount << '\t' << '\t' << p->Reward << endl;
		p = p->link;
	}
}*/
//管理员链表
class Clista
{
};