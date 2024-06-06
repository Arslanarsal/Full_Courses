import { useState } from "react";
import "./App.css";

function App() {
  const [count, setCount] = useState(0);

  return (
    <userContextProvider>
      <h1>Context Api</h1>
    </userContextProvider>
  );
}

export default App;
