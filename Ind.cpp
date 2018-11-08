/*� ���������� �������� ������������������ ����� �����, ������������� �����. ������� ����������� ������, ��������� ������ �� ������
�����. �������� ������ ������� 4 ������� �� ������. ������� �� ����� �������� ����������� ������.*/
#include <iostream>
using namespace std;
struct List
{
    int Info;
    List *next;
}*p;

void Create()
{
    List *r, *v;
    if (p!=NULL) cout<<"Spisok uje sozdan"<<endl;
    else
    {
        int d;
        cout<<"������� ������ ����� �������� 0"<<endl;
        do
        {
            cin>>d;
            if (d%2==0)
            {

                r=new List;
                r->Info=d;
                r->next=NULL;
                if (p==NULL)
                {
                    p=r;
                    v=r;
                }
                else
                {
                    v->next=r;
                    v=r;
                }
            }
        }
        while (d!=0);

    }
}

void exclude()
{
    List *q, *r;
    r=p;
    while(r!=NULL)
    {

        if (r->Info%4==0)
        {
            q->next=r->next;
            delete r;
            r=q->next;

        }
        else
        {
            q=r;
            r=r->next;
        }
    }
    cout<<"�������� �����, ������� 4-��"<<endl;
}

void Show()
{
    List *r;
    if (p==NULL) cout<<"Spiska net";
    else
    {
        r=p;
        while(r!=NULL)
        {
            cout<<r->Info<<" ";
            r=r->next;
        }
    }
}

int main()
{
    setlocale(0, "rus");
    p=NULL;
    int n;
    do
    {
        cout<<"1 - ������� ������, ���������� ������ �����"<<endl;
        cout<<"2 - �������� ���������, ������� 4"<<endl;
        cout<<"3 - ����� �� �����"<<endl;
        cout<<"0 - vyhod"<<endl;
        cin>>n;
        switch (n)
        {
        case 1:
        {
            Create();
            break;
        };
        case 2:
        {
            exclude();
            break;
        };
        case 3:
        {
            Show();
            break;
        };
        }

    }
    while(n!=0);
}
