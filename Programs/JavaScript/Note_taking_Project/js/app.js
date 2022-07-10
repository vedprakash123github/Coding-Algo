//console.log("Welcome to notes app");
shownotes();

//if user adds a note add it to local storage;
//the notes will be stored as array and each array element will be printed in the individual div
//add notes Btn
let addBtn = document.getElementById("addBtn"); //add eventlistner Add Note Button
addBtn.addEventListener("click", function (e) {
  let addtxt = document.getElementById("addTxt");
  let notes = localStorage.getItem("notes"); //fetch the value of text field(if there is any note already)
  if (notes == null) {
    //if there are no notes
    notesObj = []; // set the array to empty
  } else {
    notesObj = JSON.parse(notes); //then parse the text to javascript object
  }
  notesObj.push(addTxt.value); //push the text of the text field to the notes div
  localStorage.setItem("notes", JSON.stringify(notesObj)); //add the notes to the local storage
  addtxt.value = ""; //set the text box to empty so that the new notes can be taken.
  //console.log(notesObj);

  shownotes(); // This function will add a note to the card
});


//function to add a note
function shownotes() {
  let notes = localStorage.getItem("notes");
  if (notes == null) {
    //if there are no notes
    notesObj = []; // set the array to empty
  } else {
    notesObj = JSON.parse(notes); //then parse the text to javascript object
  }
  let html = "";
  notesObj.forEach(function (element, index) {
    html += ` <div class="noteCard my-2 mx-2 card" style="width: 18rem;">
                    <div class="card-body">
                        <h5 class="card-title">Note ${index + 1}</h5>
                        <p class="card-text">${element}</p>
                        <button id="${index}" onclick="deleteNote(this.id)" class="btn btn-primary">Delete Note</button> 
                    </div>
                </div>`;
  });

  let notesElm = document.getElementById("notes");
  if (notesObj.length != 0) notesElm.innerHTML = html;
  else {
    notesElm.innerHTML = `Nothing to show in notes. Use "addNote" button to add notes`;
  }
}


//function to delete a note
function deleteNote(index) {
  //console.log("I am deleting note : ", index);
  let notes = localStorage.getItem("notes");
  if (notes == null) {
    //if there are no notes
    notesObj = []; // set the array to empty
  } else {
    notesObj = JSON.parse(notes); //then parse the text to javascript object
  }
  notesObj.splice(index, 1); //this line will remove the particular note from the notes array
  localStorage.setItem("notes", JSON.stringify(notesObj)); //aftet deleting the notes from the array we have to push the updated array back to the local storage or else the updated array/notes will not be reflectted in the local storage
  shownotes(); //again call the shownptes method to show the updated notes
}



//search note functionality

let search=document.getElementById("searchTxt");
search.addEventListener("input",function(){
    let inputVal=search.value.toLowerCase();
    //console.log("This is search functionality",inputVal);
    let noteCards=document.getElementsByClassName("noteCard"); //fetch all the divs with class name as noteCard
    Array.from(noteCards).forEach(function(element) {
            let cardTxt=element.getElementsByTagName("p")[0].innerText; //fetch  the p tag from the div
            if(cardTxt.includes(inputVal)) //match the text on the p tag with the search val;
            {
                element.style.display="block";
            }
            else
            {
                element.style.display="none";
            }
    })
})


