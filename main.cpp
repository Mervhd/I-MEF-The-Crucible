#include <SFML/Graphics.hpp>
#include <iostream>
#include "Marine.hpp"
#include "Gear.hpp"
#include "Mission.hpp"
#include "SquadManager.hpp"

enum class GameState {
	MainMenu,
	MarineRoster,
	MissionSelect,
	Inventory
};

int main() 
{
	
	// Create an 800x600 window
	sf::RenderWindow window(sf::VideoMode(800, 600), "I-MEF: The Crucible");

	// Load the font
	sf::Font font;
	if (!font.loadFromFile("Warband Stencil.otf")) {
		std::cerr << "Error: Could not load 'Warband Stencil.otf'. Add a font file to the project folder." << std::endl;
		return -1;
	}

	//Start on the Main Menu
	GameState currentState = GameState::MainMenu;

	// Main Menu Buttons
	sf::RectangleShape startMissionButton(sf::Vector2f(200, 50)); // 200 wide, 50 tall
	startMissionButton.setPosition(sf::Vector2f(300, 200));       // Centered horizontally, spcaed vertically
	startMissionButton.setFillColor(sf::Color(34, 45, 34));       // Dark Marine Green

	sf::RectangleShape rosterButton(sf::Vector2f(200, 50));       
	rosterButton.setPosition(sf::Vector2f(300, 300));      
	rosterButton.setFillColor(sf::Color(34, 45, 34));

	sf::RectangleShape exitButton(sf::Vector2f(200, 50));
	exitButton.setPosition(sf::Vector2f(300, 400));
	exitButton.setFillColor(sf::Color(34, 45, 34));

	// Main Menu Text
	sf::Text startMissionText("Start Mission", font, 20);        // Text, font, size
	startMissionText.setPosition(sf::Vector2f(325, 215));        // Slightly offset to center
	startMissionText.setFillColor(sf::Color(200, 200, 200));     // Light gray for contrast

	sf::Text rosterText("Roster", font, 20);
	rosterText.setPosition(sf::Vector2f(350, 315));
	rosterText.setFillColor(sf::Color(200, 200, 200));

	sf::Text exitText("Exit", font, 20);
	exitText.setPosition(sf::Vector2f(360, 415));
	exitText.setFillColor(sf::Color(200, 200, 200));

	// Other Screens
	sf::Text missionSelectText("Mission Select\n- Patrol Sector Alpha \n- Assault Outpost Bravo", font, 20);
	missionSelectText.setPosition(sf::Vector2f(300, 250));
	missionSelectText.setFillColor(sf::Color(200, 200, 200));

	sf::Text inventoryText("Inventory\n- M41A Pulse Rifle\n- Combat Armor", font, 20);
	inventoryText.setPosition(sf::Vector2f(300, 250));
	inventoryText.setFillColor(sf::Color(200, 200, 200));

	// Back Button
	sf::RectangleShape backButton(sf::Vector2f(100, 40));
	backButton.setPosition(sf::Vector2f(350, 500));
	backButton.setFillColor(sf::Color(34, 45, 34));

	sf::Text backText("back", font, 20);
	backText.setPosition(sf::Vector2f(370, 510));
	backText.setFillColor(sf::Color(200, 200, 200));

	// SquadManager and Marine Roster Integration
	SquadManager squad;
	squad.addMarine(Marine("Sgt. Kane", 100, 50, 30));
	squad.addMarine(Marine("Cpl. Vega", 80, 40, 25));

	std::string rosterString = "Roster\n";
	for (const Marine& marine : squad.getMarines()) {
		rosterString += "- " + marine.getName() + ": HP " + std::to_string(marine.getHealth()) + "\n";
	}
	sf::Text rosterScreenText(rosterString, font, 20);
	rosterScreenText.setPosition(sf::Vector2f(300, 250));
	rosterScreenText.setFillColor(sf::Color(200, 200, 200));
	


	// Main loop
	while (window.isOpen()) {
		// Event Handling
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();

			// Handle Mouse Clicks
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2f mousePos(static_cast<float>(event.mouseButton.x), static_cast<float>(event.mouseButton.y));

				if (currentState == GameState::MainMenu) {
					if (startMissionButton.getGlobalBounds().contains(mousePos)) {
						currentState = GameState::MissionSelect;
					}
					else if (rosterButton.getGlobalBounds().contains(mousePos)) {
						currentState = GameState::MarineRoster;
					}
					else if (exitButton.getGlobalBounds().contains(mousePos)) {
						window.close();
					}
				}
				else {
					if (backButton.getGlobalBounds().contains(mousePos)) {
						currentState = GameState::MainMenu;
					}
				}
			}
		}

		// Clear with a dark gray background (Marine Corps tactical feel)
		window.clear(sf::Color(28, 28, 28));

		// Draw based on the current state
		switch (currentState) {
		case GameState::MainMenu:
			// Draw buttons and text
			window.draw(startMissionButton);
			window.draw(rosterButton);
			window.draw(exitButton);
			window.draw(startMissionText);
			window.draw(rosterText);
			window.draw(exitText);
			break;
		case GameState::MissionSelect:
			window.draw(missionSelectText);
			window.draw(backButton);
			window.draw(backText);
			break;
		case GameState::MarineRoster:
			window.draw(rosterScreenText);
			window.draw(backButton);
			window.draw(backText);
			break;
		case GameState::Inventory:
			window.draw(inventoryText);
			window.draw(backButton);
			window.draw(backText);
			break;
		}

		// Display window
		window.display();
	}

	return 0;

}