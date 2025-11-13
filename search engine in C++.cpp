#include <iostream>
#include <string>
#include <vector>
#include <map>

std::map<std::string, std::vector<std::string>> index;

void indexDocument(const std::string& document, const std::string& documentName) {
    std::string word;
    std::istringstream iss(document);

    while (iss >> word) {
        // Remove punctuation and convert to lowercase (simplified)
        std::string cleanedWord = "";
        for (char c : word) {
            if (isalpha(c)) {
                cleanedWord += tolower(c);
            }
        }

        if (!cleanedWord.empty()) {
            index[cleanedWord].push_back(documentName);
        }
    }
}

std::vector<std::string> search(const std::string& query) {
    std::string cleanedQuery = "";
    for (char c : query) {
        if (isalpha(c)) {
            cleanedQuery += tolower(c);
        }
    }

    if (index.find(cleanedQuery) != index.end()) {
        return index[cleanedQuery];
    } else {
        return {};
    }
}

int main() {
    std::string documentName, document;

    // Index some example documents
    documentName = "document1.txt";
    document = "This is an example document for the search engine.";
    indexDocument(document, documentName);

    documentName = "document2.txt";
    document = "C++ is a programming language used to build software applications.";
    indexDocument(document, documentName);

    std::string query;
    std::cout << "Enter a search query: ";
    std::cin.ignore();
    std::getline(std::cin, query);

    std::vector<std::string> results = search(query);

    if (!results.empty()) {
        std::cout << "Search results:\n";
        for (const std::string& result : results) {
            std::cout << result << "\n";
        }
    } else {
        std::cout << "No results found for the query.\n";
    }

    return 0;
}
