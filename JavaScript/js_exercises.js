1. Objects and Loops
// Our Person constructor
function Person(name, age){
    this.name = name;
    this.age = age;
}

// Now we can make an array of people
var family = new Array();
family[0] = new Person("alice", 40);
family[1] = new Person("bob", 42);
family[2] = new Person("michelle", 8);
family[3] = new Person("timmy", 6);
// loop through our new array
for(var i=0; i<family.length; i++)
{
    console.log(family[i].name)
}

2. Passing Objects into Functions
// Our person constructor
function Person (name, age) {
    this.name = name;
    this.age = age;
}

// We can make a function which takes persons as arguments
// This one computes the difference in ages between two people
var ageDifference = function(person1, person2) {
    return person1.age - person2.age;
}

var alice = new Person("Alice", 30);
var billy = new Person("Billy", 25);

// get the difference in age between alice and billy using our function
var diff = ageDifference(alice, billy);

3. Properties
var snoopy = new Object();
snoopy.species = "beagle";
snoopy.age = 10;

// save Snoopy's age and species into variables
// use dot notation for snoopy's species
var species = snoopy.species;
    
// use bracket notation for snoopy's age
var age = snoopy["age"];

4. Constructor
// 3 lines required to make harry_potter
var harry_potter = new Object();
harry_potter.pages = 350;
harry_potter.author = "J.K. Rowling";

// A custom constructor for book
function Book (pages, author) {
    this.pages = pages;
    this.author = author;
}

// Use our new constructor to make the_hobbit in one line
var the_hobbit = new Book(320, "J.R.R. Tolkien");

5. Functions & References
var james = {
    job: "programmer",
    married: false,
    speak: function(a) {
        console.log("Hello, I am feeling " + a);
    },
    sayJob: function() {
        // complete this method
        console.log("Hi, I work as a " + this.job);
    }
};

james.speak("great");

// james' first job
james.sayJob();

// change james' job to "super programmer" here
james.job = "super programmer";

// james' second job
james.sayJob();


6. Jmecherii with variables in bracket notation

var james = {
    job: "programmer",
    married: false
};

// set to the first property name of "james"
var aProperty = "job"

// print the value of the first property of "james" 
// using the variable "aProperty"
console.log(james[aProperty])


7. hasOwnProperty

var suitcase = {
    shirt: "Hawaiian",
    shorts: "ceva"
};

if (suitcase.hasOwnProperty("shorts"))
{
    console.log(suitcase.shorts);
}
else{
    suitcase.shorts = "anything";
    console.log (suitcase.shorts)
}

8. For-in example

var nyc = {
    fullName: "New York City",
    mayor: "Bill de Blasio",
    population: 8000000,
    boroughs: 5
};

for(var i in nyc) {
    console.log(i); //printing out each key
}

// write a for-in loop to print the value of nyc's properties
for(i in nyc){
    console.log(nyc[i]);
}

9. Prototype to the rescue

function Dog (breed) {
  this.breed = breed;
};

// here we make buddy and teach him how to bark
var buddy = new Dog("golden Retriever");
Dog.prototype.bark = function() {
  console.log("Woof");
};
buddy.bark();

// here we make snoopy
var snoopy = new Dog("Beagle");
/// this time it works!
snoopy.bark();

OR:

// create your Animal class here
function Animal (name, numLegs){
    this.name = name;
    this.numLegs = numLegs;
}


// create the sayName method for Animal
Animal.prototype.sayName = function(){
    console.log("Hi my name is " + this.name);
}




// provided code to test above constructor and method
var penguin = new Animal("Captain Cook", 2);
penguin.sayName();

10. DRY Prototype

// the original Animal class and sayName method
function Animal(name, numLegs) {
    this.name = name;
    this.numLegs = numLegs;
}
Animal.prototype.sayName = function() {
    console.log("Hi my name is " + this.name);
};

// define a Penguin class

function Penguin(name){
    this.name = name;
    this.numLegs = 2;
}

// set its prototype to be a new instance of Animal
Penguin.prototype = new Animal();

var penguin = new Penguin("Madagascar");
penguin.sayName();

11. Prototype chain

// original classes
function Animal(name, numLegs) {
    this.name = name;
    this.numLegs = numLegs;
    this.isAlive = true;
}
function Penguin(name) {
    this.name = name;
    this.numLegs = 2;
}
function Emperor(name) {
    this.name = name;
    this.saying = "Waddle waddle";
}

// set up the prototype chain
Penguin.prototype = new Animal();
Emperor.prototype = new Penguin();

var myEmperor = new Emperor("Jules");

console.log( myEmperor.saying ); // should print "Waddle waddle"
console.log( myEmperor.numLegs ); // should print 2
console.log( myEmperor.isAlive ); // should print true

12. Accesing private Variables

function Person(first,last,age) {
   this.firstname = first;
   this.lastname = last;
   this.age = age;
   var bankBalance = 7500;
  
   this.getBalance = function() {
      // your code should return the bankBalance
      return bankBalance;
   };
}

var john = new Person('John','Smith',30);
console.log(john.bankBalance); //prints undefined

// create a new variable myBalance that calls getBalance()
var myBalance = john.getBalance();
console.log(myBalance);

13. Private Methods 

function Person(first,last,age) {
   this.firstname = first;
   this.lastname = last;
   this.age = age;
   var bankBalance = 7500;
  
   var returnBalance = function() {
      return bankBalance;
   };
       
   // create the new function here
   this.askTeller = function(){
       return returnBalance;
   }
}

var john = new Person('John','Smith',30);
console.log(john.returnBalance); // prints undefined
var myBalanceMethod = john.askTeller();
//var myBalance = myBalanceMethod();
console.log(myBalanceMethod);

14. Passing arguments

function Person(first,last,age) {
   this.firstname = first;
   this.lastname = last;
   this.age = age;
   var bankBalance = 7500;
  
   this.askTeller = function(pass) {
     if (pass == 1234) return bankBalance;
     else return "Wrong password.";
   };
}

var john = new Person('John','Smith',30);
/* the variable myBalance should access askTeller()
   with a password as an argument  */
var myBalance = john.askTeller(1234);

15. For-In, Typeof and objects

var languages = {
    english: "Hello!",
    french: "Bonjour!",
    notALanguage: 4,
    spanish: "Hola!"
};

// print hello in the 3 different languages
for(var i in languages){
    if(typeof languages[i] === "string")
    {
        console.log(languages[i]);
    }
}

16. Validation Forms

<!DOCTYPE html>
<html>
<head>
<script>
function validateForm() {
    var x = document.forms["myForm"]["fname"].value;
    if (x == null || x == "") {
        alert("Name must be filled out");
        return false;
    }
}
</script>
</head>
<body>

<form name="myForm" action="demo_form.asp"
onsubmit="return validateForm()" method="post">
Name: <input type="text" name="fname">
<input type="submit" value="Submit">
</form>

</body>
</html>

17.Validation - rangeUnderflow

<!DOCTYPE html>
<html>
<body>

<p>Enter a number and click OK:</p>

<input id="id1" type="number" min="100">
<button onclick="myFunction()">OK</button>

<p>If the number is less than 100 (the input's min attribute), an error message will be displayed.</p>

<p id="demo"></p>

<script>
function myFunction() {
    var txt = "";
    if (document.getElementById("id1").validity.rangeUnderflow) {
        txt = "Value too small";
    } else {
        txt = "Input OK";
    }
    document.getElementById("demo").innerHTML = txt;
}
</script>

</body>
</html>

18. Validation checkValidity

<!DOCTYPE html>
<html>
<body>

<p>Enter a number and click OK:</p>

<input id="id1" type="number" min="100" max="300" required>
<button onclick="myFunction()">OK</button>

<p>If the number is less than 100 or greater than 300, an error message will be displayed.</p>

<p id="demo"></p>

<script>
function myFunction() {
    var inpObj = document.getElementById("id1");
    if (inpObj.checkValidity() == false) {
        document.getElementById("demo").innerHTML = inpObj.validationMessage;
    } else {
        document.getElementById("demo").innerHTML = "Input OK";
    }
}
</script>

</body>
</html>



19. Create object from JSON String

<!DOCTYPE html>
<html>
<body>

<h2>Create Object from JSON String</h2>

<p id="demo"></p>

<script>
var text = '{"employees":[' +
'{"firstName":"John","lastName":"Doe" },' +
'{"firstName":"Anna","lastName":"Smith" },' +
'{"firstName":"Peter","lastName":"Jones" }]}';

obj = JSON.parse(text);
document.getElementById("demo").innerHTML =
obj.employees[1].firstName + " " + obj.employees[1].lastName;
</script>

</body>
</html>

20. Arrays with map method

<!DOCTYPE html>
<html>
<body>

<p>Click the button to get a new array with the full name of each person in the array.</p>
<button onclick="myFunction()">Try it</button>

<p>New array: <span id="demo"></span></p>

<script>
var persons = [
    {firstname : "Malcom", lastname: "Reynolds"},
    {firstname : "Kaylee", lastname: "Frye"},
    {firstname : "Jayne", lastname: "Cobb"}
];


function getFullName(item,index) {
    var fullname = [item.firstname,item.lastname].join(" ");
    return fullname;
}

function myFunction() {
    document.getElementById("demo").innerHTML = persons.map(getFullName);
}
</script>

</body>
</html>


21. Iterating JSON array 

var dictionary = {
    "data":[
        {"id":"0","name":"ABC"},
        {"id":"1","name":"DEF"}
    ],
    "images": [
        {"id":"0","name":"PQR"},
        {"id":"1","name":"xyz"}
    ]
};

var data = dictionary.data;

for(var i in data)
{
     var id = data[i].id;
     var name = data[i].name;
}

