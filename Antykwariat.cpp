#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <string>

using namespace std;

struct Book {
	string title;
	int pages;
	int availability;
};

bool compareBooks(const Book& book1, const Book& book2) {
	if (book1.availability != book2.availability) 
		return book1.availability > book2.availability;
	
	if (book1.pages != book2.pages)
		return book1.pages < book2.pages;

	return book1.title < book2.title;
}

int main() {
	int n;
	cin >> n;
	cin.ignore();

	vector<Book> books;

	for (int i = 0; i < n; i++) {
		Book book;
		getline(cin, book.title);
		cin >> book.pages;
		cin >> book.availability;
		cin.ignore();
		books.push_back(book);
	}

	sort(books.begin(), books.end(), compareBooks);

	for (const auto& book : books) {
		cout << book.availability << " " << book.title << " " << book.pages << endl;
	}

	return 0;
}