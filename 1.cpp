int main( void ) {
	EnumWindows( []( HWND hwnd, LPARAM lParam ) -> BOOL {
		WCHAR buffer[ 1024 ];
		if ( IsWindowVisible( hwnd ) ) {
			if ( GetWindowText( hwnd, buffer, ARRAYSIZE( buffer ) ) ) {
				printf( "%ws\n", buffer );
			}
		}
		return TRUE;
	}, NULL );
	return 0;
}
