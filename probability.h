#pragma once

#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <algorithm>

#include "utility.h"

float getListAverage(const std::vector<float>& v);

void getListModa(const std::vector<float>& v);

float getListMediana(const std::vector<float>& v);

float getListVariance(const std::vector<float>& v);

float getListAverageGeometry(const std::vector<float>& v);