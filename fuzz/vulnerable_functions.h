// Copyright 2016 Google Inc. All Rights Reserved.
// Licensed under the Apache License, Version 2.0 (the "License");

#ifndef LESSONS_04_VULNERABLE_FUNCTIONS_H_
#define LESSONS_04_VULNERABLE_FUNCTIONS_H_

#include <stdint.h>
#include <stddef.h>
#include <cstring>

#include <array>
#include <string>
#include <vector>

bool VulnerableFunction1(const uint8_t* data, size_t size);
bool VulnerableFunction2(const uint8_t* data, size_t size, bool verify_hash);
bool VulnerableFunction3(const uint8_t* data, size_t size, std::size_t flags);


#endif // LESSONS_04_VULNERABLE_FUNCTIONS_H_
