#include "History.h"
#include <iostream>
using namespace std;

History::History(int nRows, int nCols) {
	m_Rows = nRows;
	m_Cols = nCols;
	// Looping inside 2D History array 
	for (int i = 1; i < m_Rows; i++) {
		for (int j = 1; j < m_Cols; j++) {
			m_historyArr[i][j] = '.';
		}
	}
}

bool History::record(int r, int c) {
	
	if (r > m_Rows || c > m_Cols || r < 1 || c < 1) {
		return false;
	}
	else {
		if (m_historyArr[r][c] == '.') {
			m_historyArr[r][c] = 'A';
		}
		else if (m_historyArr[r][c] >= 'A' && m_historyArr[r][c] < 'Z') {
			m_historyArr[r][c]++;
		}
		else if (m_historyArr[r][c] == 'Z') {
			//nothing needs to change 
		}
			
	}

	return true;
}

void History::display() const {
	
	char historyChar;
	clearScreen(); 
	for (int i = 1; i < m_Rows; i++) {
		for (int j = 1; j < m_Cols; j++) {
			cout << m_historyArr[i][j];
		}
		cout << endl;
	}
	/*
	for (int i = 1; i < m_Rows; i++) {
		for (int j = 1; j < m_Cols; j++) {
			if ('A' + m_historyArr[i][j] <= 'Z') {
				historyChar = 'A' + m_historyArr[i][j];
			}
			else {
				historyChar = 'Z';
			}
			cout << historyChar;
		}
	}*/
	cout << endl;
}