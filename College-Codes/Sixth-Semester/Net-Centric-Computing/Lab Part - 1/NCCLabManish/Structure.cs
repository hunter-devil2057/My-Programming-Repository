using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace NCCLabManish
{
    // Define a structure to represent a Pokémon
    public struct Pokemon
    {
        public string Name;
        public string Type;
        public int Level;

        // Constructor to initialize a Pokémon
        public Pokemon(string name, string type, int level)
        {
            Name = name;
            Type = type;
            Level = level;
        }

        // Method to display Pokémon details
        public void DisplayInfo()
        {
            Console.WriteLine("Name: {0}", Name);
            Console.WriteLine("Type: {0}", Type);
            Console.WriteLine("Level: {0}", Level);
            Console.WriteLine();
        }

        // Method to level up the Pokémon
        public void LevelUp()
        {
            Level++;
            Console.WriteLine("{0} leveled up to level {1}!", Name, Level);
            Console.WriteLine();
        }
    }

    class Structure
    {
        static void Main(string[] args)
        {
            // Create instances of Pokémon using the structure
            Pokemon pikachu = new Pokemon("Pikachu", "Electric", 5);
            Pokemon charizard = new Pokemon("Charizard", "Fire/Flying", 36);
            Pokemon bulbasaur = new Pokemon("Bulbasaur", "Grass/Poison", 16);

            // Display Pokémon details
            pikachu.DisplayInfo();
            charizard.DisplayInfo();
            bulbasaur.DisplayInfo();

            // Level up some Pokémon
            pikachu.LevelUp();
            charizard.LevelUp();

            // Display updated Pokémon details
            pikachu.DisplayInfo();
            charizard.DisplayInfo();
        }
    }
}
