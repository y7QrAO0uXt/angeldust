#pragma once

#include <windows.h>
#include <iostream>
#include <cstdint>
#include <memory>
#include <vector>
#include <thread>
#include <chrono>
#include <array>
#include <fstream>
#include <istream>
#include <unordered_map>
#include <intrin.h>

#include <d3d9.h>
#include <d3dx9.h>
#pragma comment(lib, "d3d9.lib")
#pragma comment(lib, "d3dx9.lib")
#include "../core/menu/imgui/imgui.h"
#include "../core/menu/imgui/dx9/imgui_impl_dx9.h"
#include "../core/menu/elements.hpp"

#include "utilities/singleton.hpp"
#include "utilities/fnv.hpp"
#include "utilities/utilities.hpp"
#include "utilities/render.hpp"
#include "utilities/hook.hpp"
#include "interfaces/interfaces.hpp"
#include "utilities/netvars.hpp"
#include "../core/hacks/misc/fakelag/fakelag.h"
#include "../dependencies/globals/globals.h"
#include "../source-sdk/sdk.hpp"
#include "../core/hooking/hooks.hpp"

