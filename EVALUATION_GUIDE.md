# Evaluation Guide - UI Signal Test

This guide helps interviewers evaluate the UI Signal Dispatcher assignment.

Each category is scored 1-5.

---

## 1. Code Quality (1-5)
- Readability
- Naming
- Structure
- C++17 usage
- RAII and resource safety
- No unnecessary complexity

1 = unclear or inconsistent  
3 = acceptable but with issues  
5 = clean, professional, maintainable

---

## 2. UIEventQueue Implementation (1-5)
- Correct mutex and condition_variable usage
- Blocking pop() implemented correctly
- No deadlocks
- Clean shutdown
- Simple and clear API

1 = unsafe or incorrect  
3 = functional but fragile  
5 = robust and correct

---

## 3. Worker Thread / Signal Waiter (1-5)
- Correct waiting logic
- Clean loop structure
- Proper shutdown handling
- No busy-looping
- No risk of hanging threads

1 = incorrect or unsafe  
3 = functional but not elegant  
5 = stable and clean

---

## 4. UI Component Design (1-5)
- Clear base class
- Correct Button implementation
- Proper event handling
- Render logic is clear
- Good separation of concerns

1 = unclear or incorrect  
3 = functional but basic  
5 = clean, extensible, UI-appropriate

---

## 5. UIManager / Event Routing (1-5)
- Components stored and identified correctly
- Events routed properly
- Render triggered at correct times
- No unnecessary coupling
- Clear API

1 = incorrect routing  
3 = functional but messy  
5 = clean and correct

---

## 6. Demo & Explanation (1-5)
- Demonstrates full flow
- UI updates visible
- Event ? component ? render works
- Explanation shows understanding
- Architecture is coherent

1 = incomplete  
3 = functional but unclear  
5 = clear, complete, and well-reasoned

---

## Total Score
Sum of all categories: 6-30

Recommended interpretation:
- 26-30: Strong senior
- 21-25: Solid mid-level
- 16-20: Weak mid-level / junior
- <16: Fail
