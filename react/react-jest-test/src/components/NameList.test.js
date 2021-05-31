import React from 'react';
import renderer from 'react-test-renderer';
import  NameList from './NameList';
import NameForm from './NameForm';
import { fireEvent, render,screen } from '@testing-library/react';
import userEvent from "@testing-library/user-event";

describe('NameList', () => {
    let component = null;

    it('renders correctly', () => {
        component = renderer.create(<NameList names={["벨로퍼트", "김민준"]} />);
    });

    it('matches namelist', () => {
       // console.log(component.getInstance().props.names);
        const name = component.getInstance().props.names;
        expect(name).toEqual(["벨로퍼트", "김민준"]);
    });

   
});