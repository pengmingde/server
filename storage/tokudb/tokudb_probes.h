/*
 * Generated by dtrace(1M).
 */

#ifndef	_TOKUDB_PROBES_H
#define	_TOKUDB_PROBES_H



#ifdef	__cplusplus
extern "C" {
#endif

#if _DTRACE_VERSION

#define	TOKUDB_CLOSE() \
	__dtrace_tokudb___close()
#define	TOKUDB_CLOSE_ENABLED() \
	__dtraceenabled_tokudb___close()
#define	TOKUDB_OPEN() \
	__dtrace_tokudb___open()
#define	TOKUDB_OPEN_ENABLED() \
	__dtraceenabled_tokudb___open()


extern void __dtrace_tokudb___close(void);
extern int __dtraceenabled_tokudb___close(void);
extern void __dtrace_tokudb___open(void);
extern int __dtraceenabled_tokudb___open(void);

#else

#define	TOKUDB_CLOSE()
#define	TOKUDB_CLOSE_ENABLED() (0)
#define	TOKUDB_OPEN()
#define	TOKUDB_OPEN_ENABLED() (0)

#endif


#ifdef	__cplusplus
}
#endif

#endif	/* _TOKUDB_PROBES_H */
