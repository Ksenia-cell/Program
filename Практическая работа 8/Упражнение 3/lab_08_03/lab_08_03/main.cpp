#include<iostream>
#include"student.h"

int main()
{
	Student* student02 = new Student;
	
	string name;
	string last_name;
	cout << "Name :";
	getline(cin, name);
	cout << "Last name :";
	getline(cin, last_name);
	int scores[5];
	int sum = 0;
	for (int i = 0; i < 5; ++i) 
	{
		cout << "Score " << i + 1 << ": "; 
		cin >> scores[i];      
		sum += scores[i];     
	} 
	student02->set_name(name);
	student02->set_last_name(last_name);
	student02->set_scores(scores);
	float average_score = sum / 5;
	student02->set_average_score(average_score);
	cout << "Average ball for " << student02->get_name() << " " << student02->get_last_name() << " is " << student02->get_average_score() << endl;
	
	delete student02;

}