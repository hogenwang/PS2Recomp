#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154680
// Address: 0x154680 - 0x154700
void sub_00154680_0x154680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154680_0x154680");
#endif

    switch (ctx->pc) {
        case 0x154688u: goto label_154688;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546f0u: goto label_1546f0;
        default: break;
    }

    ctx->pc = 0x154680u;

    // 0x154680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154688:
    // 0x154688: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15468c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154690: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x154690u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x154694: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x154694u;
    {
        const bool branch_taken_0x154694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x154694) {
            ctx->pc = 0x1546B8u;
            goto label_1546b8;
        }
    }
    ctx->pc = 0x15469Cu;
    // 0x15469c: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x15469Cu;
    SET_GPR_U32(ctx, 31, 0x1546A4u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546A4u; }
        if (ctx->pc != 0x1546A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546A4u; }
        if (ctx->pc != 0x1546A4u) { return; }
    }
    ctx->pc = 0x1546A4u;
label_1546a4:
    // 0x1546a4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1546a8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1546a8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1546ac: 0x2010  mfhi        $a0
    ctx->pc = 0x1546acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1546b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546CCu;
            goto label_1546cc;
        }
    }
    ctx->pc = 0x1546B8u;
label_1546b8:
    // 0x1546b8: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x1546B8u;
    SET_GPR_U32(ctx, 31, 0x1546C0u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546C0u; }
        if (ctx->pc != 0x1546C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546C0u; }
        if (ctx->pc != 0x1546C0u) { return; }
    }
    ctx->pc = 0x1546C0u;
label_1546c0:
    // 0x1546c0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1546c4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1546c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1546c8: 0x2010  mfhi        $a0
    ctx->pc = 0x1546c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1546cc:
    // 0x1546cc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1546ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1546d0: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x1546d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x1546d4: 0x1082ffec  beq         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1546D4u;
    {
        const bool branch_taken_0x1546d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1546d4) {
            ctx->pc = 0x154688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154688;
        }
    }
    ctx->pc = 0x1546DCu;
    // 0x1546dc: 0xc0550fc  jal         func_1543F0
    ctx->pc = 0x1546DCu;
    SET_GPR_U32(ctx, 31, 0x1546E4u);
    ctx->pc = 0x1543F0u;
    if (runtime->hasFunction(0x1543F0u)) {
        auto targetFn = runtime->lookupFunction(0x1543F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546E4u; }
        if (ctx->pc != 0x1546E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543F0_0x1543f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546E4u; }
        if (ctx->pc != 0x1546E4u) { return; }
    }
    ctx->pc = 0x1546E4u;
label_1546e4:
    // 0x1546e4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1546e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1546e8: 0xc052d44  jal         func_14B510
    ctx->pc = 0x1546E8u;
    SET_GPR_U32(ctx, 31, 0x1546F0u);
    ctx->pc = 0x1546ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1546E8u;
            // 0x1546ec: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546F0u; }
        if (ctx->pc != 0x1546F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B510_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1546F0u; }
        if (ctx->pc != 0x1546F0u) { return; }
    }
    ctx->pc = 0x1546F0u;
label_1546f0:
    // 0x1546f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1546f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1546f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1546F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1546F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1546F4u;
            // 0x1546f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1546FCu;
    // 0x1546fc: 0x0  nop
    ctx->pc = 0x1546fcu;
    // NOP
    ctx->pc = 0x154700u;
}
