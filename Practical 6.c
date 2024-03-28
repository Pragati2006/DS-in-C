                    printf("Queue is Empty.\n");
                }
                else{
                    printf("%d is available in front of queue!!!!",val);
                    break;
                }
            case 4:
                display();
            case 5:
                exit(0);
                break;
            default:
                printf("invalid choice!!!\n");
        }
        printf("\n");
        system("pause");
    }
    return 0;
}*/
int main(){
    int val;
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    printf("\n");
    display();
    return 0;
}
