// https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Classes

class Struggle{
    #level;
    #intensity;
    constructor(level, intensity){
        this.level = level;
        this.intensity = intensity;
    }

    get totalStruggle() {
        return this.level * this.intensity;
    }
};

let struggle = new Struggle(10, 10);
console.log(struggle.totalStruggle);