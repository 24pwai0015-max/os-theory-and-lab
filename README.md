# Operating Systems: Theory, Systems Programming & Lab

> **Academic Coursework & Systems Engineering Portfolio**  
> *5th Semester — Academic Mastery & Applied Systems Engineering*  
> **Host Environment:** Windows 10 WSL 2 (`Ubuntu 22.04 LTS` on native `ext4.vhdx`)  
> **Toolchain:** GCC 11.4, GDB 12.1, GNU Make 4.3, POSIX C99/C11  

---

## 📁 Repository Architecture

```text
os-theory-and-lab/
├── .gitignore
├── README.md
├── theory/
│   ├── lecture-01-intro/
│   │   ├── notes.md
│   │   └── reference.md
│   └── ...
├── labs/
│   ├── lab-01-environment-setup/
│   │   ├── src/
│   │   │   └── test_os.c
│   │   ├── Makefile
│   │   └── README.md
│   └── ...
├── assignments/
├── projects/
│   ├── 01-custom-shell/
│   ├── 02-cpu-scheduler-simulator/
│   └── 03-memory-allocator/
└── connections-to-ai-robotics/
    ├── ros2-rtos-mechanics.md
    └── data-pipeline-memory-swaps.md
```

---

## 🧪 Laboratory Index

| Lab | Milestone / Topic | Key POSIX Calls | Build Status |
| :--- | :--- | :--- | :--- |
| **Lab 01** | Environment Verification & Kernel Traps | `getpid()`, `printf()` | ✅ Verified (`-Wall -Wextra -pthread -g`) |

---

## 📚 Theory & System Connections

- **Theory:** Silberschatz, Galvin, Gagne (*Operating System Concepts*) & William Stallings (*Operating Systems*).
- **Mechanical Connections:** Hardware interrupts, Ring 3 -> Ring 0 traps, process address spaces, virtual memory paging linked directly to AI/LLM workloads, Data Engineering pipelines, and ROS 2 robotics.
