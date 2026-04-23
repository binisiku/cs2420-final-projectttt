#include "VectorPlaylist.h"
#include <iostream>
#include <algorithm>

void VectorPlaylist::addSong(const std::string& song) {
    songs.push_back(song);
}

void VectorPlaylist::removeSong(const std::string& song) {
    for (auto it = songs.begin(); it != songs.end(); ++it) {
        if (*it == song) {
            songs.erase(it);
            return;
        }
    }
}

bool VectorPlaylist::contains(const std::string& song) const {
    for (const auto& s : songs) {
        if (s == song) return true;
    }
    return false;
}

void VectorPlaylist::print() const {
    std::cout << "\n=== Vector Playlist ===\n";
    for (const auto& song : songs) {
        std::cout << "- " << song << std::endl;
    }
}

void VectorPlaylist::sortSongs() {
    std::sort(songs.begin(), songs.end());
}

std::vector<std::string>& VectorPlaylist::getSongs() {
    return songs;
}