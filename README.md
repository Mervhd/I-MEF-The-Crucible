# I-MEF: The Crucible

![Status](https://img.shields.io/badge/status-in%20progress-orange)  
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)  
![Library](https://img.shields.io/badge/library-SFML%202.6.1-green)

## Overview

*I-MEF: The Crucible* is a tactical role-playing game (RPG) built from scratch in C++ using the SFML 2.6.1 library. Inspired by the grit and discipline of the Marine Corps, players command an elite **Interstellar Marine Expeditionary Force (I-MEF)** squad through mission-based gameplay. The project showcases my skills in object-oriented programming (OOP), GUI design, and game development while paying homage to the Marine Corps' "Crucible" bootcamp challenge.

This is a portfolio project developed in Visual Studio 2022, demonstrating my ability to design modular systems, integrate graphics with SFML, and solve technical challenges (e.g., debugging SFML version mismatches and click-handling issues).

## Features (Current Progress)

- **Graphical User Interface**: A fully navigable GUI with Main Menu, Marine Roster, Mission Select, and Inventory screens, styled with a custom `Warband Stencil` font and Marine Corps-inspired colors (dark green, gray).
- **Core Classes**: Modular OOP design with:
  - `Marine`: Manages squad members’ stats (health, strength, agility, experience) and actions (train, deploy, take damage).
  - `Gear`: Defines equipment with attack/defense bonuses (e.g., "M41A Pulse Rifle").
  - `Mission`: Represents missions with difficulty and rewards (e.g., "Patrol Sector Alpha").
  - `SquadManager`: Oversees the squad and mission assignments.
- **Dynamic Roster**: Displays squad data in-game, pulled from the `SquadManager` class.

## Planned Features
- Combat simulation with randomized outcomes (Step 4).
- Multi-threaded mission processing (Step 5).
- SQLite save/load system (Step 6).
- UI polish and sound effects (Step 7).

## Development Roadmap
Based on my project outline:
- ✅ **Step 1**: Project Setup & SFML Configuration
- ✅ **Step 2**: Graphical User Interface (SFML Windows & Layout)
- ✅ **Step 3**: Core Data Structures & Classes (Object-Oriented Design)
- ☐ **Step 4**: Implement the Game Logic
- ☐ **Step 5**: Multi-Threading for Mission Simulation
- ☐ **Step 6**: Save & Load System (SQLite Database)
- ☐ **Step 7**: Polish and Optimization
- ☐ **Step 8**: Final Deployment & Portfolio Presentation

## Technologies
- **C++**: Core programming language (ISO C++17 standard).
- **SFML 2.6.1**: Simple and Fast Multimedia Library for graphics and input handling.
- **Visual Studio 2022**: Development environment with x64 configuration.

## Installation
### Prerequisites
- Visual Studio 2022 (with C++ workload).
- SFML 2.6.1 (Visual C++ 17, 64-bit) installed at `C:\SFML-2.6.1`.

### Setup
1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Mervhd/I-MEF-The-Crucible.git
   cd I-MEF-The-Crucible


