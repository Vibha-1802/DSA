class Robot {
public:
    int w,h;
    string direction="East";
    vector <int> position = {0,0};
    Robot(int width, int height) {
        w = width;
        h = height;
    }
    
    void step(int num) {
        int cycle = 2 * (w + h - 2);
        num = num % cycle;
        if (num == 0) {
            num = cycle;
        }
        for(int i=num;i>0;)
        {
        if(direction=="East")
        {
        if((position[0]+i)<=(w-1))
        {
            position[0]=position[0]+i;
            i=0;
            continue;
        }
        i=i-(w-1-position[0]);
        direction="North";
        position[0]=w-1;
        }
        if(direction=="North")
        {
        if((position[1]+i)<=(h-1))
        {
            position[1]=position[1]+i;
            i=0;
            continue;
        }
        i=i-(h-1-position[1]);
        direction="West";
        position[1]=h-1;
        }
        if(direction=="West")
        {
        if((position[0]-i)>=0)
        {
            position[0]=position[0]-i;
            i=0;
            continue;
        }
        i=i-position[0];
        direction="South";
        position[0]=0;
        }
        if(direction=="South")
        {
        if((position[1]-i)>=0)
        {
            position[1]=position[1]-i;
            i=0;
            continue;
        }
        i=i-position[1];
        direction="East";
        position[1]=0;
        }
        }
        return;
    }
    
    vector<int> getPos() {
        return position;
    }
    
    string getDir() {
        return direction;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */