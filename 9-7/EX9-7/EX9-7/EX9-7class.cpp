#include"EX9-7class.h"
void CP::setpid(const CString& a )
{
	pID=a;
}
void CP::getpid(CString& a)
{
	a=pID;
}
void CRd::borrowbook(CString a)
{
	int i;
	if(isVip)
	{
		if(length>=5) return;
		for(i=0;brw[i]!=0;++i){}
		brw[i].bookbrw=a;
			//��¼ͼ��ĳ���ʱ�估����
		++length;
	}
	else
	{
		if(length>=2) return;
		for(i=0;brw[i]!=0;++i){}
		brw[i].bookbrw=
			//��¼ͼ��ĳ���ʱ�估����
		++length;
	}	
	//��׳�ԣ������������ʾ
	//����ͼ�������������Եĸ���
}
void CRd::returnbook(CString a)
{
	int i;
	//��׳�ԣ��������Ϊ�㣬��ʾû�д���
	for(i=0;brw[i].bookbrw!=a&&i<=4;++i){}
	//if(i>4)//��׳����ʾ����ID����
	brw[i].datebrw=0;
	brw[i].bookbrw="0";
	length--;
}
void CRd::addbalance(float a){
	balance+=a;
}
void CRd::changevip(bool a){
	isVip=a;
}
void CRd::getvip(bool & a){
	a=isVip;
}
void CAdm::addbook(){
	new