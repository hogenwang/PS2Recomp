#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F85D0
// Address: 0x2f85d0 - 0x2f8698
void sub_002F85D0_0x2f85d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F85D0_0x2f85d0");
#endif

    ctx->pc = 0x2f85d0u;

    // 0x2f85d0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2f85d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85d4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x2f85d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85d8: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x2f85d8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85dc: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x2f85dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85e0: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2f85e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x2f85e4: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F85E4u;
    {
        const bool branch_taken_0x2f85e4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2F85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85E4u;
        // 0x2f85e8: 0x120c02d  daddu       $t8, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85e4) {
            ctx->pc = 0x2F85F4u;
            goto label_2f85f4;
        }
    }
    ctx->pc = 0x2F85ECu;
    // 0x2f85ec: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2f85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2f85f0: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2f85f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_2f85f4:
    // 0x2f85f4: 0x2404016f  addiu       $a0, $zero, 0x16F
    ctx->pc = 0x2f85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
    // 0x2f85f8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x2f85f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f85fc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x2f85fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f8600: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x2f8600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f8604: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x2f8604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2f8608: 0x7187001a  div1        $zero, $t4, $a3
    ctx->pc = 0x2f8608u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 12); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2f860c: 0x185001a  div         $zero, $t4, $a1
    ctx->pc = 0x2f860cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f8610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f8614: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x2f8614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2f8618: 0x25830003  addiu       $v1, $t4, 0x3
    ctx->pc = 0x2f8618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x2f861c: 0x182180b  movn        $v1, $t4, $v0
    ctx->pc = 0x2f861cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 12));
    // 0x2f8620: 0x2406016d  addiu       $a2, $zero, 0x16D
    ctx->pc = 0x2f8620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
    // 0x2f8624: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2f8624u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2f8628: 0x3c09fff5  lui         $t1, 0xFFF5
    ctx->pc = 0x2f8628u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65525 << 16));
    // 0x2f862c: 0x35290575  ori         $t1, $t1, 0x575
    ctx->pc = 0x2f862cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1397);
    // 0x2f8630: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8630u;
    {
        const bool branch_taken_0x2f8630 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8630) {
            ctx->pc = 0x2F8634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8630u;
            // 0x2f8634: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8638u;
            goto label_2f8638;
        }
    }
    ctx->pc = 0x2F8638u;
label_2f8638:
    // 0x2f8638: 0x70005012  mflo1       $t2
    ctx->pc = 0x2f8638u;
    SET_GPR_U64(ctx, 10, ctx->lo1);
    // 0x2f863c: 0x5812  mflo        $t3
    ctx->pc = 0x2f863cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x2f8640: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x2f8640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f8644: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x2f8644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x2f8648: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x2f8648u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f864c: 0x2012  mflo        $a0
    ctx->pc = 0x2f864cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2f8650: 0x1863018  mult        $a2, $t4, $a2
    ctx->pc = 0x2f8650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f8654: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2f8654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2f8658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f865c: 0xc3182d  daddu       $v1, $a2, $v1
    ctx->pc = 0x2f865cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2f8660: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x2f8660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x2f8664: 0x31078  dsll        $v0, $v1, 1
    ctx->pc = 0x2f8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 1);
    // 0x2f8668: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2f8668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2f866c: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x2f866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x2f8670: 0x1c2102d  daddu       $v0, $t6, $v0
    ctx->pc = 0x2f8670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2f8674: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x2f8674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x2f8678: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2f8678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2f867c: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x2f867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x2f8680: 0x1e3182d  daddu       $v1, $t7, $v1
    ctx->pc = 0x2f8680u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2f8684: 0x31138  dsll        $v0, $v1, 4
    ctx->pc = 0x2f8684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 4);
    // 0x2f8688: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2f8688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2f868c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x2f868cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x2f8690: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8690u;
        // 0x2f8694: 0x302102d  daddu       $v0, $t8, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8698u;
}
