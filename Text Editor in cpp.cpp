#include <ncurses.h>
#include <fstream>
#include <string>

int main() {
    initscr(); // Initialize ncurses
    raw();     // Line buffering disabled
    keypad(stdscr, TRUE); // Enable special keys like arrow keys
    noecho(); // Don't echo user input
    curs_set(2); // Set cursor to visible

    WINDOW* win = newwin(LINES - 1, COLS, 0, 0); // Create a window
    scrollok(win, TRUE); // Enable scrolling

    std::string filename = "text.txt";
    std::ifstream file(filename);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            waddstr(win, line.c_str()); // Display the contents of the file
            waddch(win, '\n');
        }
        file.close();
    }

    wrefresh(win);

    int ch;
    while ((ch = wgetch(win)) != KEY_F(2)) {
        switch (ch) {
            case KEY_DOWN:
                wscrl(win, 1); // Scroll down
                break;
            case KEY_UP:
                wscrl(win, -1); // Scroll up
                break;
            case 10: // Enter key
                waddch(win, '\n');
                break;
            case KEY_BACKSPACE:
            case 127: // Backspace key
                wdelch(win);
                break;
            default:
                waddch(win, ch); // Print the character
                break;
        }
        wrefresh(win);
    }

    std::ofstream outfile(filename);
    wmove(win, 0, 0);
    while (wgetch(win) != ERR) {
        char buffer[COLS];
        winnstr(win, buffer, COLS);
        outfile << buffer << '\n';
    }
    outfile.close();

    delwin(win);
    endwin(); // End ncurses

    return 0;
}
