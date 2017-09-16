//Libraries
#include <iostream>
#include <sstream>

#include <SFML/Graphics.hpp>

#include <SFML/Audio.hpp>
#include <windows.h>
using namespace std;

//Global variables and functions,clases

//Programme Starts
int main()
{	


	
	//CREATION of window
	sf::RenderWindow window(sf::VideoMode(1280,720), "SFML GAME");

	//Setting frame limit to 60 fps
	window.setFramerateLimit(60);

	//To stop the repitition of keys
	//window.setKeyRepeatEnabled(false);

	

	//Variable that keeps the game loop running
	bool play=true;
	
	//Event object holding all the events
	sf::Event event;

	//Images
	sf::Texture tex_pad;
	sf::Texture tex_ball;
	sf::Texture tex_background;
	//Thumbnailss
	sf::Texture t_ball1;
	sf::Texture t_ball3;
	sf::Texture t_bg3;
	sf::Texture t_bg4;
	sf::Texture t_pad1;
	sf::Texture t_pad2;
	sf::Texture t_presentball;
	sf::Texture t_presentpad;
	sf::Texture t_presentwall;
	sf::Texture t_back;
	sf::Texture t_settings;
	sf::Texture t_play;
	//Pad
	if (t_ball1.loadFromFile("Data/ball1.png")==0)
	{
		return 1;
	}
	if (t_settings.loadFromFile("Data/settings1.png")==0)
	{
		return 1;
	}
	if (t_ball3.loadFromFile("Data/ball3.png")==0)
	{
		return 1;
	}
	if (t_bg3.loadFromFile("Data/bg3.png")==0)
	{
		return 1;
	}
	if (t_bg4.loadFromFile("Data/bg4.png")==0)
	{
		return 1;
	}
	if (t_pad1.loadFromFile("Data/pad1.png")==0)
	{
		return 1;
	}
	if (t_pad2.loadFromFile("Data/pad2.png")==0)
	{
		return 1;
	}
	if (tex_pad.loadFromFile("Data/pad2.png")==0)
	{
		return 1;
	}
	//ball
	if (tex_ball.loadFromFile("Data/ball3.png")==0)
	{
		return 1;
	}

	//background
	if (tex_background.loadFromFile("Data/bg4.png")==0)
	{
		return 1;
	}
	if (t_presentpad.loadFromFile("Data/pad2.png")==0)
	{
		return 1;
	}
	if (t_presentball.loadFromFile("Data/ball3.png")==0)
	{
		return 1;
	}
	if (t_presentwall.loadFromFile("Data/bg4.png")==0)
	{
		return 1;
	}
	if (t_back.loadFromFile("Data/back.png")==0)
	{
		return 1;
	}
	if (t_play.loadFromFile("Data/play.png")==0)
	{
		return 1;
	}
	//Shapes
	//Presnt theme

	sf::RectangleShape presentball;
		presentball.setSize(sf::Vector2f(230,200));
		presentball.setPosition(1000,200);
		presentball.setTexture(&t_presentball);
		presentball.setOutlineThickness(3);
		presentball.setOutlineColor(sf::Color::White);

		
	
	
		sf::RectangleShape presentwall;
		presentwall.setSize(sf::Vector2f(240,200));
		presentwall.setPosition(650,200);
		presentwall.setTexture(&t_presentwall);
		presentwall.setOutlineThickness(3);
		presentwall.setOutlineColor(sf::Color::White);

		sf::RectangleShape presentpad;
		presentpad.setSize(sf::Vector2f(230,100));
		presentpad.setPosition(300,230);
		presentpad.setTexture(&t_presentpad);
		presentpad.setOutlineThickness(3);
		presentpad.setOutlineColor(sf::Color::White);

		sf::RectangleShape settings;
		settings.setSize(sf::Vector2f(70,50));
		settings.setPosition(1200,20);
		settings.setTexture(&t_settings);

		sf::RectangleShape pplay;
		pplay.setSize(sf::Vector2f(70,50));
		pplay.setPosition(1100,20);
		pplay.setTexture(&t_play);
		
	
		/////Thumbnailsssssss
		sf::RectangleShape thumb1;
		thumb1.setSize(sf::Vector2f(180,100));
		thumb1.setPosition(20,550);
		thumb1.setTexture(&t_pad2);
		thumb1.setOutlineThickness(3);
		thumb1.setOutlineColor(sf::Color::White);

		sf::RectangleShape thumb2;
		thumb2.setSize(sf::Vector2f(180,100));
		thumb2.setPosition(230,550);
		thumb2.setTexture(&t_pad1);
		thumb2.setOutlineThickness(3);
		thumb2.setOutlineColor(sf::Color::White);


		sf::RectangleShape thumb3;
		thumb3.setSize(sf::Vector2f(180,200));
		thumb3.setPosition(450,500);
		thumb3.setTexture(&t_bg4);
		thumb3.setOutlineThickness(3);
		thumb3.setOutlineColor(sf::Color::White);


		sf::RectangleShape thumb4;
		thumb4.setSize(sf::Vector2f(180,200));
		thumb4.setPosition(660,500);
		thumb4.setTexture(&t_bg3);
		thumb4.setOutlineThickness(3);
		thumb4.setOutlineColor(sf::Color::White);


		sf::RectangleShape thumb5;
		thumb5.setSize(sf::Vector2f(180,200));
		thumb5.setPosition(870,500);
		thumb5.setTexture(&t_ball3);
		thumb5.setOutlineThickness(3);
		thumb5.setOutlineColor(sf::Color::White);

		

		sf::RectangleShape thumb6;
		thumb6.setSize(sf::Vector2f(180,200));
		thumb6.setPosition(1080,500);
		thumb6.setTexture(&t_ball1);
		thumb6.setOutlineThickness(3);
		thumb6.setOutlineColor(sf::Color::White);

		sf::RectangleShape back;
		back.setSize(sf::Vector2f(200,100));
		back.setPosition(1050,10);
		back.setTexture(&t_back);
	




		//background
		sf::RectangleShape background;
		background.setSize(sf::Vector2f(1280,720));
		background.setPosition(0,0);
		background.setTexture(&tex_background);

		//Pad1
		sf::RectangleShape pad1;
		pad1.setSize(sf::Vector2f(50,150));
		pad1.setPosition(50,310);
		pad1.setTexture(&tex_pad);

		//Pad2			
		sf::RectangleShape pad2;
		pad2.setSize(sf::Vector2f(50,150));
		pad2.setPosition(1180,310);
		pad2.setTexture(&tex_pad);

		//Ball			
		sf::RectangleShape ball;
		ball.setSize(sf::Vector2f(50,50));
		ball.setPosition(640,335);
		ball.setTexture(&tex_ball);

	//Sounds
	sf::SoundBuffer buff_hit; 
	 
	sf::SoundBuffer buff_claps; //Your point
	sf::SoundBuffer buff_computerpoint; //Comp point
	sf::SoundBuffer buff_loose; //You loose
	sf::SoundBuffer buff_win; //You win
	sf::SoundBuffer buff_ready; //Initial screen
	sf::Music bmusic;//background music
	//Hit sound
	if (buff_hit.loadFromFile("Data/explosion.wav")==0)
	{
		return 1;
	}
	//Playback sound
	if (bmusic.openFromFile("Data/asd.wav")==0)
	{
		return 1;
	}
	if (buff_claps.loadFromFile("Data/claps.wav")==0)
	{
		return 1;
	}
	if (buff_computerpoint.loadFromFile("Data/computerpoint.wav")==0)
	{
		return 1;
	}
	if (buff_loose.loadFromFile("Data/loose.wav")==0)
	{
		return 1;
	}
	if (buff_win.loadFromFile("Data/win.wav")==0)
	{
		return 1;
	}
	if (buff_ready.loadFromFile("Data/ready.wav")==0)
	{
		return 1;
	}

	

	sf::Sound claps;
	claps.setBuffer(buff_claps);
	claps.setVolume(10);

	sf::Sound loose;
	loose.setBuffer(buff_loose);
	loose.setVolume(10);

	sf::Sound win;
	win.setBuffer(buff_win);
	win.setVolume(10);

	sf::Sound computerpoint;
	computerpoint.setBuffer(buff_computerpoint);
	computerpoint.setVolume(10);

	sf::Sound ready;
	ready.setBuffer(buff_ready);
	ready.setVolume(1);

	
	sf::Sound hit;
	hit.setBuffer(buff_hit);
	hit.setVolume(200);

	//Playing background music
	bmusic.setVolume(10);
	bmusic.setLoop(true);
	bmusic.play();
	//Playing ready sound
	ready.play();

	//Font
	sf::Font font;
	if (font.loadFromFile("Data/arial.ttf")==0)
	{
		return 1;
	}

	//Text
	sf::Text score;
	score.setFont(font);
	score.setCharacterSize(50);
	score.setColor(sf::Color::Red);
	score.setString("0 : 0");
	score.setPosition(610,20);

	sf::Text rules;
	rules.setFont(font);
	rules.setCharacterSize(50);
	rules.setColor(sf::Color::Red);
	rules.setString("RULES:");
	rules.setPosition(10,10);

	sf::Text rulesexp;
	rulesexp.setFont(font);
	rulesexp.setCharacterSize(30);
	rulesexp.setColor(sf::Color::Red);
	rulesexp.setString("W/Up        : Move Up\nS/Down    : Move Down\nSpacebar : Play/Pause\n**Reach 5 points first to win game\n\nPresent Theme-");
	rulesexp.setPosition(10,70);

	sf::Text Theme;
	Theme.setFont(font);
	Theme.setCharacterSize(50);
	Theme.setColor(sf::Color::Magenta);
	Theme.setString("Click to Change Theme-\nPads:                     Backgrounds:        Balls:");
	Theme.setPosition(20,370);

	//Winner text
	sf::Text winner;
	winner.setFont(font);
	winner.setCharacterSize(60);
	winner.setColor(sf::Color::Red);
	winner.setString("Game End");
	winner.setPosition(490,10);


	//Pause menu text
	sf::Text spacebar;
	spacebar.setFont(font);
	spacebar.setCharacterSize(60);
	spacebar.setColor(sf::Color::Red);
	spacebar.setString("Press Spacebar to Play");
	spacebar.setPosition(360,10);

	//Play again text
	sf::Text spacebaragain;
	spacebaragain.setFont(font);
	spacebaragain.setCharacterSize(60);
	spacebaragain.setColor(sf::Color::Red);
	spacebaragain.setString("Press Spacebar to Play Again");
	spacebaragain.setPosition(280,140);
	//States for buttons and events
	bool aPressed=false;
	
	bool upPressed=false;
	bool upReleassed=false;
	bool downPressed=false;
	bool downReleassed=false;
	bool pPressed=false;
	bool pReleassed=false;

	//Variables
	int yVelocityPad1=0; 
	float xVelocityBall=11;
	float yVelocityBall=-11;
	int yVelocityPad2=0;
	int pad1score=0;
	int pad2score=0;
	int xc=2; //To manage screen which user see
	int yc=0;//To change screens and take input when game is paused
	
	float timer; // To managewhathappens when ball strikes top of pad by generating a loop
	int mousex=0;
	int mousey=0;
	int zc=0;//To store xc so that keep check on from where settings page was open
	
	


		//GAME LOOP
	while (window.isOpen())
	{
	
		//EVENTS
		while (window.pollEvent(event))
		{	// set play to false in order to stop the game loop
			 if ((event.type == sf::Event::Closed) ||
               ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)))
            {
                window.close();
				return 1;
                break;
            }
			 if (xc%2==0)//Enters play screen
			 {
			 if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space))
				{
				aPressed=true;
				xc=1;				
				}
			  if ( mousey>20 && mousey<70)
		{
			
			if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left&& mousex>1200 && mousex<1267)
				{
				
					xc=6;
				}
			

				if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left&& mousex>1100 && mousex<1170)
				{
				aPressed=true;
				xc=1;
					
				}
		}
			 }
			 else//Pause play
			 {
			 if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Space))
				{zc=0;
				
				aPressed=false;
				xc=0;
				
				}
			
					
			
			 
			 }
			

			
			
		
			
	
			if (event.type == sf::Event::KeyPressed )//movement of pads
			{
				if (event.key.code == sf::Keyboard::Up||event.key.code == sf::Keyboard::W)
				upPressed=true;
				if (event.key.code == sf::Keyboard::Down||event.key.code == sf::Keyboard::S)
				downPressed=true;
				
				
			}
		if (event.type == sf::Event::KeyReleased )//movement of pads
			{
				if (event.key.code == sf::Keyboard::Up||event.key.code == sf::Keyboard::W)
				upReleassed=true;
				if (event.key.code == sf::Keyboard::Down||event.key.code == sf::Keyboard::S)
				downReleassed=true;
				
			}

			
			
		if (yc==1)//To; take input while on pause screen
		{	mousex=sf::Mouse::getPosition(window).x;
		mousey=sf::Mouse::getPosition(window).y;
		
		 if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::P))
						{
						
						
						xc=6;
					    }
		 if ( mousey>20 && mousey<70)
		{
				if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left&& mousex>1200 && mousex<1267)
				{	
					
					xc=6;
				}

				if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left&& mousex>1100 && mousex<1170)
				{
				
					xc=1;
				}
		}
		 

		}
		if (yc==3)//to take input whileon settings page
		{mousex=sf::Mouse::getPosition(window).x;
		mousey=sf::Mouse::getPosition(window).y;
		
		
		if ( mousey>10 && mousey<107)
		{
			
					if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left&& mousex>1056 && mousex<1250)
						{if (zc==0)
							zc=0;
						else
						{
							if (zc==4)
							zc=1;
						else
							zc=2;
					}
							switch(zc)
								{case 0:xc=0;break;
								 case 1:xc=2;break;
							     case 2:xc=4;break;
						
							
						}
							
			
				
					
					
			
					}}
		if ( mousey>498 && mousey<700)
		{if ( mousey>549 && mousey<647)
		{
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>17 && mousex<201 )
			{ 
								
				if (tex_pad.loadFromFile("Data/pad2.png")==0)
						{
								return 1;
						}
				if (t_presentpad.loadFromFile("Data/pad2.png")==0)
						{
								return 1;
						}
				
				
				}
			
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>228 && mousex<410 )
			{ 
								
				if (tex_pad.loadFromFile("Data/pad1.png")==0)
						{
								return 1;
						}
				if (t_presentpad.loadFromFile("Data/pad1.png")==0)
						{
								return 1;
						}
				}
		}
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>450 && mousex<630 )
			{  	
								
				if (tex_background.loadFromFile("Data/bg4.png")==0)
						{
								return 1;
						}
				if (t_presentwall.loadFromFile("Data/bg4.png")==0)
						{
								return 1;
						}
				}
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>657 && mousex<841 )
			{  
								
				if (tex_background.loadFromFile("Data/bg3.png")==0)
						{
								return 1;
						}
				if (t_presentwall.loadFromFile("Data/bg3.png")==0)
						{
								return 1;
						}
				}
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>867 && mousex<1051 )
			{ 
								
				if (tex_ball.loadFromFile("Data/ball3.png")==0)
						{
								return 1;
						}
				if (t_presentball.loadFromFile("Data/ball3.png")==0)
						{
								return 1;
						}
				}
		if (event.type ==sf::Event::MouseButtonPressed && event.mouseButton.button== sf::Mouse::Left && mousex>1079 && mousex<1260 )
			{ 
								
				if (tex_ball.loadFromFile("Data/ball1.png")==0)
						{
								return 1;
						}
				if (t_presentball.loadFromFile("Data/ball1.png")==0)
						{
								return 1;
						}
				}
		}
		}}
		 stringstream winnername;	//What to display when game ends and user wins
			   if (pad1score==5)

			 {	zc=2;
				 winnername<<"Game End"<<endl<<"  You Won";
				winner.setString(winnername.str());
				xc=4;
				win.play();
				
			 }
			  if (pad2score==5)	//What to display when game ends and computer wins
			 {	zc=2;
				 winnername<<"Game End"<<endl<<"  You Lost";
				winner.setString(winnername.str());
				xc=4;
				loose.play();
			
			 }
		//LOGIC
		
		
		
	
		// Pad1

		if (xc%2==1) //To stop movent while on pause screen
		{
			if (ball.getGlobalBounds().intersects(pad1.getGlobalBounds())== true) //To move pad autimaticaly when ball strikes upside of pad
				{	
						for (timer=0;timer<100;timer++) //Time for which pad moves automatically
							{
								yVelocityPad1=-yVelocityPad1; //Reverse direction so that ball ghets away
							}
					yVelocityPad1=-yVelocityPad1; //Changing velocuty of pad back to normal
			
				}
			else
				{
				//	Movement by user
					if (upPressed == true)
					{	
			
						yVelocityPad1=-8;
			
						upPressed=false;
					}

					if (upReleassed == true)
					{				
						yVelocityPad1=0;
			
						upReleassed=false;
					}
						if (downPressed == true)
					{	
			
						yVelocityPad1=8;
			
						downPressed=false;
					}

					if (downReleassed == true)
					{				
						yVelocityPad1=0;
			
						downReleassed=false;
		
					}
			}
		
		pad1.move(0,yVelocityPad1);
		
		
		//Out of boundss
		if (pad1.getPosition().y < 0)
		{
			pad1.setPosition(50,0);//stuck at end
		}
		if (pad1.getPosition().y >570)
		{
			pad1.setPosition(50,570);//stuck at end
		}
		}

		// Pad2
		if (xc%2==1)//To stop movent while on pause screen
		{
			if (ball.getGlobalBounds().intersects(pad2.getGlobalBounds())== true)//To move pad in apposite direction when ball strikes upside of pad
				{
					timer=0;
					for (timer=0;timer<100;timer++)//Time for which moves in apposite direction
						{
							yVelocityPad2=-yVelocityPad2;//To move in reverse direction
						}
					yVelocityPad2=-yVelocityPad2;//Velocity back to normal after loop
			
				}
			else//AI for movent of computer
				{	
			
					if (ball.getPosition().y < pad2.getPosition().y)//If ball is up
						{
							yVelocityPad2=-6; 
						}
					if (ball.getPosition().y > pad2.getPosition().y)// IF ball is down
						{
							yVelocityPad2=3;
						}
			}
		
		//Out of boundss
		if (pad2.getPosition().y < 0)
			{
				pad2.setPosition(1120,0);//Stuck at end
			}
			if (pad2.getPosition().y >570)
			{
				pad2.setPosition(1120,570);//stuck at end
			}
		
			pad2.move(0,yVelocityPad2);
		}

		//Ball
		// To chdeck wether space is pressed or not

		if (xc%2==1)
		{
		if (aPressed == true)//Space pressed,Game starts
		{	
			ball.move(xVelocityBall,yVelocityBall);
		}
	

		
		

		
		//Out of boundss
		if (ball.getPosition().y < 0)
		{
			yVelocityBall=-yVelocityBall; //To change direction of movengt of ball
		}
		if (ball.getPosition().y >670)
		{
			yVelocityBall=-yVelocityBall;//To change direction of movengt of ball
		}
		if (ball.getPosition().x < -50)
		{
			ball.setPosition(640,335);//To set ball in middle
			pad2score++;
			computerpoint.play();
				
		}
		if (ball.getPosition().x > 1280)
		{
			ball.setPosition(640,335);//To set ball in middle
			pad1score++;
			claps.play();
				
		}

		//Collision wiyh pads
		if (ball.getGlobalBounds().intersects(pad1.getGlobalBounds())== true) //Collision with pad 1
		{
			xVelocityBall=-xVelocityBall;//If ball strikes y axis of pad
				if (pad1.getPosition().y>ball.getPosition().y)//If ball is upward x axis of pad
				{ 
					if ((pad1.getPosition().y-ball.getPosition().y)<97)//If bal strikes upward x axis of pad
						{
							yVelocityBall=-yVelocityBall;
							
							
						}
				}
				else//If ball is downward x axis of pad
				{
					if ((ball.getPosition().y-pad1.getPosition().y)>45)//If ball strikes downward x axis of pad
						{
							yVelocityBall=-yVelocityBall;
							
						}
				}

		
		hit.play();//To play the collision sound
		}
		if (ball.getGlobalBounds().intersects(pad2.getGlobalBounds())== true)//Collision with pad 2
		{
			xVelocityBall=-xVelocityBall;//If ball strikes y axis of pad
			if (pad2.getPosition().y>ball.getPosition().y)//If ball is parallel to x axis of pad
				{ 
					if ((pad2.getPosition().y-ball.getPosition().y)<150)//If bal strikes upward x axis of pad
					{	
						yVelocityBall=-yVelocityBall;
						
							
						
						
					}
				}
			else//If ball is downward x axis of pad
				{
					if ((ball.getPosition().y-pad2.getPosition().y)>45)//If ball strikes downward x axis of pad
					{
						yVelocityBall=-yVelocityBall;
						

						
					}
		}
		hit.play();//To play collision sound
		}}

	


		//RENDERING
		stringstream text;
		
		switch (xc)//Case to view different screens

		{case 0://Pause screen
		
		window.clear();
		
		
		window.draw(background);
		window.draw(pad1);
		window.draw(pad2);
		window.draw(ball);
		window.draw(spacebar);
		
		window.draw(settings);
		window.draw(pplay);
		window.display();
		yc=1;
		break;

		case 1: window.clear();//Play screen
		;
		
		window.draw(background);
		window.draw(pad1);
		window.draw(pad2);
		window.draw(ball);
		
		text<<pad1score<<" : "<<pad2score;
		score.setString(text.str());
		window.draw(score);
		
		window.display();
		
		yc=0;
		break;
		window.draw(thumb1);
		case 4://Game end screen
			window.clear();
		
		
		window.draw(background);
		window.draw(winner);
		window.draw(spacebaragain);
		window.draw(settings);
		window.draw(pplay);
		window.display();
		yc=1;
		pad1score=0;
		pad2score=0;
		pad1.setPosition(50,310);
		ball.setPosition(640,335);
		pad2.setPosition(1120,310);
		
		break;
		case 6://settings page
			window.clear();
		
		
		window.draw(background);
		window.draw(rules);
		window.draw(rulesexp);
		window.draw(thumb1);
		window.draw(thumb2);
		window.draw(thumb3);
		window.draw(thumb4);
		window.draw(thumb5);
		window.draw(thumb6);
		window.draw(Theme);
		window.draw(presentball);
		window.draw(presentpad);
		window.draw(presentwall);
		window.draw(back);
		window.display();
		yc=3;
		break;

		default: //First screen when game starts
			window.clear();
		
		zc=4;
		window.draw(background);
		
		window.draw(spacebar);
		window.draw(settings);
		window.draw(pplay);
		window.display();
		yc=1;
		break;

		
		}
		
		
		}
		
		
	//CLEAN UP

	window.close();

	return 0;
}
