#include <SFML/Graphics.hpp>
#include <time.h>
#include <sstream>
#include <SFML/Audio.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

struct point
{
  int x;
  int y;
};

using namespace sf;

void calcScore(bool &scoreEnable, int &currScore, Text &text)
{
  if(scoreEnable == true)
  currScore += 1;
  scoreEnable = false;
  char convertScore[64];
  text.setString(itoa(currScore, convertScore, 10));
}


int main()
{
    bool stopjoc = false;
    int score = 0;
    bool addscore = false;
    srand(time(0));

    RenderWindow app(VideoMode(400, 533), "Doodle Jump");
    app.setFramerateLimit(60);

    Texture t1,t2,t3, t4;
    t1.loadFromFile("images/background.png");
    t2.loadFromFile("images/platform.png");
    t3.loadFromFile("images/doodle.png");
    t4.loadFromFile("images/dead.png");

    Sprite sBackground(t1), sPlat(t2), sPers(t3), sDead(t4);

    Font font;
    font.loadFromFile("arial.ttf");
    Text text;
    text.setFont(font);
    text.setString("0");
    text.setCharacterSize(24);
    text.setFillColor(Color::Red);

    SoundBuffer startSoundBuffer;
    startSoundBuffer.loadFromFile("audio/start.mp3");
    Sound soundStart;
    soundStart.setBuffer(startSoundBuffer);

    SoundBuffer endSoundBuffer;
    endSoundBuffer.loadFromFile("audio/end.mp3");
    Sound soundEnd;
    soundEnd.setBuffer(endSoundBuffer);

    SoundBuffer jumpSoundBuffer;
    jumpSoundBuffer.loadFromFile("audio/Spank.mp3"); // hello lordane order
    Sound soundJump;
    soundJump.setBuffer(jumpSoundBuffer);



    point plat[20];

    for (int i=0; i<10; i++)   // platformele
    {
      plat[i].x = rand() % 400;
      plat[i].y = rand() % 533;
    }

    int x = 100, y = 100, h = 200;      // pozitia initiala lui sPers
    float dx=0, dy=0;

    while (app.isOpen())
    {

        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::D)) x+=3;

        if (Keyboard::isKeyPressed(Keyboard::A)) x-=3;

        if (Keyboard::isKeyPressed(Keyboard::R)) //restart
        {
            x = 100, y = 100, h = 200;
            dx = 0, dy = 0;
            stopjoc = false;

            for (int i=0;i<10;i++)
            {
               plat[i].x=rand()%400;
               plat[i].y=rand()%533;
            }

           text.setString("0");
           score = 0;
        }


        if(stopjoc == false)  // verific oprire joc, false = jocul continua , true = se opreste
        {
            dy+=0.2;
            y+=dy;
        }


        if (y>500)
          dy=-10;

        if (y<h)
        {
            for (int i=0;i<10;i++)
            {
                y=h;
                plat[i].y=plat[i].y-dy;
                if (plat[i].y>533)
                {
                    plat[i].y=0;
                    plat[i].x=rand()%400;
                    addscore = true;
                }
            }
        }

        calcScore(addscore, score, text);

           for (int i=0;i<10;i++)
        {
           if ((x+50>plat[i].x) && (x+20<plat[i].x+68)
            && (y+70>plat[i].y) && (y+70<plat[i].y+14) && (dy>0)) dy=-10;
        }

        if(x > 420)
            x = -50;
        if(x < -50)
            x = 420;

        sPers.setPosition(x,y); // setarea pozitiei lui sPers

        app.draw(sBackground);
        app.draw(sPers);

        for (int i=0;i<10;i++)
        {
          sPlat.setPosition(plat[i].x,plat[i].y);
          app.draw(sPlat);
        }
            text.setPosition(0,0);
            if(y >= 500)
        {
            stopjoc = true;
            app.draw(sDead);
            soundEnd.play();
            text.setPosition(180,80);
        }
        app.draw(text);
        app.display();
    }

    return 0;
}
