#pragma once

enum class UIEventType { Click, Hover, Timeout };

struct UIEvent {
    UIEventType type;
    int targetId;
};
