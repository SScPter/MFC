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
			//记录图书的出借时间及名称
		++length;
	}
	else
	{
		if(length>=2) return;
		for(i=0;brw[i]!=0;++i){}
		brw[i].bookbrw=
			//记录图书的出借时间及名称
		++length;
	}	
	//健壮性，如果借满则显示
	//关于图书类对象相关属性的更改
}
void CRd::returnbook(CString a)
{
	int i;
	//健壮性，如果输入为零，提示没有此书
	for(i=0;brw[i].bookbrw!=a&&i<=4;++i){}
	//if(i>4)//健壮性提示输入ID错误
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