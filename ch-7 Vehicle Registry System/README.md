📂 Class Structure
Vehicle
 ├── Car
 │    ├── Sedan
 │    ├── SUV
 │    └── ElectricCar
 │          └── SportsCar
 └── FlyingCar (Car + Aircraft)

Aircraft

🛠️ Technologies Used

Language: C++

Compiler: GCC / MinGW / MSVC

Standard: C++11 or later

▶️ How to Run
1️⃣ Clone the Repository
git clone https://github.com/your-username/vehicle-registry-system.git
cd vehicle-registry-system

2️⃣ Compile the Program
g++ main.cpp -o vehicle_registry

3️⃣ Run the Program
./vehicle_registry

🧪 Sample Menu Output
--- Vehicle Registry System ---
1. Add Sedan
2. Add SUV
3. Add Sports Car
4. Add Flying Car
5. View All Vehicles
6. Search by ID
0. Exit

⚠️ Notes & Limitations

Memory cleanup (delete) is not implemented (can be enhanced using smart pointers).

Input validation is minimal.

Maximum vehicle capacity is 50.

🚀 Future Improvements

Replace raw pointers with std::unique_ptr

Add file handling (save/load vehicles)

Improve formatted output

Add exception handling

Implement vehicle removal

Add GUI or Web interface

📊 Example Output
[SUV] ID: 101
Manufacturer: Toyota
Model: Fortuner
Year: 2022
Fuel Type: Diesel
