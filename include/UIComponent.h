#pragma once
#include "UIEvent.h"

class UIComponent {
public:
    virtual void onEvent(const UIEvent& e) = 0;
    virtual void render() = 0;
    virtual ~UIComponent() = default;
};
