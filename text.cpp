#include <iostream>

int main() {
    char choice1;
    char choice2;
    char choice3;


    std::cout << "Welcome to the text adventure!" << std::endl;

    
    std::cout << "You awaken in a room that seems to be made entirely of jelly. The walls quiver and pulse with a sickly pink light, and the air is thick with the scent of artificial strawberries. You feel a little queasy." << std::endl;
    std::cout << "As you stand up, you realize that your body is now made of jelly too. You jiggle experimentally, feeling oddly weightless." << std::endl;

    std::cout << "You notice a door on the far side of the room. It's made of a solid, translucent gelatinous substance, and it wobbles slightly in the breeze." << std::endl;

    std::cout << "*         *           *" << std::endl;
    std::cout << "What do you do?" << std::endl;
    std::cout << "Option A: Open the door" << std::endl;
    std::cout << "Option B: Eat the door" << std::endl;
    std::cout << "Option C: Sit down and cry" << std::endl;

    std::cin >> choice1;
    choice1 = toupper(choice1);
    while (choice1 != 'A' && choice1 != 'B' && choice1 != 'C') {
        std::cout << "Invalid input. Please try again." << std::endl;
        std::cin >> choice1;
        choice1 = toupper(choice1);
    }

    switch (choice1) {
        case 'A':
            std::cout << "As you enter the door you see a giant jelly monster. It looks at you and says 'I am the jelly monster. I am here to eat you." << std::endl;
            std::cout << "What do you do?" << std::endl;
            std::cout << "Option A: RUN!" << std::endl;
            std::cout << "Option B: Stand your ground and fight!" << std::endl;
            std::cout << "Option C: Sit down and cry" << std::endl;

            std::cin >> choice2;
            choice2 = toupper(choice2);

            while ( choice2 != 'A' && choice2 != 'B' && choice2 != 'C')
            {
                std::cout << "Invalid input. Please try again." << std::endl;
                std::cin >> choice2;
                choice2 = toupper(choice2);
            }

            switch (choice2) {
            case 'A':
                std::cout << "You run away from the jelly monster. You run and run and run until you can't run anymore. You're safe for now, but you're lost in the jelly castle." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Keep running" << std::endl;
                std::cout << "Option B: Sit down and cry" << std::endl;
                std::cout << "Option C: Eat the walls" << std::endl;

                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3) {
                    case 'A':
                        std::cout << "You keep running and running and running until you're so tired you can't run anymore. You collapse on the floor and fall asleep." << std::endl;
                        std::cout << "You wake up and the jelly monster is standing over you. It eats you." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You sit down and cry. The jelly monster comes through the door and tries to eat you anyway. It doesn't care about you and your tears." << std::endl;
                        std::cout << "Your tears just make it easier for the monster to eat you, as if you were marinating yourself in a delicious gelatinous, fruity sauce." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the monster's digestive juices." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You eat the walls. They taste like strawberries. You eat and eat and eat until you're so full you can't eat anymore." << std::endl;
                        std::cout << "You pass out from all the eating and wake up in your own bed. It was all a dream." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                }


                break;
            case 'B':
                std::cout << "You stand your ground and fight the jelly monster. You punch it in the face and it wobbles back and forth. It looks angry." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Punch it again" << std::endl;
                std::cout << "Option B: Run away" << std::endl;
                std::cout << "Option C: Try to eat the jelly monster while it's still wobbling, slightly dazed and confused." << std::endl;

                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3) {
                    case 'A':
                        std::cout << "With a swift 1-2 combo and a left hook, you knock the jelly monster out cold. You win!" << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You run away from the jelly monster. You run and run and run until you can't run anymore. You're safe for now, but you're lost in the jelly castle forever." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You try to eat the jelly monster, but it's too big. You can't eat it. It eats you instead." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                }

                break;
            
            case 'C':
                std::cout << "You sit down and cry. The jelly monster comes through the door and tries to eat you anyway. It doesn't care about you and your tears." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Submit and become his dinner." << std::endl;
                std::cout << "Option B: Try to run away." << std::endl;
                std::cout << "Option C: Try to eat the jelly monster before it eats you." << std::endl;

                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3) {
                    case 'A':
                        std::cout << "You submit to the jelly monster and become his dinner. You are delicious." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You try to run away, but the jelly monster is too fast. It catches you and eats you." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You try to eat the jelly monster, but it's too big. You can't eat it. It eats you instead." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                }

                break;

            default:
                break;
            
            }

            break;

        case 'B':
            std::cout << "You eat the door and it tastes like strawberries. You feel a little sick, but it's quite tasty so you keep stuffing your face full of jelly door." << std::endl;
            std::cout << "What do you do?" << std::endl;
            std::cout << "Option A: Keep eating the door until you hate yourself." << std::endl;
            std::cout << "Option B: Stop eating and take a nap. All the jelly has made you feel sleepy.";
            std::cout << "Option C: Stop eating and go through the door";

            std::cin >> choice2;
            choice2 = toupper(choice2);

            while (choice2 != 'A' && choice2 != 'B' && choice2 != 'C') {
                std::cout << "Invalid input. Please try again." << std::endl;
                std::cin >> choice2;
                choice2 = toupper(choice2);
            }

            switch (choice2) {
            case 'A':
                std::cout << "You keep eating the door until you hate yourself. You feel sick and you're not sure if you can move. You're stuck in the jelly castle forever." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Keep eating the door until you pass out." << std::endl;
                std::cout << "Option B: Try to get up and think of a plan to escape." << std::endl;
                std::cout << "Option C: Resign yourself to the fact that you're stuck in the jelly castle forever." << std::endl;

                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3) {
                    case 'A':
                        std::cout << "You keep eating the door until you pass out. You wake up and the jelly monster is standing over you." << std::endl;
                        std::cout << "You scream and try to run. You keep running and running and running until you can't run anymore. You're safe for now, but you're lost in the jelly castle forever." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You try to get up and think of a plan to escape. You're too sick to move and you try to run but pass out from the exaustion." << std::endl;
                        std::cout << "You wake up in your bed and realise it was all a dream..." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You resign yourself to the fact that you're stuck in the jelly castle forever. You sit down and cry." << std::endl;
                        std::cout << "No one is coming to save you. You spend the rest of your days running around the jelly castle, eating the walls and crying, hoping you don't get eaten by the jelly monster." << std::endl;
                        std::cout << "The End." << std::endl;
                }

                break;

            case 'B':

                std::cout << "You stop eating and take a nap. All the jelly has made you feel sleepy. You wake up and the jelly monster is standing over you." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Try to eat the jelly monster." << std::endl;
                std::cout << "Option B: Run away." << std::endl;
                std::cout << "Option C: Sit down and cry." << std::endl;

                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3) {
                    case 'A':
                        std::cout << "You try to eat the jelly monster, but it's too big. You can't eat it. It eats you instead." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You try to run away, but the jelly monster is too fast. It catches you and eats you." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You sit down and cry. The jelly monster looks at you and starts to cry too." << std::endl;
                        std::cout << "You both cry for a while and then the jelly monster picks you up and takes you to the door." << std::endl;
                        std::cout << "The jelly monster opens the door and you see a beautiful sunny day outside. You're free!" << std::endl;
                        std::cout << "The jelly monster waves goodbye and you go home." << std::endl;
                        std::cout << "The End." << std::endl;
                }

                break;

            case 'C':
                std::cout << "You stop eating and go through the door. You're in a room with a jelly monster. It looks angry." << std::endl;
                std::cout << "What do you do?" << std::endl;
                std::cout << "Option A: Try to eat the jelly monster." << std::endl;
                std::cout << "Option B: Run away." << std::endl;
                std::cout << "Option C: Try to reason with the Jelly Monster. Maybe you can work things out." << std::endl;
                
                std::cin >> choice3;
                choice3 = toupper(choice3);

                while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                    std::cout << "Invalid input. Please try again." << std::endl;
                    std::cin >> choice3;
                    choice3 = toupper(choice3);
                }

                switch (choice3)
                {
                    case 'A':
                        std::cout << "You try to eat the jelly monster, but it's too big. You can't eat it..." << std::endl;
                        std::cout << "The jelly monster eats you instead." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You try to run away, but the jelly monster is too fast. It catches you and eats you." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You try to reason with the jelly monster. You tell it that you're sorry for eating all the jelly and that you'll never do it again." << std::endl;
                        std::cout << "The jelly monster looks at you and starts to cry. It tells you that it's okay and that it's sorry for trying to eat you." << std::endl;
                        std::cout << "You both cry for a while and then the jelly monster picks you up and takes you to the door." << std::endl;
                        std::cout << "The jelly monster opens the door and you see a beautiful sunny day outside. You're free!" << std::endl;
                        std::cout << "The jelly monster waves goodbye and you go home." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                
                    default:
                        break;
                }

                break;
            }

            break;
        
        case 'C':
            std::cout << "You sit down and cry. The jelly monster comes through the door and tries to eat you anyway." << std::endl;
            std::cout << "What do you do?" << std::endl;
            std::cout << "Option A: RUN!" << std::endl;
            std::cout << "Option B: Stand your ground and fight!" << std::endl;
            std::cout << "Option C: Keep crying..." << std::endl;

            std::cin >> choice2;
            choice2 = toupper(choice2);

            while ( choice2 != 'A' && choice2 != 'B' && choice2 != 'C') {
                std::cout << "Invalid input. Please try again." << std::endl;
                std::cin >> choice2;
                choice2 = toupper(choice2);
            }

            switch (choice2) {

                case 'A':
                    std::cout << "You run away. The jelly monster chases you. You run into a room with a door. You can't open it. It's made of jelly." << std::endl;
                    std::cout << "What do you do?" << std::endl;
                    std::cout << "Option A: Try to eat your way through the door." << std::endl;
                    std::cout << "Option B: Keep trying to open the door." << std::endl;
                    std::cout << "Option C: Sit down and cry." << std::endl;

                    std::cin >> choice3;
                    choice3 = toupper(choice3);

                    while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                        std::cout << "Invalid input. Please try again." << std::endl;
                        std::cin >> choice3;
                        choice3 = toupper(choice3);
                    }

                    switch (choice3)
                    {
                    case 'A':
                        std::cout << "You try to eat your way through the door, but it's too thick. You can't eat it..." << std::endl;
                        std::cout << "The jelly monster catches you and grabs you. You think this is it..." << std::endl;
                        std::cout << "But then the jelly monster starts to cry. It tells you that it's sorry for trying to eat you." << std::endl;
                        std::cout << "You both cry for a while and then the jelly monster picks you up and takes you to the door." << std::endl;
                        std::cout << "The jelly monster opens the door and you see a beautiful sunny day outside. You're free!" << std::endl;
                        std::cout << "The jelly monster waves goodbye and you go home." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'B':
                        std::cout << "You keep trying to open the door, but it's no use. It's made of jelly. It's jammed shut!" << std::endl;
                        std::cout << "The jelly monster catches you and grabs you. His jelly grip becomes tighter and tighter..." << std::endl;
                        std::cout << "You can't breathe. You can't move. You can't do anything." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                        break;
                    case 'C':
                        std::cout << "You sit down and cry. The jelly monster comes through the door and tries to eat you anyway." << std::endl;
                        std::cout << "You try to escape, but it's no use. He grabs your leg and starts to pull you towards his mouth." << std::endl;
                        std::cout << "He starts to slurp you down like you're a saucy spaghetti noodle." << std::endl;
                        std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                        std::cout << "The End." << std::endl;
                    default:
                        break;
                    }

                    break;
                
                case 'B':
                    std::cout << "You stand your ground and fight, but the jelly monster is far to strong..." << std::endl;
                    std::cout << "You kick. You punch. You bite. You do everything you can, but it's no use." << std::endl;
                    std::cout << "What do you do?" << std::endl;
                    std::cout << "Option A: RUN!" << std::endl;
                    std::cout << "Option B: Keep fighting!" << std::endl;
                    std::cout << "Option C: Sit down and cry." << std::endl;
                    
                    std::cin >> choice3;
                    choice3 = toupper(choice3);

                    while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                        std::cout << "Invalid input. Please try again." << std::endl;
                        std::cin >> choice3;
                        choice3 = toupper(choice3);
                    }

                    switch (choice3) {
                        case 'A':
                            std::cout << "You run away. The jelly monster chases you. You run into a room with a door. You can't open it. It's made of jelly." << std::endl;
                            std::cout << "You're trapped. You try to reason with the monster as it approaches you, begging him to spare you." << std::endl;
                            std::cout << "The jelly monster stops and looks at you. It seems to be considering your request." << std::endl;
                            std::cout << "All of the sudden, an even bigger jelly monster comes through the door!" << std::endl;
                            std::cout << "The bigger jelly monster eats the smaller jelly monster and then turns to you." << std::endl;
                            std::cout << "You try to run, but it's no use. The bigger jelly monster grabs you and eats you." << std::endl;
                            std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                            std::cout << "The End." << std::endl;
                            break;
                        case 'B':
                            std::cout << "You keep fighting, but it's no use. The jelly monster is far too strong." << std::endl;
                            std::cout << "You kick. You punch. You bite. You do everything you can, but it's no use." << std::endl;
                            std::cout << "The jelly monster grabs you and eats you." << std::endl;
                            std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                            std::cout << "The End." << std::endl;
                            break;
                        case 'C':
                            std::cout << "You sit down and cry. The jelly monster comes through the door and looks at you with pity as it considers whether or not it will eat you." << std::endl;
                            std::cout << "For a moment, you think it's going to let you go, but then it opens its mouth and..." << std::endl;
                            std::cout << "Everything does dark." << std::endl;
                            std::cout << "The End." << std::endl;
                    }

                    break;
                case 'C':
                    std::cout << "You sit down and cry. The jelly monster comes through the door and looks at you with pity as it considers whether or not it will eat you." << std::endl;
                    std::cout << "For a moment, you think it's going to let you go, but then it opens its mouth and..." << std::endl;
                    std::cout << "What do you do?" << std::endl;
                    std::cout << "Option A: RUN!" << std::endl;
                    std::cout << "Option B: Stand your ground and fight!" << std::endl;
                    std::cout << "Option C: Keep crying..." << std::endl;
                    
                    std::cin >> choice3;
                    choice3 = toupper(choice3);

                    while (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {
                        std::cout << "Invalid input. Please try again." << std::endl;
                        std::cin >> choice3;
                        choice3 = toupper(choice3);
                    }

                    switch (choice3) {
                        case 'A':
                            std::cout << "You run away. The jelly monster chases you. You run into a room with a door. You can't open it. It's made of jelly." << std::endl;
                            std::cout << "You're trapped. You try to reason with the monster as it approaches you, begging him to spare you." << std::endl;
                            std::cout << "The jelly monster stops and looks at you. It seems to be considering your request." << std::endl;
                            std::cout << "All of the sudden, an even bigger jelly monster comes through the door!" << std::endl;
                            std::cout << "The bigger jelly monster eats the smaller jelly monster and then turns to you." << std::endl;
                            std::cout << "You try to run, but it's no use. The bigger jelly monster grabs you and eats you." << std::endl;
                            std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                            std::cout << "The End." << std::endl;
                            break;
                        case 'B':
                            std::cout << "You keep fighting, but it's no use. The jelly monster is far too strong." << std::endl;
                            std::cout << "You kick. You punch. You bite. You do everything you can, but it's no use." << std::endl;
                            std::cout << "The jelly monster grabs you and eats you." << std::endl;
                            std::cout << "Everything goes dark as you succumb to the moist undulating of the monster's digestive juices." << std::endl;
                            std::cout << "The End." << std::endl;
                            break;
                        case 'C':
                            std::cout << "You keep crying. The jelly monster looks at you with pity as it considers whether or not it will eat you." << std::endl;
                            std::cout << "For a moment, you think it's going to let you go, but then it opens its mouth and..." << std::endl;
                            std::cout << "Everything does dark." << std::endl;
                            std::cout << "You wake up in your bed in a cold sweat, heart pounding... But it was all a dream." << std::endl;
                            std::cout << "The End." << std::endl;
                    }

                    break;
            
            }

    return 0;
}
}