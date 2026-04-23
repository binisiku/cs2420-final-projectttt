#pragma once
#include <vector>
#include <string>

class VectorPlaylist {
private:
    std::vector<std::string> songs;

public:
    void addSong(const std::string& song);
    void removeSong(const std::string& song);
    bool contains(const std::string& song) const;
    void print() const;
    void sortSongs();
    std::vector<std::string>& getSongs();
};