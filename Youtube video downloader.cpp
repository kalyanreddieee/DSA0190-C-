#include <iostream>
#include <fstream>
#include <curl/curl.h>

// Callback function to write data received from curl
size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written = fwrite(ptr, size, nmemb, stream);
    return written;
}

int main() {
    CURL *curl;
    FILE *fp;
    CURLcode res;

    std::string url = "YOUR_YOUTUBE_VIDEO_URL";
    std::string outputFileName = "output_video.mp4"; // Output file name

    curl = curl_easy_init();
    if (curl) {
        fp = fopen(outputFileName.c_str(), "wb"); // Open file for writing
        if (fp) {
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);

            res = curl_easy_perform(curl);
            if (res != CURLE_OK) {
                std::cerr << "Failed to download: " << curl_easy_strerror(res) << std::endl;
            } else {
                std::cout << "Download complete!" << std::endl;
            }
            fclose(fp);
        }
        curl_easy_cleanup(curl);
    }
    return 0;
}

