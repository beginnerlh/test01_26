//����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
//
//����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
//
//ʾ�� 1:
//
//���� : [1, 2, 3, 1]
//��� : true
//	 ʾ�� 2 :
//
// ���� : [1, 2, 3, 4]
//  ��� : false
//	   ʾ�� 3 :
//
//   ���� : [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
//	��� : true


//����һ�����������һ������ k���ж��������Ƿ����������ͬ������ i �� j��ʹ�� nums[i] = nums[j]������ i �� j �Ĳ�ľ���ֵ���Ϊ k��
//
//ʾ�� 1:
//
//���� : nums = [1, 2, 3, 1], k = 3
//��� : true
//	 ʾ�� 2 :
//
// ���� : nums = [1, 0, 1, 1], k = 1
//  ��� : true
//	   ʾ�� 3 :
//
//   ���� : nums = [1, 2, 3, 1, 2, 3], k = 2
//	��� : false
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int numsSize) {
	int count = 0;

	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{

			if (nums[i] == nums[j])
			{
				return true;
			}
		}
	}
	return false;
}
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {

	int count = 0;
	for (int i = 0; i<numsSize - 1; i++)
	{
		for (int j = i + 1; j<numsSize; j++)
		{

			if (nums[i] == nums[j] && (j - i <= k))
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int num[] = { 1, 2, 3, 1 };
	int len = sizeof(num) / sizeof(int);

	int a =containsDuplicate(num, len);
	//int a=containsNearbyDuplicate(num, len,3);
	printf("%d\n", a);
	system("pause");
	return 0;
}
