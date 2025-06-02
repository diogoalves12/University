//
// Created by Diogo Alves on 02/06/2025.
//

#include "Hanoi.h"

Tower::Tower(int n_disks) : n_disks(n_disks), idx_top(-1) {
    disks_ = new int[n_disks];
}

Tower::~Tower() {
    delete[] disks_;
}

int Tower::top() const {
    if(idx_top == -1) return 0;
    return disks_[idx_top];
}

void Tower::add(int disk) {
    if(idx_top + 1 >= n_disks) return;
    if(idx_top != -1 && disks_[idx_top] < disk) return;
    disks_[++idx_top] = disk;
}

void Tower::remove() {
    if (idx_top >= 0) {
        idx_top--;
    }
}

std::string Tower::str() const {
    std::ostringstream oss;
    oss << "[ ";
    for (int i = 0; i <= idx_top; ++i) {
        if (i > 0) oss << " ";
        oss << disks_[i];
    }
    oss << " ]";
    return oss.str();
}


void Hanoi::move(std::initializer_list<disk_move> dmoves) {
    for (const disk_move& dm : dmoves) {
        int from = dm.from;
        int to = dm.to;

        if (from < 0 || from > 2 || to < 0 || to > 2 || from == to) continue;

        int disk = towers_[from].top();
        if (disk == 0) continue;

        int top_to = towers_[to].top();
        if (top_to == 0 || disk < top_to) {
            towers_[to].add(disk);
            towers_[from].remove();
        }
    }
}