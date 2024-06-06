import { useState } from "react";
import userContext from "./userContext";

const userContextProvider = ({ children }) => {
  let [user, setUser] = useState(0);

  return (
    <userContext.Provider value={{ user, setUser }}>
      {children}
    </userContext.Provider>
  );
};

export default userContextProvider;