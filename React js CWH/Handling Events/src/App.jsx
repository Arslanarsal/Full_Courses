import { useState } from "react";

import "./App.css";

function App() {
  const [count, setCount] = useState(0);
  const [form, setform] = useState({
    name: "",
    phone: "",
  });
  const [name, setname] = useState("");
  const handlechange = (e) => {
    // setname(e.target.value);
    setform({ ...form, [e.target.name]: e.target.value });
    console.log(form);
  };

  return (
    <>
      <button onClick={() => setCount((count) => count + 1)}>
        count is {count}
      </button>
      {/* <input
        type="text"
        name="name"
        value={name}
        onChange={handlechange}
      /> */}
      <input
        type="text"
        name="name"
        value={form.name}
        onChange={handlechange}
      />
      <input
        type="text"
        name="phone"
        value={form.phone}
        onChange={handlechange}
      />
    </>
  );
}

export default App;
