#include<iomanip>
using namespace std;

void progress(int in,int of){
    float percent = (float)(in*100)/of;
    int bars = ((in*20)/of);
    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cout<<"[";
    int temp = bars;
    while(temp!=0){
        cout<<"=";
        temp--;
    }
    int spaces = 20-bars;
    if(bars<20){
        cout<<">";
        spaces--;
    }
    while(spaces!=0){
        cout<<" ";
        spaces--;
    }
    cout<<"]";
    cout<<fixed<<setfill(' ')<<setw(7)<<setprecision(2)<<percent<<"%"<<"  "<<in<<"/"<<of;
    if(percent == 100){
        cout<<endl;
    }
}

void progress(int in,int of,int numbars){
    float percent = (float)(in*100)/of;
    int bars = ((in*numbars)/of);
    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    int temp = numbars;
    while(temp!=0){
        cout<<"\b";
        temp--;
    }
    cout<<"[";
    temp = bars;
    while(temp!=0){
        cout<<"=";
        temp--;
    }
    int spaces = numbars-bars;
    if(bars<numbars){
        cout<<">";
        spaces--;
    }
    while(spaces!=0){
        cout<<" ";
        spaces--;
    }
    cout<<"]";
    cout<<fixed<<setfill(' ')<<setw(7)<<setprecision(2)<<percent<<"%"<<"  "<<in<<"/"<<of;
    if(percent == 100){
        cout<<endl;
    }
}

void progress(int in,int of,int numbars,int style){
    float percent = (float)(in*100)/of;
    int bars = ((in*numbars)/of);
    cout<<"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    char s,e,b,p;
    switch(style){
    case 1:
        s = '[';
        e = ']';
        b = '=';
        p = '>';
    break;
    case 2:
        s = '{';
        e = '}';
        b = '|';
        p = '~';
    break;
    case 3:
        s = '|';
        e = '|';
        b = '#';
        p = '+';
    break;
    case 4:
        s = '(';
        e = ')';
        b = '~';
        p = '-';
    break;
    case 5:
        s = '<';
        e = '>';
        b = '-';
        p = '~';
    break;
    default :
        s = '[';
        e = ']';
        b = '=';
        p = '>';
    }
    int temp = numbars;
    while(temp!=0){
        cout<<"\b";
        temp--;
    }
    cout<<s;
    temp = bars;
    while(temp!=0){
        cout<<b;
        temp--;
    }
    int spaces = numbars-bars;
    if(bars<numbars){
        cout<<p;
        spaces--;
    }
    while(spaces!=0){
        cout<<" ";
        spaces--;
    }
    cout<<e;
    cout<<fixed<<setfill(' ')<<setw(7)<<setprecision(2)<<percent<<"%"<<"  "<<in<<"/"<<of;
    if(percent == 100){
        cout<<endl;
    }
}

void progress_range(int start,int of,int in){
    int diff,newin;
    if(start<of){
        if(start>=0){
            diff = of-start;
            newin = in-start;
        }
        else
            if(of>=0){
                diff = (-1*start)+of+1;
                if(in<0){
                    newin = start+(-1*in);
                    newin = -1*newin;
                }else{
                    newin = (-1*start)+in+1;
                }
            }
            else{
                diff = start+of+1;
                diff = diff*-1;
                newin = (start*-1)+in+1;
            }
    }else{
        if(start<0){
            diff = (-1*start)+of;
            diff = diff*-1;
            newin = (-1*in)-(-1*start);
        }
        else
            if(of<0){
                diff = start+(-1*of)+1;
                newin = -1*((-1*start)+in)+1;
            }
            else{
                diff = start-of;
                newin = start-in;
            }
    }
    progress(newin,diff);
}

void progress_range(int start,int of,int in,int numbars){
    int diff,newin;
    if(start<of){
        if(start>=0){
            diff = of-start;
            newin = in-start;
        }
        else
            if(of>=0){
                diff = (-1*start)+of+1;
                if(in<0){
                    newin = start+(-1*in);
                    newin = -1*newin;
                }else{
                    newin = (-1*start)+in+1;
                }
            }
            else{
                diff = start+of+1;
                diff = diff*-1;
                newin = (start*-1)+in+1;
            }
    }else{
        if(start<0){
            diff = (-1*start)+of;
            diff = diff*-1;
            newin = (-1*in)-(-1*start);
        }
        else
            if(of<0){
                diff = start+(-1*of)+1;
                newin = -1*((-1*start)+in)+1;
            }
            else{
                diff = start-of;
                newin = start-in;
            }
    }
    progress(newin,diff,numbars);
}

void progress_range(int start,int of,int in,int numbars,int style){
    int diff,newin;
    if(start<of){
        if(start>=0){
            diff = of-start;
            newin = in-start;
        }
        else
            if(of>=0){
                diff = (-1*start)+of+1;
                if(in<0){
                    newin = start+(-1*in);
                    newin = -1*newin;
                }else{
                    newin = (-1*start)+in+1;
                }
            }
            else{
                diff = start+of+1;
                diff = diff*-1;
                newin = (start*-1)+in+1;
            }
    }else{
        if(start<0){
            diff = (-1*start)+of;
            diff = diff*-1;
            newin = (-1*in)-(-1*start);
        }
        else
            if(of<0){
                diff = start+(-1*of)+1;
                newin = -1*((-1*start)+in)+1;
            }
            else{
                diff = start-of;
                newin = start-in;
            }
    }
    progress(newin,diff,numbars,style);
}
