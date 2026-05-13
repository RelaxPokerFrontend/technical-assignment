# UI Signal Dispatcher - C++ Frontend Assignment (2-3 hours)

## Goal
Implement a small UI-like system where:
- A background thread waits for a signal/event
- Events are pushed into a UI event queue
- UI components react to events
- UI updates trigger render() calls

This simulates how a real UI client reacts to backend or system signals.

## Development Environment
**You may use any development environment you prefer.**
The assignment is platform-agnostic and requires only C++17.

---

## Part 1 - UIEvent and UIEventQueue

Implement:

enum class UIEventType { Click, Hover, Timeout };

struct UIEvent {
    UIEventType type;
    int targetId;
};

Create a simple thread-safe queue:
- push(UIEvent)
- pop() (blocking)
- shutdown()

Use std::mutex + std::condition_variable.

---

## Part 2 - Worker Thread (Signal Waiter)

Implement a worker thread that:
- waits for events from the queue
- dispatches them to UI components
- stops cleanly on shutdown

This is the frontend-equivalent of "waiting for a signal and reacting to it".

---

## Part 3 - UIComponent Base Class

class UIComponent {
public:
    virtual void onEvent(const UIEvent& e) = 0;
    virtual void render() = 0;
    virtual ~UIComponent() = default;
};

---

## Part 4 - Button Component

Implement a Button that:
- has text
- reacts to Click events
- prints its state in render()

Example:
Button[text='Play', visible=true]

---

## Part 5 - UIManager

UIManager should:
- store UI components
- route events to the correct component
- trigger render() when something changes

---

## Part 6 - Demo (main.cpp)

Create:
- a Button
- send it a Click event
- update its text
- toggle visibility
- show that render() is triggered

---

## Part 7 - Short Explanation (max 10 sentences)

Describe:
- your architecture
- how you avoided race conditions
- how you would extend the system

---

## Expected Time
2-3 hours.
