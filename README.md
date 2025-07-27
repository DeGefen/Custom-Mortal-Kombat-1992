# Mortal Kombat 1992 Recreation

A faithful recreation of the classic **Mortal Kombat (1992)** arcade fighting game, built from scratch using a custom C++ game engine and an Entity-Component-System (ECS) architecture.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Screenshots](#screenshots)
- [Installation](#installation)
- [Controls](#controls)
- [Development](#development)
- [Contributing](#contributing)
- [License](#license)

---

## About

This project reimagines the original Mortal Kombat (1992) arcade game using modern C++ and a custom-built engine based on the Entity-Component-System (ECS) paradigm. All game logic, rendering, and systems are implemented through ECSs, enabling modular and efficient game programming. 

**All characters and backgrounds are entirely custom made** This project serves as an educational exploration of game engine design, graphics rendering, and retro game mechanics.

## Features

- Core fighting mechanics inspired by the original game
- Multiple custom playable characters
- 2D sprite-based graphics
- Custom input handling
- Modular engine architecture (rendering, input, audio, game logic) powered by ECS design
- Entirely custom-made art for all fighters and backgrounds

## Screenshots

<!-- Add screenshots to the project folder and reference them here -->
<!-- ![Gameplay Screenshot](screenshots/gameplay1.png) -->

## Installation

### Build Instructions

1. **Clone the repository:**
   ```sh
   git clone https://github.com/DeGefen/mortal_combat_1992.git
   cd mortal_combat_1992
   ```

2. **Configure the build:**
   ```sh
   mkdir build
   cd build
   cmake ..
   ```

3. **Build the project:**
   ```sh
   cmake --build .
   ```

4. **Run the game:**
   ```sh
   ./MortalKombat1992
   ```

> **Note:** For Windows, the executable may be `MortalKombat1992.exe`.

## Controls

| Action        | Key (Default) |
|---------------|:-------------:|
| Move Left     | A / ←         |
| Move Right    | D / →         |
| Jump          | W / ↑         |
| Crouch        | S / ↓         |
| Punch         | F / J         |
| High Punch    | R / U         |
| Kick          | G / K         |
| High Kick     | T / I         |
| Block         | H / "         |
| Start/Select  | Enter         |

## Development

- Engine modules are organized by functionality (render, input, audio, etc).
- Game logic, systems, and entities are structured using ECS principles.
- Game assets (sprites, audio, etc) are in the `res/`.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

---

*This project is not affiliated with or endorsed by Warner Bros. or NetherRealm Studios. All Mortal Kombat trademarks are property of their respective owners. This is a fan project for educational and non-commercial purposes only.*
