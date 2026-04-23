#include "LinkedListPlaylist.h"
#include <iostream>

LinkedListPlaylist::LinkedListPlaylist() {
    head = nullptr;
}

LinkedListPlaylist::~LinkedListPlaylist() {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedListPlaylist::addSong(const std::string& song) {
    Node* newNode = new Node{ song, nullptr };

    if (!head) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedListPlaylist::removeSong(const std::string& song) {
    Node* current = head;
    Node* prev = nullptr;

    while (current) {
        if (current->song == song) {
            if (!prev) {
                head = current->next;
            }
            else {
                prev->next = current->next;
            }
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

bool LinkedListPlaylist::contains(const std::string& song) const {
    Node* current = head;
    while (current) {
        if (current->song == song) return true;
        current = current->next;
    }
    return false;
}

void LinkedListPlaylist::print() const {
    std::cout << "\n=== Linked List Playlist ===\n";
    Node* current = head;
    while (current) {
        std::cout << "- " << current->song << std::endl;
        current = current->next;
    }
}