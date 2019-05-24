// Copyright 2018 Alexander Gallego
//
#pragma once
// inspired by scylladb's stdx.hh
#if __cplusplus >= 201703L && __has_include(<optional>) && __has_include(<string_view>) 
#include <optional>
#include <string_view>
namespace stdx = std;
#else
#include <experimental/optional>
#include <experimental/string_view>
namespace stdx = std::experimental;
#endif
