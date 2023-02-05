/*
    First attempt at working with the Dear ImGui library
*/

#include <iostream>
#include <string>

#include "../lib/imconfig.h"
#include "../lib/imgui_internal.h"
#include "../lib/imgui.h"
#include "../lib/imstb_rectpack.h"
#include "../lib/imstb_textedit.h"
#include "../lib/imstb_truetype.h"

// Function Prototypes
void MySaveFunction();

using namespace std;

int main() {
    cout << "Entered: main()" << endl;

    char *myBuf {};
    float myFloat;

    // ImGui::Text("Hello, world %d", 123);
    // if (ImGui::Button("Save"))
    //     MySaveFunction();
    // ImGui::InputText("string", myBuf, IM_ARRAYSIZE(myBuf));
    // ImGui::SliderFloat("float", &myFloat, 0.0f, 1.0f);

    return 0;
}

void MySaveFunction() {
    cout << "Entered: MySaveFunction()" << endl;
}
