//
// Created by Diogo Alves on 05/06/2025.
//

#include "Book.h"
#include <string>
#include <set>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <map>

using namespace std;

void Book::build_index(const set<string>& words) {
    index_.clear();

    map<string, string> word_map;
    for (const string& word : words) {
        string lw = word;
        transform(lw.begin(), lw.end(), lw.begin(), ::tolower);
        word_map[lw] = word;
    }

    for (size_t page_num = 0; page_num < book_.size(); ++page_num) {
        const Page& page = book_[page_num];

        for (size_t line = 0; line < page.get_num_lines(); ++line) {
            string text = page.get_line(line);
            istringstream iss(text);
            string word;

            while (iss >> word) {
                string lw = word;
                transform(lw.begin(), lw.end(), lw.begin(), ::tolower);

                if (word_map.count(lw)) {
                    const string& original = word_map[lw];
                    index_[original].insert(page_num + 1);
                }
            }
        }
    }
}
