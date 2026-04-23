#pragma once
#pragma once
#include <string>

struct Node {
    std::string song;
    Node* next;
};

class LinkedListPlaylist {
private:
    Node* head;

public:
    LinkedListPlaylist();
    ~LinkedListPlaylist();

    void addSong(const std::string& song);
    void removeSong(const std::string& song);
    bool contains(const std::string& song) const;
    void print() const;
};