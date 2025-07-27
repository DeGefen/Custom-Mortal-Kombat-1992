# Mortal Kombat 1992 Recreation

A faithful recreation of the classic **Mortal Kombat (1992)** arcade fighting game, built from scratch using a custom C++ game engine and an Entity-Component-System (ECS) architecture.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Screenshots](#screenshots)
- [Controls](#controls)
- [Development](#development)
- [License](#license)

---

## About

This project reimagines the original Mortal Kombat (1992) arcade game using modern C++ and a custom-built engine based on the Entity-Component-System (ECS) paradigm. All game logic, rendering, and systems are implemented through ECSs, enabling modular and efficient game programming. 

**All characters and backgrounds are entirely custom made** This project serves as an educational exploration of game engine design, graphics rendering, and retro game mechanics.

The project leverages:
- **SDL3** for cross-platform multimedia, input, and graphics support.
- **Box2D** for realistic 2D physics simulation.
- **Entity-Component-System (ECS)** architecture for modular, efficient game logic and engine design.

## Features

- Core fighting mechanics inspired by the original game
- Multiple custom playable characters
- 2D sprite-based graphics
- Custom input handling
- Modular engine architecture (rendering, input, audio, game logic) powered by ECS design
- Entirely custom-made art for all fighters and backgrounds
- Physics simulation using Box2D
- Cross-platform support using SDL3

## Screenshots
<img width="1584" height="1190" alt="image" src="https://github.com/user-attachments/assets/9846fd55-ee23-4641-ac0b-aec363241485" />

<img width="1584" height="1190" alt="image" src="https://github.com/user-attachments/assets/c77f0981-8ede-4dde-a12f-9c6f23319d03" />

### Build Instructions
> recommended using jetbrains CLion

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
- Uses **SDL3** for multimedia/input and **Box2D** for physics.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

---

*This project is not affiliated with or endorsed by Warner Bros. or NetherRealm Studios. All Mortal Kombat trademarks are property of their respective owners. This is a fan project for educational and non-commercial purposes only.*
