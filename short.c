#define use _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Leapyear(int year)
{
	int derm1 = 0, derm2 = 0, derm3 = 0;
	int leap = 0;
	derm1 = year % 4;
	derm2 = year % 100;
	derm3 = year % 400;
	if (derm1 == derm3 && derm1 != derm2)
	{
		leap += 1;
	}
	return leap;
}

int year_ads(int x, int year, int month)
{
	int y1, y2, y3, y4;
	int a = 0, b = 0, c = 0, d = 0;
	int sum_year = 0;
	int leap = Leapyear(year);
	y4 = year % 10;
	y3 = (year / 10) % 10;
	y2 = (year / 100) % 10;
	y1 = (year / 1000) % 10;
	if (y1 == month)
	{
		a += 1;
	}
	if (y2 == month)
	{
		b += 1;
	}
	if (y3 == month)
	{
		c += 1;
	}
	if (y4 == month)
	{
		d += 1;
	}
	if (leap == 1)
	{
		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
		{
			sum_year = (a + b + c + d) * 31;
		}
		if (month == 2)
		{
			sum_year = (a + b + c + d) * 29;
		}
		else
		{
			sum_year = (a + b + c + d) * 30;
		}
	}
	else
	{
		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
		{
			sum_year = (a + b + c + d) * 31;
		}
		if (month == 2)
		{
			sum_year = (a + b + c + d) * 28;
		}
		else
		{
			sum_year = (a + b + c + d) * 30;
		}
	}
	return sum_year;
}

int month_ads(int year, int month, int x)
{
	int sum_month;
	int i = 31, j = 30, k = 29, p = 28;//i大月，j小月，k闰月，p非闰月
	int n;
	int month_num = 0;
	int month1, month2;
	int leap = Leapyear(year);
	month2 = month % 10;
	month1 = (month / 10) % 10;
	if (x == month1 && month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
	{
		month_num += 31;
		if (x == month2)
		{
			month_num += 31;
		}
	}
	if (x == month1 && month == 2 && leap == 1)
	{
		month_num += 29;
		if (x == month2)
		{
			month_num += 29;
		}
	}
	if (x == month1 && month == 2 && leap == 0)
	{
		month_num += 28;
		if (x == month2)
		{
			month_num += 28;
		}
	}
	if (x == month1 && month == 4 && month == 6 && month == 9 && month == 11)
	{
		month_num += 30;
		if (x == month2)
		{
			month_num += 30;
		}
	}
	return month_num;
}


//if (x == 0)
//{
//	if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10)
//	{
//		month_num = 31;
//		return month_num;
//	}
//	if (month == 2)
//	{
//		if (leap == 1)
//		{
//			month_num = 29;
//			return month_num;
//		}
//		else
//		{
//			return month_num = 28;
//		}
//	}
//	if(month==4&&month==6&&month==9)
//	{
//		return month = 30;
//	}
//	else
//	{
//		


/*{
	if (month !=2&&month<11)
	{
		sum_month = 12;
		return sum_month;

	}
	else
	{
		sum_month = 11;
		return sum_month;
	}
}
else
{
	if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
	{
		for (i - 1; i > 0; i--)
		{
			n = i % 10;
			if (n == x)
			{
				month_num += 1;
			}
			if ((i / 10) % 10 == x)
			{
				month_num += 1;
			}
		}
	}
	if (month == 2)
	{
		if (leap == 1)
		{
			for (k - 1; k > 0; k--)
			{
				n = k % 10;
				if (n == x)
				{
					month_num += 1;
				}
				if ((i / 10) % 10 == x)
				{
					month_num += 1;
				}
			}
		}
		else
		{
			for (p - 1; p > 0; p--)
			{
				n = p % 10;
				if (n == x)
				{
					month_num += 1;
				}
				if ((i / 10) % 10 == x)
				{
					month_num += 1;
				}
			}
		}
	}
	else
	{
		for (j - 1; j > 0; j--)
		{
			n = j % 10;
			if (j == x)
			{
				month_num += 1;
			}
			if ((j / 10) % 10 == x)
			{
				month_num += 1;
			}
		}
	}
	return month_num;
}*/


int day_ads(int year, int x, int month)
{
	int leap = Leapyear(year);
	int day_num = 0;
	int i = 31, j = 30, k = 29, p = 28;//i大月，j小月，k闰月，p非闰月
	int n;
	if (x == 0)
	{
		if (month != 2)
		{
			day_num = 12;
			return day_num;

		}
		else
		{
			day_num = 11;
			return day_num;
		}
	}
	else
	{
		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
		{
			for (i - 1; i > 0; i--)
			{
				n = i % 10;
				if (n == x)
				{
					day_num += 1;
				}
				if ((i / 10) % 10 == x)
				{
					day_num += 1;
				}
			}
		}
		if (month == 2)
		{
			if (leap == 1)
			{
				for (k - 1; k > 0; k--)
				{
					n = k % 10;
					if (n == x)
					{
						day_num += 1;
					}
					if ((i / 10) % 10 == x)
					{
						day_num += 1;
					}
				}
			}
			else
			{
				for (p - 1; p > 0; p--)
				{
					n = p % 10;
					if (n == x)
					{
						day_num += 1;
					}
					if ((i / 10) % 10 == x)
					{
						day_num += 1;
					}
				}
			}
		}
		else
		{
			for (j - 1; j > 0; j--)
			{
				n = j % 10;
				if (j == x)
				{
					day_num += 1;
				}
				if ((j / 10) % 10 == x)
				{
					day_num += 1;
				}
			}
		}
		return day_num;
	}
}
int main()
{
	puts("请输入年月以及需要的数字");
	int month, year, x;
	int sum = 0;
	int year_add, month_add, day_add;

	scanf_s("%d,%d,%d", &year, &month, &x);
	year_add = year_ads(x, year, month);
	month_add = month_ads(year, month, x);
	day_add = day_ads(year, x, month);
	sum = year_add + month_add + day_add;
	printf("数字一共出现了：%d", sum);
	return 0;
}

//#define use _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Leapyear(int year)
//{
//	int derm1 = 0, derm2 = 0, derm3 = 0;
//	int leap = 0;
//	derm1 = year % 4;
//	derm2 = year % 100;
//	derm3 = year % 400;
//	if (derm1 == derm3&&derm1 != derm2)
//	{
//		leap += 1;
//	}
//	return leap;
//}
//
//int year_ads(int x, int year, int month)
//{
//	int y1, y2, y3, y4;
//	int a=0, b=0, c=0, d=0;
//	int sum_year = 0;
//	int leap = Leapyear(year);
//	y4 = year % 10;
//	y3 = (year / 10) % 10;
//	y2= (year / 100) % 10;
//	y1= (year / 1000) % 10;
//	if (y1==month)
//	{
//		a += 1;
//	}
//	if (y2 == month)
//	{
//		b += 1;
//	}
//	if (y3 == month)
//	{
//		c += 1;
//	}
//	if (y4 == month)
//	{
//		d += 1;
//	}
//	if (leap == 1)
//	{
//		if (month == 1 && month == 3 &&month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
//		{
//			sum_year = (a + b + c + d) * 31;
//		}
//		if (month == 2)
//		{
//			sum_year = (a + b + c + d) * 29;
//		}
//		else
//		{
//			sum_year = (a + b + c + d) * 30;
//		}
//	}
//	else
//	{
//		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
//		{
//			sum_year = (a + b + c + d) * 31;
//		}
//		if (month == 2)
//		{
//			sum_year = (a + b + c + d) * 28;
//		}
//		else
//		{
//			sum_year  = (a + b + c + d) * 30;
//		}
//	}
//	return sum_year;
//}
//
//int month_ads(int year, int month, int x)
//{
//	int sum_month;
//	int i = 31, j = 30, k = 29, p = 28;//i大月，j小月，k闰月，p非闰月
//	int n;
//	int month_num = 0;
//	int month1, month2;
//	int leap = Leapyear(year);
//	month2 = month % 10;
//	month1 = (month / 10) % 10;
//	if (x == month1&&month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
//	{
//		month_num += 31;
//		if (x == month2)
//		{
//			month_num += 31;
//		}
//	}
//	if (x == month1&&month == 2 && leap == 1)
//	{
//		month_num += 29;
//		if (x == month2)
//		{
//			month_num += 29;
//		}
//	}
//	if (x == month1&&month == 2 && leap == 0)
//	{
//		month_num += 28;
//		if (x == month2)
//		{
//			month_num += 28;
//		}
//	}
//	if (x == month1&&month == 4 && month == 6 && month == 9 && month == 11)
//	{
//		month_num += 30;
//		if (x == month2)
//		{
//			month_num += 30;
//		}
//	}
//	return month_num;
//}
//
//
//	//if (x == 0)
//	//{
//	//	if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10)
//	//	{
//	//		month_num = 31;
//	//		return month_num;
//	//	}
//	//	if (month == 2)
//	//	{
//	//		if (leap == 1)
//	//		{
//	//			month_num = 29;
//	//			return month_num;
//	//		}
//	//		else
//	//		{
//	//			return month_num = 28;
//	//		}
//	//	}
//	//	if(month==4&&month==6&&month==9)
//	//	{
//	//		return month = 30;
//	//	}
//	//	else
//	//	{
//	//		
//
//	
//	/*{
//		if (month !=2&&month<11)
//		{
//			sum_month = 12;
//			return sum_month;
//
//		}
//		else
//		{
//			sum_month = 11;
//			return sum_month;
//		}
//	}
//	else
//	{
//		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
//		{
//			for (i - 1; i > 0; i--)
//			{
//				n = i % 10;
//				if (n == x)
//				{
//					month_num += 1;
//				}
//				if ((i / 10) % 10 == x)
//				{
//					month_num += 1;
//				}
//			}
//		}
//		if (month == 2)
//		{
//			if (leap == 1)
//			{
//				for (k - 1; k > 0; k--)
//				{
//					n = k % 10;
//					if (n == x)
//					{
//						month_num += 1;
//					}
//					if ((i / 10) % 10 == x)
//					{
//						month_num += 1;
//					}
//				}
//			}
//			else
//			{
//				for (p - 1; p > 0; p--)
//				{
//					n = p % 10;
//					if (n == x)
//					{
//						month_num += 1;
//					}
//					if ((i / 10) % 10 == x)
//					{
//						month_num += 1;
//					}
//				}
//			}
//		}
//		else
//		{
//			for (j - 1; j > 0; j--)
//			{
//				n = j % 10;
//				if (j == x)
//				{
//					month_num += 1;
//				}
//				if ((j / 10) % 10 == x)
//				{
//					month_num += 1;
//				}
//			}
//		}
//		return month_num;
//	}*/
//
//
//int day_ads(int year, int x,int month)
//{
//	int leap = Leapyear(year);
//	int day_num = 0;
//	int i = 31, j = 30, k = 29, p = 28;//i大月，j小月，k闰月，p非闰月
//	int n;
//	if (x == 0)
//	{
//		if (month != 2)
//		{
//			day_num= 12;
//			return day_num;
//
//		}
//		else
//		{
//			day_num = 11;
//			return day_num;
//		}
//	}
//	else
//	{
//		if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
//		{
//			for (i - 1; i > 0; i--)
//			{
//				n = i % 10;
//				if (n == x)
//				{
//					day_num += 1;
//				}
//				if ((i / 10) % 10 == x)
//				{
//					day_num += 1;
//				}
//			}
//		}
//		if (month == 2)
//		{
//			if (leap == 1)
//			{
//				for (k - 1; k > 0; k--)
//				{
//					n = k % 10;
//					if (n == x)
//					{
//						day_num += 1;
//					}
//					if ((i / 10) % 10 == x)
//					{
//						day_num += 1;
//					}
//				}
//			}
//			else
//			{
//				for (p - 1; p > 0; p--)
//				{
//					n = p % 10;
//					if (n == x)
//					{
//						day_num += 1;
//					}
//					if ((i / 10) % 10 == x)
//					{
//						day_num += 1;
//					}
//				}
//			}
//		}
//		else
//		{
//			for (j - 1; j > 0; j--)
//			{
//				n = j % 10;
//				if (j == x)
//				{
//					day_num += 1;
//				}
//				if ((j / 10) % 10 == x)
//				{
//					day_num += 1;
//				}
//			}
//		}
//		return day_num;
//	}
//}
//int main()
//{
//	puts("请输入年月以及需要的数字");
//	int month, year, x;
//	int sum = 0;
//	int year_add, month_add, day_add;
//
//	scanf_s("%d,%d,%d",&year, &month, &x);
//	year_add = year_ads(x, year, month);
//	month_add = month_ads(year,month,x);
//	day_add = day_ads(year, x, month);
//	sum = year_add + month_add + day_add;
//	printf("数字一共出现了：%d", sum);
//	return 0;
//}
#include <stdio.h>
int test(int a, int b, int x)
{
	int n = 0;
	int sum = 0;
	int a1, a2, a3, a4, a5;
	for (; a < b; a++)
	{
		a5 = a % 10;
		a4 = (a / 10) % 10;
		a3 = (a / 100) % 10;
		a2 = (a / 1000) % 10;
		a1 = (a / 10000) % 10;
		if (a5 == x)
		{
			n += 1;
		}
		if (a4 == x)
		{
			n += 1;
		}
		if (a3 == x)
		{
			n += 1;
		}
		if (a2 == x)
		{
			n += 1;
		}
		if (a1 += 1)
		{
			n += 1;
		}
	}
	sum = n;
	return sum;
}
int main()
{
	int a, b, x;
	int sum = 0;
	printf("输入五位数范围内的两个数。并且选择所需的数字");
	scanf_s("%d %d %d", &a, &b, &x);
	sum = test(a, b, x);
	printf("该数字出现的次数是：%d", sum);
	return 0;
}