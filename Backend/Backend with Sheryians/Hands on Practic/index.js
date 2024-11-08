const express = require("express");
const path = require("path");
const fs = require("fs");
const app = express();

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.use(express.static(path.join(__dirname, "public")));
app.set("view engine", "ejs");

app.get("/", function (req, res) {
  fs.readdir(`./files`, function (err, files) {
    res.render("index", { files: files });
  });
});


// app.get("/files/:filename", function (req, res) {
//   fs.readFile(`./files/${req.params.filename}`, "utf-8", function (err, filedata) {
//     if (err) {
//       console.log("File reading error");
//     }
//     else {
//       res.render("file", { filename: req.params.filename, filedata: filedata })

//     }
//   })
// });



// app.post(`/create`, function (req, res) {
//   fs.writeFile(
//     `./files/${req.body.title.split(" ").join("")}.txt`, req.body.details,
//     function (err) {
//       res.redirect("/");
//     }
//   );
// });

app.listen(3000, () => {
  console.log("Server is runing on port 3000");
});
