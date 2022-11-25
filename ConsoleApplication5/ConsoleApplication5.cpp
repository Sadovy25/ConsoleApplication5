#include <algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
using namespace std;

int global_counter = 0;
int counter = 0;
const int SIZE = 9;
int arr[SIZE]{ 1,2,3,4,5,6,7,8,9 };

void find_missing_elements(vector<int>& v1, vector<int>& optional_v)
{
	optional_v.clear();
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE; j++)
		{
			if (v1[j] != arr[i])
			{
				counter++;
			}

		}
		if (counter == SIZE) { optional_v.push_back(arr[i]); }
		counter = 0;
	}
}
class Sudoku
{
public:
	vector<int>optional_v;
	vector<int> v1{ 0,7,2,3,0,4,8,1,9 };
	vector<int> v2{ 0,0,4,0,8,9,0,0,6 };
	vector<int> v3{ 9,0,0,1,0,0,2,5,4 };
	vector<int> v4{ 7,0,1,9,0,0,0,0,0 };
	vector<int> v5{ 0,0,0,0,0,2,8,0,7 };
	vector<int> v6{ 0,9,5,0,7,0,0,1,2 };
	vector<int> v7{ 4,0,5,2,3,7,0,0,0 };
	vector<int> v8{ 0,0,1,0,0,0,0,2,5 };
	vector<int> v9{ 6,2,0,5,0,1,7,0,0 };
	Sudoku()
	{

	}
	void Print()
	{
		int c = 0;
		for (size_t i = 0; i < SIZE; i++)
		{
			if (i >= 0 && i < 3)
			{
				for (size_t j = 0; j < 1; j++)
				{
					cout << v1[c] << " " << v1[c + 1] << " " << v1[c + 2] << "\t";
					cout << v2[c] << " " << v2[c + 1] << " " << v2[c + 2] << "\t";
					cout << v3[c] << " " << v3[c + 1] << " " << v3[c + 2] << "\t";
				}
				c += 3;
				cout << endl;
			}
			if (i == 3)
			{
				cout << endl;
				c = 0;
			}
			if (i >= 3 && i < 6)
			{

				for (size_t j = 0; j < 1; j++)
				{
					cout << v4[c] << " " << v4[c + 1] << " " << v4[c + 2] << "\t";
					cout << v5[c] << " " << v5[c + 1] << " " << v5[c + 2] << "\t";
					cout << v6[c] << " " << v6[c + 1] << " " << v6[c + 2] << "\t";
				}
				c += 3;
				cout << endl;
			}
			if (i == 6)
			{
				cout << endl;
				c = 0;
			}
			if (i >= 6 && i < 9)
			{
				for (size_t j = 0; j < 1; j++)
				{
					cout << v7[c] << " " << v7[c + 1] << " " << v7[c + 2] << "\t";
					cout << v8[c] << " " << v8[c + 1] << " " << v8[c + 2] << "\t";
					cout << v9[c] << " " << v9[c + 1] << " " << v9[c + 2] << "\t";
				}
				c += 3;
				cout << endl;
			}

		}

	}
	bool is_uniq()
	{

	}
	void Answer()
	{
		counter = 0;
		find_missing_elements(v1, optional_v);
		for (size_t i = 0; i < v1.size(); i++)
		{
			if (v1[i] == 0) { v1[i] = 10; }
			switch (i)
			{
			case 0:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
					&& v1[i] != v4[0] && v1[i] != v4[3] && v1[i] != v4[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])//
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 1:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
					&& v1[i] != v4[1] && v1[i] != v4[4] && v1[i] != v4[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])//
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 2:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
					&& v1[i] != v4[2] && v1[i] != v4[5] && v1[i] != v4[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])//
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 3:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
					&& v1[i] != v4[0] && v1[i] != v4[3] && v1[i] != v4[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])//
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 4:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
					&& v1[i] != v4[1] && v1[i] != v4[4] && v1[i] != v4[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])
				{
					v1[i] = optional_v[counter++];
				}//)
				break;
			}
			case 5:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
					&& v1[i] != v4[2] && v1[i] != v4[5] && v1[i] != v4[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 6:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
					&& v1[i] != v4[0] && v1[i] != v4[3] && v1[i] != v4[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 7:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
					&& v1[i] != v4[1] && v1[i] != v4[4] && v1[i] != v4[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			case 8:
			{
				find_missing_elements(v1, optional_v);
				counter = 0;
				if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
					&& v1[i] != v4[2] && v1[i] != v4[5] && v1[i] != v4[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])
				{
					v1[i] = optional_v[counter++];
				}
				break;
			}
			default:
				break;
			}

		}//1
		counter = 0;

		for (size_t i = 0; i < v2.size(); i++)
		{
			if (v2[i] == 0) { v2[i] = 10; }
			switch (i)
			{
			case 0:
			{
				counter = 0;
				if (v2[i] == 10 && v2[i] != v1[0] && v2[i] != v1[1] && v2[i] != v1[2] && v2[i] != v3[0] && v2[i] != v3[1] && v2[i] != v3[2]
					&& v2[i] != v5[0] && v2[i] != v5[3] && v2[i] != v5[6] && v2[i] != v8[0] && v2[i] != v8[3] && v2[i] != v8[6])
				{
					find_missing_elements(v2, optional_v);
					v2[i] = optional_v[counter];
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[0] || v2[i] == v1[1] || v2[i] == v1[2] || v2[i] == v3[0] || v2[i] == v3[1] || v2[i] == v3[2]
							|| v2[i] == v5[0] || v2[i] == v5[3] || v2[i] == v5[6] || v2[i] == v8[0] || v2[i] == v8[3] || v2[i] == v8[6])
						{
							v2[i] = optional_v[++counter];
							find_missing_elements(v2, optional_v);
						}
						else
							break;

					}
				}
				break;
			}
			case 1:
			{

				counter = 0;
				if (v2[i] == 10 && v2[i] != v1[0] && v2[i] != v1[1] && v2[i] != v1[2] && v2[i] != v3[0] && v2[i] != v3[1] && v2[i] != v3[2]
					&& v2[i] != v5[1] && v2[i] != v5[4] && v2[i] != v5[7] && v2[i] != v8[1] && v2[i] != v8[4] && v2[i] != v8[7])//
				{
					find_missing_elements(v2, optional_v);
					v2[i] = optional_v[counter];
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[0] || v2[i] == v1[1] || v2[i] == v1[2] || v2[i] == v3[0] || v2[i] == v3[1] || v2[i] == v3[2]
							|| v2[i] == v5[1] || v2[i] == v5[4] || v2[i] == v5[7] || v2[i] == v8[1] || v2[i] == v8[4] || v2[i] == v8[7])
						{

							v2[i] = optional_v[++counter];
							find_missing_elements(v2, optional_v);

						}

						else
						{
							break;
						}
					}
				}
				break;
			}
			case 2:
			{
				find_missing_elements(v2, optional_v);
				counter = 0;
				if (v2[i] == 10 && v2[i] != v1[0] && v2[i] != v1[1] && v2[i] != v1[2] && v2[i] != v3[0] && v2[i] != v3[1] && v2[i] != v3[2]
					&& v2[i] != v5[2] && v2[i] != v5[5] && v2[i] != v5[8] && v2[i] != v8[2] && v2[i] != v8[5] && v2[i] != v8[8])
				{
					v2[i] = optional_v[counter++];
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[0] || v2[i] == v1[1] || v2[i] == v1[2] || v2[i] == v3[0] || v2[i] == v3[1] || v2[i] == v3[2]
							|| v2[i] == v5[2] || v2[i] == v5[5] || v2[i] == v5[8] || v2[i] == v8[2] || v2[i] == v8[5] || v2[i] == v8[8])
						{
							v2[i] = optional_v[counter++];
						}
						else
						{
							optional_v.erase(optional_v.begin() + j);
							break;
						}
					}
				}
				counter = 0;
				break;
			}
			case 3:
			{
				find_missing_elements(v2, optional_v);
				if (v2[i] == 10 && v2[i] != v1[3] && v2[i] != v1[4] && v2[i] != v1[5] && v2[i] != v3[3] && v2[i] != v3[4] && v2[i] != v3[5]
					&& v2[i] != v5[0] && v2[i] != v5[3] && v2[i] != v5[6] && v2[i] != v8[0] && v2[i] != v8[3] && v2[i] != v8[6])
				{
					v2[i] = optional_v[counter];

					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[3] || v2[i] == v1[4] || v2[i] == v1[5] || v2[i] == v3[3] || v2[i] == v3[4] || v2[i] == v3[5]
							|| v2[i] == v5[0] || v2[i] == v5[3] || v2[i] == v5[6] || v2[i] == v8[0] || v2[i] == v8[3] || v2[i] == v8[6])
						{
							v2[i] = optional_v[j];
						}
						else
						{
							optional_v.erase(optional_v.begin() + j);
							break;
						}
					}
				}
				counter = 0;
				break;
			}
			case 4:
			{
				find_missing_elements(v2, optional_v);
				if (v2[i] == 10 && v2[i] != v1[3] && v2[i] != v1[4] && v2[i] != v1[5] && v2[i] != v3[3] && v2[i] != v3[4] && v2[i] != v3[5]
					&& v2[i] != v5[1] && v2[i] != v5[4] && v2[i] != v5[7] && v2[i] != v8[1] && v2[i] != v8[4] && v2[i] != v8[7])
				{
					v2[i] = optional_v[counter++];
				}
				break;
			}
			case 5:
			{
				find_missing_elements(v2, optional_v);
				if (v2[i] == 10 && v2[i] != v1[3] && v2[i] != v1[4] && v2[i] != v1[5] && v2[i] != v3[3] && v2[i] != v3[4] && v2[i] != v3[5]
					&& v2[i] != v5[2] && v2[i] != v5[5] && v2[i] != v5[8] && v2[i] != v8[2] && v2[i] != v8[5] && v2[i] != v8[8])
				{
					v2[i] = optional_v[counter++];
				}
				break;
			}
			case 6:
			{
				counter = 0;
				if (v2[i] == 10 && v2[i] != v1[6] && v2[i] != v1[7] && v2[i] != v1[8] && v2[i] != v3[6] && v2[i] != v3[7] && v2[i] != v3[8]
					&& v2[i] != v5[0] && v2[i] != v5[3] && v2[i] != v5[6] && v2[i] != v8[0] && v2[i] != v8[3] && v2[i] != v8[6])
				{
					v2[i] = optional_v[counter];

					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[6] || v2[i] == v1[7] || v2[i] == v1[8] || v2[i] == v3[6] || v2[i] == v3[7] || v2[i] == v3[8]
							|| v2[i] == v5[0] || v2[i] == v5[3] || v2[i] == v5[6] || v2[i] == v8[0] || v2[i] == v8[3] || v2[i] == v8[6])
						{
							v2[i] = optional_v[j];
						}
						else
						{
							optional_v.erase(optional_v.begin() + j);
							break;
						}
					}
				}
				break;
			}
			case 7:
			{
				find_missing_elements(v2, optional_v);
				if (v2[i] == 10 && v2[i] != v1[6] && v2[i] != v1[7] && v2[i] != v1[8] && v2[i] != v3[6] && v2[i] != v3[7] && v2[i] != v3[8]
					&& v2[i] != v5[1] && v2[i] != v5[4] && v2[i] != v5[7] && v2[i] != v8[1] && v2[i] != v8[4] && v2[i] != v8[7])
				{
					v2[i] = optional_v[counter++];
				}
				break;
			}
			case 8:
			{
				find_missing_elements(v2, optional_v);
				if (v2[i] == 10 && v2[i] != v1[6] && v2[i] != v1[7] && v2[i] != v1[8] && v2[i] != v3[6] && v2[i] != v3[7] && v2[i] != v3[8]
					&& v2[i] != v5[2] && v2[i] != v5[5] && v2[i] != v5[8] && v2[i] != v8[2] && v2[i] != v8[5] && v2[i] != v8[8])
				{
					v2[i] = optional_v[counter++];
				}
				break;
			}
			default:
				break;
			}

		}
		for (size_t i = 0; i < v3.size(); i++)
		{
			if (v3[i] == 0) { v3[i] = 10; }
			switch (i)
			{
			case 0:
			{
				/*find_missing_elements(v2, optional_v);
				counter = 0;
				if (v2[i] == 10 && v2[i] != v1[0] && v2[i] != v1[1] && v2[i] != v1[2] && v2[i] != v3[0] && v2[i] != v3[1] && v2[i] != v3[2]
					&& v2[i] != v5[0] && v2[i] != v5[3] && v2[i] != v5[6] && v2[i] != v8[0] && v2[i] != v8[3] && v2[i] != v8[6])
				{
					find_missing_elements(v2, optional_v);
					v2[i] = optional_v[counter++];
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v2[i] == v1[0] || v2[i] == v1[1] || v2[i] == v1[2] || v2[i] == v3[0] || v2[i] == v3[1] || v2[i] == v3[2]
							|| v2[i] == v5[0] || v2[i] == v5[3] || v2[i] == v5[6] || v2[i] == v8[0] || v2[i] == v8[3] || v2[i] == v8[6])
						{
							find_missing_elements(v2, optional_v);
							v2[i] = optional_v[counter++];
						}
						if (v2[i] == 10 && v2[i] != v1[0] && v2[i] != v1[1] && v2[i] != v1[2] && v2[i] != v3[0] && v2[i] != v3[1] && v2[i] != v3[2]
							&& v2[i] != v5[0] && v2[i] != v5[3] && v2[i] != v5[6] && v2[i] != v8[0] && v2[i] != v8[3] && v2[i] != v8[6])
						{
							find_missing_elements(v2, optional_v);
						}

					}
				}*/
				break;
			}
			case 1:
			{
				counter = 0;
				if (v3[i] == 10 && v3[i] != v1[0] && v3[i] != v1[1] && v3[i] != v1[2] && v3[i] != v2[0] && v3[i] != v2[1] && v3[i] != v2[2]
					&& v3[i] != v6[1] && v3[i] != v6[4] && v3[i] != v6[7] && v3[i] != v9[1] && v3[i] != v9[4] && v3[i] != v9[7])
				{
					find_missing_elements(v3, optional_v);
					v3[i] = optional_v[counter];
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v3[i] == v1[0] || v3[i] == v1[1] || v3[i] == v1[2] || v3[i] == v2[0] || v3[i] == v2[1] || v3[i] == v2[2]
							|| v3[i] == v6[1] || v3[i] == v6[4] || v3[i] == v6[7] || v3[i] == v9[1] || v3[i] == v9[4] || v3[i] == v9[7])
						{
							v3[i] = optional_v[counter];
							counter++;
						}
						else
							break;

					}
				}
				break;
			}
			case 2:
			{
				counter = 0;
				if (v3[i] == 10 && v3[i] != v1[0] && v3[i] != v1[1] && v3[i] != v1[2] && v3[i] != v2[0] && v3[i] != v2[1] && v3[i] != v2[2]
					&& v3[i] != v6[2] && v3[i] != v6[5] && v3[i] != v6[8] && v3[i] != v9[2] && v3[i] != v9[5] && v3[i] != v9[8])
				{
					find_missing_elements(v3, optional_v);
					v3[i] = optional_v[counter];
					
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v3[i] == v1[0] || v3[i] == v1[1] || v3[i] == v1[2] || v3[i] == v2[0] || v3[i] == v2[1] || v3[i] == v2[2]
							|| v3[i] == v6[2] || v3[i] == v6[5] || v3[i] == v6[8] || v3[i] == v9[2] || v3[i] == v9[5] || v3[i] == v9[8])
						{
							v3[i] = optional_v[counter];
							counter++;
						}
						else
							break;

					}
				}
				break;
			}
			case 3:
			{

				break;
			}
			case 4:
			{
				counter = 0;
				if (v3[i] == 10 && v3[i] != v1[3] && v3[i] != v1[4] && v3[i] != v1[5] && v3[i] != v2[3] && v3[i] != v2[4] && v3[i] != v2[5]
					&& v3[i] != v6[1] && v3[i] != v6[4] && v3[i] != v6[7] && v3[i] != v9[1] && v3[i] != v9[4] && v3[i] != v9[7])
				{
					find_missing_elements(v3, optional_v);
					v3[i] = optional_v[counter];
					
					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v3[i] == v1[3] || v3[i] == v1[4] || v3[i] == v1[5] || v3[i] == v2[3] || v3[i] == v2[4] || v3[i] == v2[5]
							|| v3[i] == v6[1] || v3[i] == v6[4] || v3[i] == v6[7] || v3[i] == v9[1] || v3[i] == v9[4] || v3[i] == v9[7])
						{

							v3[i] = optional_v[j];
							
						}
						else
							break;
					}
				}
				break;
			}
			case 5:
			{
				counter = 0;
			if (v3[i] == 10 && v3[i] != v1[3] && v3[i] != v1[4] && v3[i] != v1[5] && v3[i] != v2[3] && v3[i] != v2[4] && v3[i] != v2[5]
				&& v3[i] != v6[2] && v3[i] != v6[5] && v3[i] != v6[8] && v3[i] != v9[2] && v3[i] != v9[5] && v3[i] != v9[8])
			{
				find_missing_elements(v3, optional_v);
				v3[i] = optional_v[0];

				for (size_t j = 0; j < optional_v.size(); j++)
				{
					if (v3[i] == v1[3] || v3[i] == v1[4] || v3[i] == v1[5] || v3[i] == v2[3] || v3[i] == v2[4] || v3[i] == v2[5]
						|| v3[i] == v6[2] || v3[i] == v6[5] || v3[i] == v6[8] || v3[i] == v9[2] || v3[i] == v9[5] || v3[i] == v9[8])
					{

						v3[i] = optional_v[j];
						find_missing_elements(v3, optional_v);
					}
					else
						break;
				}
			}
			break;
			}
			case 6:
			{

				break;
			}
			case 7:
			{
				counter = 0;
				if (v3[i] == 10 )
				{
					find_missing_elements(v3, optional_v);
					v3[i] = optional_v[counter];

					for (size_t j = 0; j < optional_v.size(); j++)
					{
						if (v3[i] == v1[6] || v3[i] == v1[7] || v3[i] == v1[8] || v3[i] == v2[6] || v3[i] == v2[7] || v3[i] == v2[8]
							|| v3[i] == v6[1] || v3[i] == v6[4] || v3[i] == v6[7] || v3[i] == v9[1] || v3[i] == v9[4] || v3[i] == v9[7])
						{

							v3[i] = optional_v[counter++];
							
						}
						
					}
				}
				break;
			}
			case 8:
			{

				break;
			}
			default:
				break;
			}

		}

	}
};

const void Print_Matrix(vector<int>v)
{
	cout << "===============================" << endl;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t i = 0; i < 3; i++)
		{
			cout << "| ";
			for (size_t j = 0; j < 3; j++)
			{
				cout << v[j] << " ";
			}
			cout << "|\  ";
		}
		cout << endl;
		for (size_t i = 3; i < 6; i++)
		{
			cout << "| ";

			for (size_t j = 3; j < 6; j++)
			{
				cout << v[j] << " ";
			}
			cout << "|\  ";
		}
		cout << endl;
		for (size_t i = 6; i < 9; i++)
		{
			cout << "| ";

			for (size_t j = 6; j < 9; j++)
			{
				cout << v[j] << " ";
			}
			cout << "|\  ";
		}
		if (i == 2) { cout << endl; }
		else
			cout << endl << endl;
	}
	cout << "===============================" << endl;
}

int main()
{
	srand(time(NULL));
	vector<int>v1 = { 0,7,2,3,0,4,8,1,9 };
	vector<int> v2{ 0,0,4,0,8,9,0,0,6 };
	vector<int> v3{ 9,0,0,1,0,0,2,5,4 };
	vector<int> v4{ 7,0,1,9,0,0,0,0,0 };
	vector<int> v5{ 0,0,0,0,0,2,8,0,7 };
	vector<int> v6{ 0,9,5,0,7,0,0,1,2 };
	vector<int> v7{ 4,0,5,2,3,7,0,0,0 };
	vector<int> v8{ 0,0,1,0,0,0,0,2,5 };
	vector<int> v9{ 6,2,0,5,0,1,7,0,0 };

	/*for (size_t i = 0; i < 9; i++)
	{
		v1.push_back(i);
	}
	*/

	cout << "v1: " << endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i];
	}
	cout << endl;

	/*vector<int>v3 = { 0,7,2,3,0,4,8,1,9 };*/

	int x = 0;
	vector<int>optional_v;

	find_missing_elements(v1, optional_v);

	cout << "x= " << x << ". z= " << counter << endl;
	cout << endl;
	cout << "Elements: ";
	for (size_t i = 0; i < optional_v.size(); i++)
	{
		cout << optional_v[i] << ",";
	}
	cout << endl;

	cout << "v1 before : " << endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "v1 after : " << endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		if (v1[i] == 0)
		{
			v1[i] = 10;
		}
	}
	//for (size_t i = 0; i < v1.size(); i++)
	//{

	//	switch (i)
	//	{
	//	case 0:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
	//			&& v1[i] != v3[0] && v1[i] != v3[3] && v1[i] != v3[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])//
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 1:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
	//			&& v1[i] != v3[1] && v1[i] != v3[4] && v1[i] != v3[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])//
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 2:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[0] && v1[i] != v2[1] && v1[i] != v2[2] && v1[i] != v3[0] && v1[i] != v3[1] && v1[i] != v3[2]
	//			&& v1[i] != v3[2] && v1[i] != v3[5] && v1[i] != v3[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])//
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 3:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
	//			&& v1[i] != v3[0] && v1[i] != v3[3] && v1[i] != v3[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])//
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 4:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
	//			&& v1[i] != v3[1] && v1[i] != v3[4] && v1[i] != v3[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])
	//		{
	//			v1[i] = optional_v[counter++];
	//		}//)
	//		break;
	//	}
	//	case 5:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[3] && v1[i] != v2[4] && v1[i] != v2[5] && v1[i] != v3[3] && v1[i] != v3[4] && v1[i] != v3[5]
	//			&& v1[i] != v3[2] && v1[i] != v3[5] && v1[i] != v3[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 6:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
	//			&& v1[i] != v3[0] && v1[i] != v3[3] && v1[i] != v3[6] && v1[i] != v7[0] && v1[i] != v7[3] && v1[i] != v7[6])
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 7:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
	//			&& v1[i] != v3[1] && v1[i] != v3[4] && v1[i] != v3[7] && v1[i] != v7[1] && v1[i] != v7[4] && v1[i] != v7[7])
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	case 8:
	//	{
	//		if (v1[i] == 10 && v1[i] != v2[6] && v1[i] != v2[7] && v1[i] != v2[8] && v1[i] != v3[6] && v1[i] != v3[7] && v1[i] != v3[8]
	//			&& v1[i] != v3[2] && v1[i] != v3[5] && v1[i] != v3[8] && v1[i] != v7[2] && v1[i] != v7[5] && v1[i] != v7[8])
	//		{
	//			v1[i] = optional_v[counter++];
	//		}
	//		break;
	//	}
	//	default:
	//		break;
	//	}

	//}

	for (size_t i = 0; i < v1.size(); i++)
	{
		if (v1[i] == 0)
		{
			v1[i] = optional_v[counter++];
		}
	}

	for (size_t i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << endl << "v3 before:" << endl;
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	find_missing_elements(v3, optional_v);
	cout << "\nelements: ";
	for (size_t i = 0; i < optional_v.size(); i++)
	{
		cout << optional_v[i] << ",";
	}
	cout << endl;

	cout << "v3 after:" << endl;
	
	cout << endl;
	for (size_t i = 0; i < v3.size(); i++)
	{

		if (v3[i] == 0)
		{
			v3[i] = optional_v[counter++];
		}
	}
	counter = 0;
	for (size_t i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << " ";
	}
	cout << endl;
	vector<int>a{ 1,2,3,4,5 };
	for (size_t i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	cout << endl;
	a.erase(a.begin() + 0);
	for (size_t i = 0; i < a.size(); i++)
	{
		cout << a[i];
	}
	cout << endl;
	Sudoku sudoku;
	cout << endl << endl;
	sudoku.Print();
	sudoku.Answer();
	cout << "*********************" << endl;
	sudoku.Print();
	for (size_t i = 0; i < 10; i++)
	{
		cout << i;
		if (i == 5)
		{
			break;
		}
	}
	return 0;
}

