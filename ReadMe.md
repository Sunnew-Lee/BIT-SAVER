# BIT SAVER

- **Team Name:** KINGAME  
- **Game Name:** BIT SAVER  
- **Elevator Pitch:**  
  BIT SAVER is a rhythm action game where notes are generated and move toward the player in sync with the music's tempo. Players must press the corresponding keyboard button when notes reach the hitbox in front of the main character.

## Features
- 4 Levels
- Rhythm-based gameplay
- Engaging music tracks
- Arduino support for playing
- Hit impact visuals

## Developer Contact Information
- **Producer:** Sunwoo Lee - [sunwoo9078@gmail.com](mailto:sunwoo9078@gmail.com)  
- **Tech Lead:** Hyosang Jung - [hyosang0712@gmail.com](mailto:hyosang0712@gmail.com)  
- **Physics Lead:** Jaewoo Choi - [wod6983@gmail.com](mailto:wod6983@gmail.com)

## Key Features
- 4 unique music tracks
- Easy and Hard difficulty modes
- Play using Keyboard or Arduino device
- MIDI file-based gameplay
- Offset adjustment setting
- Tutorial available
- 6 note movement patterns and 3 note types

## Links
- [Press Kit Document](https://docs.google.com/document/d/1V79Q7R3hEafI7YR9RckEBPYh2oQSj1Ov/edit?usp=sharing&ouid=106747112146344045584&rtpof=true&sd=true)
- [Demo Video](https://youtu.be/B6Ebtn6DSO4)

## Platforms and Release Date
- **Platform:** Windows  
- **Release Date:** June 9th


- **License**
   - Digipen has all rights for this project license.


# Before Starting:
* Software/hardware requirements basic computer setting.
   * Visual Studio 2019
      * How To Download: https://www.youtube.com/watch?v=IsAoIqnNia4
        


* Links and short installation instructions for necessary programs/IDE’s/libraries
   * OpenGL - https://www.opengl.org/
      * Already included in the project(Unnecessary to download)
   * FMOD - https://www.fmod.com/
      * Already included in the project(Unnecessary to download)
   * FreeType - https://freetype.org/
      * Already included in the project(Unnecessary to download)
    * Stb_image - https://github.com/let-def/stb_image/blob/master/LICENSE
        *  Already included in the project(Unnecessary to download)
 
   * Libraries not listed here are also already included in the project.
                

## Installation Instructions:
* How to open the source code from the IDE (Which file, etc)
   * Open BIT_SAVER.sln 
* How to set environment variables (if necessary)
   * Unnecessary( All done )
* How to set the correct compiler version (if necessary)
   * Visual studio Version 16.11.5 recommended.
* Any additional information or changes
   * None

## Run/Build Code:
* What to run/build properties are needed
   * It needs to include directories, post-build event properties.
      * All are already included in vcxproj


* Any errors/warnings that the user should expect
   * There are sometimes unexpected errors with FMOD. 
      * If it happens, the user should rebuild the solution and run it
   * GLModel member variables uninitialized warning.


* What button or command line arguments needed to compile
   * After opening BIT_SAVER.sln in visual studio, press ctrl+F5 to run the game.

## Play:
* Any expected windows/visuals/audio
   * One window starting with a Digipen splash screen.
   * After our game logo splash screen, Mainmenu with play instructions pops up.
        
* Instructions of how to navigate any menus (Buttons, menus, etc)
   * keyboard (F / up) : move the main character to the Top.
   * keyboard (J / down) : move the main character to the bottom.
   * Mouse Left : Interact with Options.
   * keyboard (ESC) : Closes window or pop up the option.
   * keyboard (~) : Toggles the accuracy visualization.


* Gameplay instructions (How to play the game)
   * The player has a life bar on top of the character, and every time the node is missed, life decreases.
   * If it’s life bar disappears(life == 0), the game is over(Can go to Mainmenu).
   * In one stage, we have two different scenes.


   * General scene
      * The player just taps (F / Up), (J / Down) to match the rhythm.


   * Boss scene
      * When the small character on top of the screen goes to the dark area, the Boss scene starts. 
      * The music tempo and note speed gets faster.
      * A Fever gauge pops up on the bottom of the screen.
      * It increases every time the player attacks the node.
      * When the gauge is full, the hit score increases.        
      * If the player retains the combo, the fever gauge fills up faster.
        
* Expected final goal/result/boss
   * The playtime of every level will be roughly 3 and a half minutes.
   * If the small character runs although the end(The song is finished) the stage is cleared.

## FAQ/Common Mistakes:
* Common installation mistakes that people might make
   * Just unzip it. Open BIT_SAVER.sln. Set the build mode to Debug or Release. Press Ctrl + F5 
* Any common errors or crashes that may occur
   * In the solution directory, there should be lib files.
* Gameplay errors
   * The particles that needed to be disappeared popped up randomly.
   * On some computers, the note generating timing is not correct.
   * On some computers, monitor blinking occurs on the offset adjustment scene.