const express = require("express");
const app = express();

// Middleware 1: Global middleware applied to all routes
app.use(function (req, res, next) {
  console.log("Middleware 1: This middleware runs for every request.");
  next();
});

// Error-handling middleware: This should come after all regular middleware and routes
app.use(function (err, req, res, next) {
  console.log("Error-handling Middleware: This middleware handles errors.");
  res.status(500).send("Something broke!");
});

// Middleware 2: External middleware defined as a separate module
const logMiddleware = function (req, res, next) {
  console.log("Middleware 2: Logging from external middleware.");
  next();
};

// Using the external middleware globally
app.use(logMiddleware);

// Middleware 3: Route-specific middleware
function routeSpecificMiddleware(req, res, next) {
  console.log(
    "Route-specific Middleware: This middleware runs only for the /about route."
  );
  next();
}

// Route: Using route-specific middleware for the /about route
app.get("/about", routeSpecificMiddleware, function (req, res, next) {
  res.send("This is the about page");
});

// Route: Default route without any specific middleware
app.get("/", function (req, res) {
  res.send("In the slash Arslan");
});

// Route: To trigger error for testing error-handling middleware
app.get("/error", function (req, res, next) {
  next(new Error("This is an error")); // This will trigger the error-handling middleware
});

// Start the server
app.listen(3000, () => {
  console.log("Server is running on port 3000");
});
