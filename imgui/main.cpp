#include "imgui.h"

int main()
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    (void)io;
    ImGui::StyleColorsDark();
    bool open = true;
    ImGui::NewFrame();
    ImGui::Begin("ImGui Test", &open);
    ImGui::Text("Hello, ImGui!");
    static float value = 0.5f;
    ImGui::SliderFloat("Value", &value, 0.0f, 1.0f);
    static int counter = 0;
    if (ImGui::Button("Button"))
        counter++;
    ImGui::SameLine();
    ImGui::Text("Counter = %d", counter);
    ImGui::Checkbox("Demo Window", &open);
    ImGui::End();
    ImGui::Render();
    ImGui::DestroyContext();
    return 0;
}