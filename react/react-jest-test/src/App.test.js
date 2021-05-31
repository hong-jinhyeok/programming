import React from 'react';
import renderer from 'react-test-renderer';
import  App from './App';
import  NameList from './components/NameList';
import NameForm from './components/NameForm';
import { fireEvent, render,screen } from '@testing-library/react';
import userEvent from "@testing-library/user-event";

describe('App', () => {
    let component = null;

    it('renders correctly', () => {
        component = renderer.create(<App />);
    });
    
    it('insert name', () => {
        //const {obSubmit} = component.getInstance().onInsert;
        //console.log(component.getInstance());
        render(<NameForm onInsert={component.getInstance().onInsert}/>);
        const Name =screen.getByLabelText('이름');
        const btn= screen.getByRole("button");
        //expect(btn).toBeDisabled(); // 버튼 비활성화
        //fireEvent.change(Name,{value:{name:"aa"}});
        userEvent.type(Name,"aa");
        console.log(Name.value);
        userEvent.click(btn);
        console.log(Name.value);
        //userEvent.click(btn);
        //expect(btn).toBeEnabled(); // 버튼 활성화
        //Ncomponent.getInstance().onIsert("aa");
        //expect(obSubmit).toHaveBeenCalledTimes(1);
        
        //console.log(component.getInstance().state);
        expect(component.getInstance().state.names).toEqual(["벨로퍼트", "김민준","aa"]);
    });



    it('list name', () =>{
        const Names=component.getInstance().state;
        render(<NameForm names={Names}/>);
        //const name = Lcomponent.getInstance().props.names;
        //expect(name).toEqual(["벨로퍼트", "김민준","aa"]);
    });
});