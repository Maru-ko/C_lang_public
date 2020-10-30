#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    char *delivery = "";
    char *eyecontact = "";
    int thick = 0;
    int nosauce = 0;
    int contactless = 0;
    char ch;
    //Enter -c for contactless -t for thick -n for no sauce"
    //following need arguments\n -e amount of eye contact - Delivery speed
    while ((ch = getopt(argc, argv, "ntcd:e:")) != EOF)
    switch (ch) {
    case 'c':
      contactless = 1;
    case 'd':
      delivery = optarg;
      break;
    case 'e':
      eyecontact = optarg;
      break;
    case 't':
      thick = 1;
      break;
    case 'n':
      nosauce = 1;
      break;
    default:
      fprintf(stderr, "Unknown option: '%s'\n", optarg);
      return 1;
      }

    argc -= optind;
    argv += optind;
    
    if (thick) {
      puts("\nThick crust.");
    }
    if (nosauce) {
      puts("\nNo marinara sauce!");
    }
    if (contactless) {
      puts("\nLeave in front door step, ring bell, leave.");
    }
    if (delivery[0]) {
      printf("\nTo be delivered %s.\n", delivery);
    }
    if (eyecontact[0]) {
      printf("\nAmount of eye contact to give: %s\n", eyecontact);
    }

    puts("\nIngredients:");
    for (int count = 0; count < argc; count++){
      puts(argv[count]);
    }
    return 0;
}