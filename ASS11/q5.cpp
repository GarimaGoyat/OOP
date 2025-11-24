#include <iostream>
#include <list>
using namespace std;

int main() {
    list<string> songs;

    songs.push_front("SongA");
    songs.push_back("SongB");
    songs.push_back("SongC");

    songs.pop_front();   // remove SongA
    songs.pop_back();    // remove SongC

    songs.push_back("SongB");
    songs.push_back("SongX");
    songs.remove("SongB");   // removes all SongB

    // insert and erase using iterator
    auto it = songs.begin();
    songs.insert(it, "NewSong");   // insert at beginning

    it = songs.begin();
    songs.erase(it);               // remove first song

    cout << "Playlist: ";
    for (string s : songs)
        cout << s << " ";
}
