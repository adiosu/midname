#include <SDL3/SDL.h> //Khai báo thư viện(Các bạn nhớ cài đặt thư viện)

//lưu ý: các biến trong hàm main là bắt buộc để chạy thư viện SDL
int main(int argc, char* argv[])
{
 //Khởi tạo thư viện(Khởi động)
    if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        return(1);
    }  

 // Đợi 5 giây trước khi đóng màn hình SDL
    SDL_Delay(5000);

 // Thoát khỏi SDL
    SDL_Quit();

    return 0;
}//đây là test
