#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;
class doms
{
public:
	int *names;
	int size;
	int *fir;
};
class test
{
public:
	int m,n;
	string *reg,*nreg;
	int *sur,*log;
	void init();
	doms *dom;
	int calc(int index);
	/*int insert(int ind1,int ind2);
	int insdel(int ind1,int ind2);
	int adjrep(int ind1,int ind2);*/
	/*int neg2(int ind1,int ind2);
	int neg1(int ind1,int ind2);
	int equ(int ind1,int ind2);
	int pos1(int ind1,int ind2);
	int pos2(int ind1,int ind2);*/
	bool qwerty(char a,char b);
	int check(int a,int b,int t);
	void sort(void);
};
int test::check(int a,int b,int t)
{
	int count=0,inc=0;
	string::size_type it1=-1,it2=-1;
	switch (t)
	{
	case -1:
		count=0;
		inc=0;
		it1=-1;
		it2=-1;
		for(string::size_type i=0;i<nreg[a].size();i++)
			{
				if((nreg[a].at(i)!= reg[b].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>1)
					break;
			}
			}
		if(count<2)
			return 1;
		count=0;
		inc=0;
		for(string::size_type i=0;i<nreg[a].size();i++)
		{
			if((nreg[a].at(i)!= reg[b].at(i)))
			{
				it1=i;
				break;
			}
		}
		if(it1==-1)
			return 1;
		if(qwerty(nreg[a].at(it1),reg[b].at(it1)))
		{
			for(string::size_type i=it1+1;i<nreg[a].size();i++)
			{
				if((nreg[a].at(i)!= reg[b].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>1)
					break;
			}
			}
		if(count<2)
			return 2;
		}
		count=0;
		for(string::size_type i=it1;i<nreg[a].size();i++)
			{
				if((nreg[a].at(i)!= reg[b].at(i+1)))
				{
					count++;
					if(count>1)
						break;
					it2=i;
				}
		}
		if(count==0)
			return 1;
		if(count==1 && qwerty(nreg[a].at(it2),reg[b].at(it2+1)))
			return 2;
		return 3;
		break;
	case -2:
		count=0;
		inc=0;
		//string::size_type it1,it2;
		for(string::size_type i=0;i<nreg[a].size();i++)
		{
			if((nreg[a].at(i)!= reg[b].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>2)
					break;
			}
		}
		if(count<3)
			return 2;
		else
			return 3;
		break;
	case 0:
		count=0;
		it1=-1;
		it2=-1;
		for(string::size_type i=0;i<nreg[a].size();i++)
		{
			if(!(nreg[a].at(i)== reg[b].at(i)))
			{
				it1=i;
				break;
			}
		}
		for(string::size_type i=(nreg[a].size()-1);i>=0;i--)
		{
			if(!(nreg[a].at(i)== reg[b].at(i)))
			{
				it2=i;
				break;
			}
		}
		if(it1!=it2)
		{
			count=0;
			for(string::size_type i=it1;i<it2;i++)
			{
				if(!(nreg[a].at(i)== reg[b].at(i+1)))
				{
					count=1;
					break;
				}
			}
			if(count==0)
				return 2;
			count=0;
			for(string::size_type i=it1;i<it2;i++)
			{
				if(!(nreg[a].at(i+1)== reg[b].at(i)))
				{
					count=1;
					break;
				}
			}
			if(count==0)
				return 2;
			if(qwerty(nreg[a].at(it1),reg[b].at(it1)) && qwerty(nreg[a].at(it2),reg[b].at(it2)))
			{
				count=0;
				for(string::size_type i=it1+1;i<it2;i++)
				{
					if(!(nreg[a].at(i)== reg[b].at(i)))
					{
						count=1;
						break;
					}
				}
				if(count==0)
					return 2;
			}
		}
		else
		{
			if(qwerty(nreg[a].at(it1),reg[b].at(it1)))
				return 1;
			else
				return 2;

		}
		return 3;
		break;
		/*for(string::size_type i=0;i<nreg[a].size();i++)
		{
			if(!(nreg[a].at(i)== reg[b].at(i)))
			{
				count++;
				if(count>2)
					break;
				if(count==2)
					it2=i;
				if(count==1)
					it1=i;
			}
		}
		if(count>2)
			return 3;
		if(count==2)
		{
			if(qwerty(nreg[a].at(it1),reg[b].at(it1)) && qwerty(nreg[a].at(it2),reg[b].at(it2)))
				return 2;
		}
		if(count==1)
		{
			if(qwerty(nreg[a].at(it1),reg[b].at(it1)))
				return 1;
			else
				return 2;
		}
		return 3;
		break;*/
	case 1:
		count=0;
		inc=0;
		it1=-1;
		it2=-1;
		for(string::size_type i=0;i<reg[b].size();i++)
			{
				if((reg[b].at(i)!= nreg[a].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>1)
					break;
			}
			}
		if(count<2)
			return 1;
		count=0;
		inc=0;
		for(string::size_type i=0;i<reg[b].size();i++)
		{
			if((reg[b].at(i)!= nreg[a].at(i)))
			{
				it1=i;
				break;
			}
		}
		if(it1==-1)
			return 1;
		if(qwerty(reg[b].at(it1),nreg[a].at(it1)))
		{
			for(string::size_type i=it1+1;i<reg[b].size();i++)
			{
				if((reg[b].at(i)!= nreg[a].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>1)
					break;
			}
			}
		if(count<2)
			return 2;
		}
		count=0;
		for(string::size_type i=it1;i<reg[b].size();i++)
			{
				if((reg[b].at(i)!= nreg[a].at(i+1)))
				{
					count++;
					if(count>1)
						break;
					it2=i;
				}
		}
		if(count==0)
			return 1;
		if(count==1 && qwerty(reg[b].at(it2),nreg[a].at(it2+1)))
			return 2;
		return 3;
		break;
	case 2:
		count=0;
		inc=0;
		//string::size_type it1,it2;
		for(string::size_type i=0;i<reg[b].size();i++)
		{
			if((reg[b].at(i)!= nreg[a].at(i+inc)))
			{
				i--;
				inc++;
				count++;
				if(count>2)
					break;
			}
		}
		if(count<3)
			return 2;
		else
			return 3;
		break;
	default:
		return 3;
	}
}
/*int test::neg2(int ind1,int ind2)
{
	//if((reg[ind2].size()-nreg[ind1].size())==2)
	{
		char ins=97;
		for(string::size_type j=0;j<reg[ind2].size();j++)
		{
			for(string::size_type l=j;l<reg[ind2].size()-1;l++)
			{
				string s1(nreg[ind1]);
				string s2(reg[ind2]);
				s2.erase(j,1);
				s2.erase(l,1);
				if(s2.compare(s1)==0)
					return 2;
			}
		}
	}
	return 3;

}
int test::neg1(int ind1,int ind2)
{
	char ins=97,ins2=48;
	//if((reg[ind2].size()-nreg[ind1].size())==1)
	{
		char ins=97;
		for(string::size_type j=0;j<(reg[ind2].size());j++)
		{
			string s1(nreg[ind1]);
			string s2(reg[ind2]);
			s2.erase(j,1);
			if(s2.compare(s1)==0)
				return 1;
		}
	}
	//if(nreg[ind1].size()==(reg[ind2].size()-1))
	{
		for(string::size_type i=0;i<nreg[ind1].size();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins+j);
					for(string::size_type k=0;k<s2.size();k++)
					{
						s2.erase(k,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}
			}
			for(int j=0;j<10;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins2+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins2+j);
					for(string::size_type k=0;k<s2.size();k++)
					{
						s2.erase(k,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}
			}
		}
	}
	return 3;
}
int test::equ(int ind1,int ind2)
{
	char ins=97,ins2=48;
	//if(nreg[ind1].size()==reg[ind2].size())
	{
		for(string::size_type i=0;i<nreg[ind1].size();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins+j);
					if(s2.compare(s1)==0)
						return 1;
				}
			}
			for(int j=0;j<10;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins2+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins2+j);
					if(s2.compare(s1)==0)
						return 1;
				}
			}
		}
	}
	//if(nreg[ind1].size()==reg[ind2].size())
	{
		for(string::size_type i=0;i<nreg[ind1].size();i++)
		{
			for(string::size_type j=i+1;j<nreg[ind1].size()+1;j++)
			{
				for(int k=0;k<26;k++)
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					if(!(j==i+1 && qwerty(ins+k,s1.at(i))))
					{
						s1.insert(i,1,ins+k);
						s1.erase(j,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}
				for(int k=0;k<10;k++)
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					if(!(j==i+1 && qwerty(ins2+k,s1.at(i))))
					{
						s1.insert(i,1,ins2+k);
						s1.erase(j,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}

			}
		}
	}
	//if(nreg[ind1].size()==reg[ind2].size())
	{
		for(string::size_type i=0;i<nreg[ind1].size()-1;i++)
		{
			for(int j=0;j<26;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins+j);
					for(string::size_type k=i+1;k<nreg[ind1].size();k++)
					{
						for(int l=0;l<26;l++)
						{
							if(qwerty(nreg[ind1].at(k),ins+l))
							{
								string s11(s1);
								s11.erase(k,1);
								s11.insert(k,1,ins+l);
								if(s2.compare(s11)==0)
									return 2;
							}
						}
						for(int l=0;l<10;l++)
						{
							if(qwerty(nreg[ind1].at(k),ins2+l))
							{
								string s11(s1);
								s11.erase(k,1);
								s11.insert(k,1,ins2+l);
								if(s2.compare(s11)==0)
									return 2;
							}
						}
					}
				}
			}
			for(int j=0;j<10;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins2+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins2+j);
					for(string::size_type k=i+1;k<nreg[ind1].size();k++)
					{
						for(int l=0;l<26;l++)
						{
							if(qwerty(nreg[ind1].at(k),ins+l))
							{
								string s11(s1);
								s11.erase(k,1);
								s11.insert(k,1,ins+l);
								if(s2.compare(s11)==0)
									return 2;
							}
						}
						for(int l=0;l<10;l++)
						{
							if(qwerty(nreg[ind1].at(k),ins2+l))
							{
								string s11(s1);
								s11.erase(k,1);
								s11.insert(k,1,ins2+l);
								if(s2.compare(s11)==0)
									return 2;
							}
						}
					}
				}
			}
		}
	}

	return 3;
}
int test::pos1(int ind1,int ind2)
{
	char ins=97,ins2=48;
	//if((reg[ind2].size()-nreg[ind1].size())==-1)
	{
		char ins=97;
		for(string::size_type j=0;j<nreg[ind1].size();j++)
		{
			string s2(nreg[ind1]);
			string s1(reg[ind2]);
			s2.erase(j,1);
			if(s2.compare(s1)==0)
				return 1;
		}
	}
	//if(nreg[ind1].size()==(reg[ind2].size()+1))
	{
		for(string::size_type i=0;i<nreg[ind1].size();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins+j);
					for(string::size_type k=0;k<s1.size();k++)
					{
						s1.erase(k,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}
			}
			for(int j=0;j<10;j++)
			{
				if(qwerty(nreg[ind1].at(i),ins2+j))
				{
					string s1(nreg[ind1]);
					string s2(reg[ind2]);
					s1.erase(i,1);
					s1.insert(i,1,ins2+j);
					for(string::size_type k=0;k<s1.size();k++)
					{
						s1.erase(k,1);
						if(s2.compare(s1)==0)
							return 2;
					}
				}
			}
		}
	}
	return 3;
}
int test::pos2(int ind1,int ind2)
{
	//if((reg[ind2].size()-nreg[ind1].size())==-2)
	{
		char ins=97,ins2=48;
		for(string::size_type j=0;j<nreg[ind1].size();j++)
		{
			for(string::size_type l=j;l<nreg[ind1].size()-1;l++)
			{
				string s2(nreg[ind1]);
				string s1(reg[ind2]);
				s2.erase(j,1);
				s2.erase(l,1);
				if(s2.compare(s1)==0)
					return 2;
			}
		}
	}
	return 3;
}*/
void test::init()
{
	reg = new string[m];
	nreg =new string[n];
	sur =new int[n];
	log =new int[n];
	for(int i=0;i<n;i++)
	{
		sur[i]=3;
		log[i]=0;
	}
}
bool test::qwerty(char a ,char b)
{
	string str[4];
	str[0]="qwertyuiop";
	str[1]="asdfghjkl";
	str[2]="zxcvbnm";
	str[3]="1234567890";
	for(int i=0;i<4;i++)
	{
		string::size_type posa=str[i].find(a,0);
		string::size_type posb=str[i].find(b,0);
		if(posa!=string::npos && posb!=string::npos)
		{
			if((posa-posb)==-1 || (posa-posb)==1)
				return true;
		}
	}
	return false;
}
/*int test::insert(int ind1,int ind2)
{
if((reg[ind2].size()-nreg[ind1].size())==1)
{
char ins=97;
for(string::size_type j=0;j<(reg[ind2].size());j++)
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
s2.erase(j,1);
if(s2.compare(s1)==0)
return 1;
}
}
if((reg[ind2].size()-nreg[ind1].size())==-1)
{
char ins=97;
for(string::size_type j=0;j<nreg[ind1].size();j++)
{
string s2(nreg[ind1]);
string s1(reg[ind2]);
s2.erase(j,1);
if(s2.compare(s1)==0)
return 1;
}
}
if((reg[ind2].size()-nreg[ind1].size())==2)
{
char ins=97;
for(string::size_type j=0;j<reg[ind2].size();j++)
{
for(string::size_type l=j;l<reg[ind2].size()-1;l++)
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
s2.erase(j,1);
s2.erase(l,1);
if(s2.compare(s1)==0)
return 2;
}
}
}
if((reg[ind2].size()-nreg[ind1].size())==-2)
{
char ins=97;
for(string::size_type j=0;j<nreg[ind1].size();j++)
{
for(string::size_type l=j;l<nreg[ind1].size()-1;l++)
{
string s2(nreg[ind1]);
string s1(reg[ind2]);
s2.erase(j,1);
s2.erase(l,1);
if(s2.compare(s1)==0)
return 2;
}
}
}
return 3;
}
int test::insdel(int ind1,int ind2)
{
char ins=97;
if(nreg[ind1].size()==reg[ind2].size())
{
for(string::size_type i=0;i<nreg[ind1].size();i++)
{
for(string::size_type j=i+1;j<nreg[ind1].size()+1;j++)
{
for(int l=0;l<26;l++)
{
for(int k=0;k<26;k++)
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
if(!(j==i+1 && qwerty(ins+k,s1.at(i))))
{
s1.insert(i,1,ins+k);
s1.erase(j,1);
if(s2.compare(s1)==0)
return 2;
}
}
}
}
}
}
return 3;
}
int test::adjrep(int ind1,int ind2)
{
char ins=97;
if(nreg[ind1].size()==reg[ind2].size())
{
for(string::size_type i=0;i<nreg[ind1].size();i++)
{
for(int j=0;j<26;j++)
{
if(qwerty(nreg[ind1].at(i),ins+j))
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
s1.erase(i,1);
s1.insert(i,1,ins+j);
if(s2.compare(s1)==0)
return 1;
}
}
}
}
if(nreg[ind1].size()==(reg[ind2].size()-1))
{
for(string::size_type i=0;i<nreg[ind1].size();i++)
{
for(int j=0;j<26;j++)
{
if(qwerty(nreg[ind1].at(i),ins+j))
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
s1.erase(i,1);
s1.insert(i,1,ins+j);
for(string::size_type k=0;k<s2.size();k++)
{
s2.erase(k,1);
if(s2.compare(s1)==0)
return 2;
}
}
}
}
}
if(nreg[ind1].size()==(reg[ind2].size()+1))
{
for(string::size_type i=0;i<nreg[ind1].size();i++)
{
for(int j=0;j<26;j++)
{
if(qwerty(nreg[ind1].at(i),ins+j))
{
string s1(nreg[ind1]);
string s2(reg[ind2]);
s1.erase(i,1);
s1.insert(i,1,ins+j);
for(string::size_type k=0;k<s1.size();k++)
{
s1.erase(k,1);
if(s2.compare(s1)==0)
return 2;
}
}
}
}
}
return 3;

}*/
int test::calc(int index)
{
	int s=nreg[index].size();
	for(int j=0;j<dom[s].size;j++)
	{
		if(nreg[index].compare(reg[*(dom[s].names+j)])==0)
			return -1;
	}
	for(int i=-2;i<3;i++)
	{
		s=nreg[index].size();
		if(s+i>0)
		{
		for(int j=0;j<dom[s+i].size;j++)
		{
			int min=3;
			if(s>3 && s+i>3)
			{
				char a0=nreg[index].at(0);
				char a1=nreg[index].at(1);
				char ae=nreg[index].at(nreg[index].size()-1);
				char b0=reg[*(dom[s+i].names+j)].at(0);
				char b1=reg[*(dom[s+i].names+j)].at(1);
				char be=reg[*(dom[s+i].names+j)].at(reg[*(dom[s+i].names+j)].size()-1);
				if(a0==b0 || a0==b1 || a1==b0 || a1==b1 || ae==be)
					min=check(index,*(dom[s+i].names+j),i*(-1));
			}
			else
				min=check(index,*(dom[s+i].names+j),i*(-1));
			if(min!=3)
			log[index]++;
			if(min<sur[index])
			sur[index]=min;
			/*if(log[index]>=10)
			{
				break;
			}*/
		}
		/*if(log[index]>=10)
			break;*/
		}
	}
	/*for(int i=0;i<m;i++)
	{
		/*int p[5];
		for(int j=0;j<5;j++)
			p[j]=3;*/
		/*int s1=nreg[index].size();
		int s2=reg[i].size();
		int dif=s1-s2;
		int min=3;
		if(dif<-2 || dif>2)
			continue;
		/*if(dif==-1)
		{
			if(nreg[index].size()>2 && reg[i].size()>2)
			{
				if(check(index,i,dif))
				p[0]=neg1(index,i);
			}
			else
				p[0]=neg1(index,i);
			if(p[0]<min)
				min=p[0];
		}
		if(dif==-2)
		{
			if(nreg[index].size()>2 && reg[i].size()>2)
			{
				if(check(index,i,dif))
				p[1]=neg2(index,i);
			}
			else
				p[1]=neg2(index,i);
			if(p[1]<min)
				min=p[1];
		}
		if(dif==0)
		{
			if(nreg[index].size()>2 && reg[i].size()>2)
			{
				if(check(index,i,dif))
				p[2]=equ(index,i);
			}
			else
				p[2]=equ(index,i);
			if(p[2]<min)
				min=p[2];
		}
		if(dif==1)
		{
			if(nreg[index].size()>2 && reg[i].size()>2)
			{
				if(check(index,i,dif))
				p[3]=pos1(index,i);
			}
			else
				p[3]=pos1(index,i);
			if(p[3]<min)
				min=p[3];
		}
		if(dif==2)
		{
			if(nreg[index].size()>2 && reg[i].size()>2)
			{
				if(check(index,i,dif))
				p[4]=pos2(index,i);
			}
			else
				p[4]=pos2(index,i);
			if(p[4]<min)
				min=p[4];
		}*/
		/*min=check(index,i,dif);
		if(min!=3)
			log[index]++;*/
		/*if(p[0]<3 || p[1]<3 || p[2]<3 || p[3]<3 || p[4]<3)
			log[index]++;*/
		/*if(min<sur[index])
			sur[index]=min;
	}*/
	int pow=-1;
	int mul=1;
	while(log[index]>=mul)
	{
		mul*=10;
		pow++;
	}
	if(pow==-1)
		return 0;
	else
	{
		int surch=(3-sur[index])*25;
		return (surch+pow);
	}
}
int main()
{
	/////////input/////////
	test t;
	cin>>t.m;
	cin>>t.n;
	t.init();
	for(int i=0;i<t.m;i++)
		cin>>t.reg[i];
	for(int i=0;i<t.n;i++)
		cin>>t.nreg[i];
	//////////////////////////////
	t.sort();
	for(int i=0;i<t.n;i++)
	{
		/*if(i>3000)
		{
			int one=1,zero=0;
			int ter=one/zero;
			cout<<ter;
		}*/
		//cout<<20<<endl;
		cout<<t.calc(i);
		if(i!=(t.n)-1)
			cout<<endl;
	}
	//getch();
	return 0;
}
void test::sort(void)
{
		dom=new doms[100];
	for(int i=0;i<100;i++)
	{
		dom[i].names=new int;
		dom[i].fir=dom[i].names;
		*dom[i].names=-1;
		dom[i].size=0;
	}
	for(int i=0;i<m;i++)
	{
		dom[reg[i].size()].size++;
		*(dom[reg[i].size()].names+(dom[reg[i].size()].size)-1)=i;
	}
}
