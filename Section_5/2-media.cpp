#include <iostream>
#include <vector>
#include <memory>

class Media {
public:
    virtual void play() = 0;
    virtual ~Media() {}
};

class Audio : public Media {
public:
    void play() override {
        std::cout << "Playing audio" << std::endl;
    }
};

class Video : public Media {
public:
    void play() override {
        std::cout << "Playing video" << std::endl;
    }
};

int main() {
    std::vector<std::unique_ptr<Media>> media;
    media.push_back(std::make_unique<Audio>());
    media.push_back(std::make_unique<Video>());
    for (auto& m : media) {
        m->play();
    }
    return 0;
}