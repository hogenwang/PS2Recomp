#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302BA0
// Address: 0x302ba0 - 0x302bf0
void sub_00302BA0_0x302ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302BA0_0x302ba0");
#endif

    switch (ctx->pc) {
        case 0x302be4u: goto label_302be4;
        default: break;
    }

    ctx->pc = 0x302ba0u;

    // 0x302ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302ba4: 0x24c2fff0  addiu       $v0, $a2, -0x10
    ctx->pc = 0x302ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x302ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302bac: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x302bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x302bb0: 0x94880006  lhu         $t0, 0x6($a0)
    ctx->pc = 0x302bb0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x302bb4: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x302bb4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x302bb8: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x302bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x302bbc: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x302bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x302bc0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302bc4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x302bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302bc8: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x302bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x302bcc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x302bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x302bd0: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302bd0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302bd4: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x302bd4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x302bd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302bdc: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302BDCu;
    SET_GPR_U32(ctx, 31, 0x302BE4u);
    ctx->pc = 0x302BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302BDCu;
            // 0x302be0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302BE4u; }
        if (ctx->pc != 0x302BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302BE4u; }
        if (ctx->pc != 0x302BE4u) { return; }
    }
    ctx->pc = 0x302BE4u;
label_302be4:
    // 0x302be4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302be8: 0x3e00008  jr          $ra
    ctx->pc = 0x302BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302BE8u;
            // 0x302bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302BF0u;
    ctx->pc = 0x302bf0u;
}
