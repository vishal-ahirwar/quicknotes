🚀 PostgreSQL CRUD App with wxWidgets + Flick

A modern C++ desktop app using:

- ✅ **wxWidgets** for the native UI  
- ✅ **libpqxx** for PostgreSQL connectivity  
- ✅ **Flick** for painless dependency management and builds

This app connects to a **remote PostgreSQL database**, authenticates users, and provides a full CRUD interface.

---

 🧩 Features

- 🔐 User Login (via `app_users` table)
- 📋 View users in a `users` table
- ➕ Add / ✏️ Edit / ❌ Delete rows
- 🌀 Activity indicator while loading
- 🔧 Just edit the connection string, run `flick build`, and you're done!

---

 🔧 Setup

### 1. Clone the Project
```
git clone https://github.com/vishal-ahirwar/quicknotes
cd quicknotes
```

### 2. Set Your Connection String

In `main.cpp`, replace:

```cpp
std::string connectionString = "host=localhost port=5432 user=postgres password=postgres dbname=testdb sslmode=require";
```

with your **remote PostgreSQL connection string**.

---

### 3. Build & Run

```
flick compile
flick run
```
---

## 🧪 PostgreSQL Schema

```sql
CREATE TABLE app_users (
    id SERIAL PRIMARY KEY,
    username TEXT UNIQUE NOT NULL,
    password TEXT NOT NULL
);

INSERT INTO app_users (username, password) VALUES ('admin', '1234');

CREATE TABLE users (
    id SERIAL PRIMARY KEY,
    name TEXT NOT NULL,
    email TEXT NOT NULL
);
```

---

## 💬 About Flick

[Flick](https://github.com/vishal-ahirwar/flick) is a next-gen C++ CLI that lets you build and manage cross-platform C++ projects effortlessly — inspired by Cargo, npm, and Rust's tooling.

> 🚫 No more manual setup. Just plug & build.

---

## 📜 License

MIT — feel free to fork & use in your own projects.

---

## 🙌 Credits

Powered by ⚡ Flick + 💙 wxWidgets + 🐘 PostgreSQL

