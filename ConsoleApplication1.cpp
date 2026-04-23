#include <iostream>
#include "VectorPlaylist.h"
#include "LinkedListPlaylist.h"

int main() {

    VectorPlaylist vp;
    LinkedListPlaylist lp;

    // Add songs
    vp.addSong("BLACKPINK - Pink Venom");
    vp.addSong("BLACKPINK - How You Like That");
    vp.addSong("CORTIS - REDRED");
    vp.addSong("CORTIS - Joyride");

    lp.addSong("BLACKPINK - Pink Venom");
    lp.addSong("BLACKPINK - How You Like That");
    lp.addSong("CORTIS - REDRED");
    lp.addSong("CORTIS - Joyride");

    // Display
    vp.print();
    lp.print();

    // Test features
    std::cout << "\nSearching...\n";
    std::cout << (vp.contains("BLACKPINK - Pink Venom") ? "Found" : "Not Found") << std::endl;

    // Remove example
    vp.removeSong("CORTIS - REDRED");
    lp.removeSong("CORTIS - Joyride");

    std::cout << "\nAfter removal:\n";
    vp.print();
    lp.print();

    // Sort vector
    vp.sortSongs();

    std::cout << "\nAfter sorting vector:\n";
    vp.print();

    return 0;
}