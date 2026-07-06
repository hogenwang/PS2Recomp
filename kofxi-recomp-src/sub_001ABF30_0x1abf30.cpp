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

// Function: sub_001ABF30
// Address: 0x1abf30 - 0x1ac038
void sub_001ABF30_0x1abf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABF30_0x1abf30");
#endif

    ctx->pc = 0x1abf30u;

    // 0x1abf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abf34: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1abf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1abf3c: 0x27050048  addiu       $a1, $t8, 0x48
    ctx->pc = 0x1abf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 72));
    // 0x1abf40: 0x8cae0008  lw          $t6, 0x8($a1)
    ctx->pc = 0x1abf40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1abf44: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x1abf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1abf48: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABF48u;
    {
        const bool branch_taken_0x1abf48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abf48) {
            ctx->pc = 0x1ABF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF48u;
            // 0x1abf4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF50u;
            goto label_1abf50;
        }
    }
    ctx->pc = 0x1ABF50u;
label_1abf50:
    // 0x1abf50: 0x8caf0018  lw          $t7, 0x18($a1)
    ctx->pc = 0x1abf50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1abf54: 0xce001a  div         $zero, $a2, $t6
    ctx->pc = 0x1abf54u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abf58: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x1abf58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1abf5c: 0x8ca90010  lw          $t1, 0x10($a1)
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1abf60: 0x1e81023  subu        $v0, $t7, $t0
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1abf64: 0x8ca70028  lw          $a3, 0x28($a1)
    ctx->pc = 0x1abf64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1abf68: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1abf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1abf6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1abf70: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1abf74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1abf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1abf78: 0x8cac0024  lw          $t4, 0x24($a1)
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1abf7c: 0xec382a  slt         $a3, $a3, $t4
    ctx->pc = 0x1abf7cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1abf80: 0x3012  mflo        $a2
    ctx->pc = 0x1abf80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1abf84: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x1abf84u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abf88: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1abf88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf8c: 0x1012  mflo        $v0
    ctx->pc = 0x1abf8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1abf90: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x1abf90u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abf94: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1abf94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf98: 0x6812  mflo        $t5
    ctx->pc = 0x1abf98u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x1abf9c: 0x2810  mfhi        $a1
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1abfa0: 0x1691818  mult        $v1, $t3, $t1
    ctx->pc = 0x1abfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1abfa4: 0x1252823  subu        $a1, $t1, $a1
    ctx->pc = 0x1abfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1abfa8: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x1abfa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1abfac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1abfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1abfb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABFB0u;
    {
        const bool branch_taken_0x1abfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFB0u;
        // 0x1abfb4: 0x1034021  addu        $t0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfb0) {
            ctx->pc = 0x1ABFC4u;
            goto label_1abfc4;
        }
    }
    ctx->pc = 0x1ABFB8u;
    // 0x1abfb8: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x1abfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1abfbc: 0x4f102a  slt         $v0, $v0, $t7
    ctx->pc = 0x1abfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1abfc0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x1abfc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_1abfc4:
    // 0x1abfc4: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x1abfc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1abfc8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1abfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1abfcc: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABFCCu;
    {
        const bool branch_taken_0x1abfcc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfcc) {
            ctx->pc = 0x1ABFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABFCCu;
            // 0x1abfd0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABFD4u;
            goto label_1abfd4;
        }
    }
    ctx->pc = 0x1ABFD4u;
label_1abfd4:
    // 0x1abfd4: 0x4c6021  addu        $t4, $v0, $t4
    ctx->pc = 0x1abfd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1abfd8: 0x189001a  div         $zero, $t4, $t1
    ctx->pc = 0x1abfd8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1abfdc: 0x2812  mflo        $a1
    ctx->pc = 0x1abfdcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1abfe0: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x1abfe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1abfe4: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x1abfe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x1abfe8: 0x1aa182a  slt         $v1, $t5, $t2
    ctx->pc = 0x1abfe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1abfec: 0x1a3500b  movn        $t2, $t5, $v1
    ctx->pc = 0x1abfecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 13));
    // 0x1abff0: 0x16a102a  slt         $v0, $t3, $t2
    ctx->pc = 0x1abff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1abff4: 0x15c60006  bne         $t6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABFF4u;
    {
        const bool branch_taken_0x1abff4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 6));
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0x162500b  movn        $t2, $t3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff4) {
            ctx->pc = 0x1AC010u;
            goto label_1ac010;
        }
    }
    ctx->pc = 0x1ABFFCu;
    // 0x1abffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac000: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac004: 0x806afa0  j           func_1ABE80
    ctx->pc = 0x1AC004u;
    ctx->pc = 0x1AC008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC004u;
    // 0x1ac008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE80u, 0x1AC004u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AC00Cu;
    // 0x1ac00c: 0x0  nop
    ctx->pc = 0x1ac00cu;
    // NOP
label_1ac010:
    // 0x1ac010: 0x8f0200e8  lw          $v0, 0xE8($t8)
    ctx->pc = 0x1ac010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 232)));
    // 0x1ac014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC028u;
            goto label_1ac028;
        }
    }
    ctx->pc = 0x1AC01Cu;
    // 0x1ac01c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1ac01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac020: 0x806afb6  j           func_1ABED8
    ctx->pc = 0x1AC020u;
    ctx->pc = 0x1AC024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC020u;
    // 0x1ac024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABED8u, 0x1AC020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AC028u;
label_1ac028:
    // 0x1ac028: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1ac028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac02c: 0x806af8c  j           func_1ABE30
    ctx->pc = 0x1AC02Cu;
    ctx->pc = 0x1AC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC02Cu;
    // 0x1ac030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABE30u, 0x1AC02Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1AC034u;
    // 0x1ac034: 0x0  nop
    ctx->pc = 0x1ac034u;
    // NOP
    if (ctx->pc == 0x1ac034u) { ctx->pc = 0x1ac038u; }
}
