#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;					//����һ�����int��set,����Ϊs
    s.insert(5);				//��s�м���5,��ǰs�е�Ԫ��Ϊ[5],ʱ�临�Ӷ�ΪO��logn��
    s.insert(1);				//��s�м���1,��ǰs�е�Ԫ��Ϊ[1,5],ʱ�临�Ӷ�ΪO��logn��
    s.insert(6);				//��s�м���6,��ǰs�е�Ԫ��Ϊ[1,5,6],ʱ�临�Ӷ�ΪO��logn��
    s.insert(6);				//��s�м���6,��ǰs�е�Ԫ��Ϊ[1,5,6],ʱ�临�Ӷ�ΪO��logn��,��Ϊs���Զ�ȥ����������s�е�Ԫ�ز���
    
    
    //���������һ��s�е�Ԫ�ذ�
    for (auto it = s.begin(); it != s.end();it++)
    {
        cout << *it << '\n';//*��ʾ���it��ָ����Ǹ�λ�õ�Ԫ��
    }
    cout << '\n';
    cout << s.size() << '\n';	//���s�Ĵ�С
    cout << s.empty() << '\n';	//����s�Ƿ�Ϊ��
    auto it= s.find(101);		//��s�в���101���ҷ���ָ��101�ĵ�����,���û�ҵ��᷵��s.end(),ʱ�临�Ӷ�ΪO��logn��
    if(it!=s.end())
    {
        cout  << "s have " << 101 << '\n';
    }
    else
    {
        cout  << "s don't have " << 101 << '\n';
    }
    it= s.find(6);				//��s�в���6���ҷ���ָ��6�ĵ�����,���û�ҵ��᷵��s.end(),ʱ�临�Ӷ�ΪO��logn��
    if(it!=s.end())
    {
        cout  << "s have " << 6 << '\n';
    }
    else
    {
        cout  << "s don't have " << 6 << '\n';
    }
    s.erase(it);				//ɾ��itָ���λ�ã��������ɾ��6,ʱ�临�Ӷ�ΪO��logn������Ҫע�����ǧ��Ҫɾs.end�������λ�ã���RE,ʱ�临�Ӷ�ΪO��logn��
    s.insert(99);				//����s��[1,5,99]
    it=s.lower_bound(5); 		//����ָ���һ�����ڵ���5��Ԫ�صĵ����������û�з���s.end(),ʱ�临�Ӷ�ΪO��logn��
    cout << *it << '\n';
    it=s.upper_bound(5); 		//����ָ���һ������5��Ԫ�صĵ����������û�з���s.end(),ʱ�临�Ӷ�ΪO��logn��
    cout << *it << '\n';
    s.clear();					//���s��ʱ�临�Ӷ�ΪO��n��
    
    return 0;
}
