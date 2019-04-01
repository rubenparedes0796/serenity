#pragma once

#include <time.h>

class GElapsedTimer {
public:
    GElapsedTimer() { }

    bool is_valid() const { return m_valid; }
    void start();
    int elapsed() const;

private:
    bool m_valid { false };
    struct timeval m_start_time { 0, 0 };
};
