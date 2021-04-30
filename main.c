#include "raylib.h"

#define SCREEN_WIDTH (800)
#define SCREEN_HEIGHT (450)

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Ads");
    SetTargetFPS(60);
    int colldown = 0;
    int showad = 0;
    int xyoutube = -600;
    int xtiktok = -600;
    int xtwitch = -600;
    int xdiscord = -600;
    Image youtubepre = LoadImage("youtube.png");
    Image tiktokpre = LoadImage("tiktok.png");
    Image twitchpre = LoadImage("twitch.png");
    Image discordpre = LoadImage("discord.png");
    Texture2D tiktok = LoadTextureFromImage(tiktokpre);
    Texture2D youtube = LoadTextureFromImage(youtubepre);
    Texture2D twitch = LoadTextureFromImage(twitchpre);
    Texture2D discord = LoadTextureFromImage(discordpre);
    UnloadImage(youtubepre);
    UnloadImage(tiktokpre);
    UnloadImage(twitchpre);
    UnloadImage(discordpre);

    while (!WindowShouldClose())
    {
        colldown += 1;
        BeginDrawing();
        ClearBackground(GREEN);
        // 30000 V
        // 50 = 1s
        if(colldown == 200){
            showad = 1;
        }
        // 31000 V
        if(colldown >= 1200){
            colldown = 0;
            showad = 0;
        }
        if(showad == 1 && colldown > 200 && colldown < 450){
            xyoutube += 5;
            DrawTexture(youtube, 120 - xyoutube, 60, WHITE);
        }
        else{
            xyoutube = -600;
        }
        if(showad == 1 && colldown > 450 && colldown < 700){
            xtiktok += 5;
            DrawTexture(tiktok, 120 - xtiktok, 60, WHITE);
        }
        else{
            xtiktok = -600;
        }
        if(showad == 1 && colldown > 700 && colldown < 950){
            xtwitch += 5;
            DrawTexture(twitch, 120 - xtwitch, 60, WHITE);
        }
        else{
            xtwitch = -600;
        }
        if(showad == 1 && colldown > 950 && colldown < 1200){
            xdiscord += 5;
            DrawTexture(discord, 120 - xdiscord, 60, WHITE);
        }
        else{
            xdiscord = -600;
        }
        EndDrawing();
    }

    CloseWindow();
    UnloadTexture(youtube);
    UnloadTexture(tiktok);
    UnloadTexture(twitch);
    UnloadTexture(discord);

    return 0;
}
// Youtube
// TikTok
// Twitch
// Discord