import { UseState } from "react";
import userContext from "./userContext";

const userContextProvider = ({ children }) => {
  const [user, setUser] = UseState(0);
  return (
    <userContext.Provider value={{ user, setUser }}>
      {children}
    </userContext.Provider>
  );
};

export default userContextProvider;