#include <stack>  
#include <algorithm>
#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(0);  //C ǥ�� ������� ����ȭ�� ���� �ڵ��Դϴ�. 
	//�� �κ��� C++���� ����� �ӵ��� ���̱� ���� ������ �˷��� �ֽ��ϴ�.
	cin.tie(0);
	cout.tie(0);
	stack<long long int> numberStack2;
	stack<pair<long long int, long long int>> numberStack;
	long long int num, n, i=0, count =0, data, sumcount=0;
	long long int head;
	cin >> num;
	//for (i = 0; i < num; i++) {
	//	cin >> n;
	//	numberList.push_back(n);
	//}
	//while (numberList.size() != 1) {
	//	numberList.unique(); //���� �迭���� ���ӵ� �� ����
	//	auto minIterator = min_element(numberList.begin(), numberList.end());
	//	data = *minIterator+1;
	//	count++;
	//	
	//	numberList.insert(minIterator, data);
	//	numberList.erase(minIterator);

	//}
	//cout << count-1;

	for (i = 0; i < num; i++) {
		cin >> n;
		if (numberStack.empty()) {
			numberStack.push({ n, 0 });
			head = n;
		}
		else {
			if (numberStack.top().first< n) {
				if (head <= n) {
					count = n - head;
					head = n;
					numberStack.push({ n, count });
				}
				else {
					
					numberStack.push({ n, 0 });
				}

			}
			else if(numberStack.top().first == n){
				;
			}
			else {
				count = numberStack.top().first - n;
				numberStack.push({n, count});
			}
			
		}
		
	}
	while (numberStack.empty() == false) {
		sumcount  += numberStack.top().second;
		numberStack.pop();
	}

	cout << sumcount;
	

	


}