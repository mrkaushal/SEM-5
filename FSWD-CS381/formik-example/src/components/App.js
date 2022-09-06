import './App.css';
import {BrowserRouter, Route, Routes} from 'react-router-dom';
import Form from './Form/Form';

function App() {
  return (
    <div className="App">
      <BrowserRouter>
        <Routes>
          <Route exact path="/" element={<Form/>}/>
        </Routes>
      </BrowserRouter>
    </div>
  );
}

export default App;
