#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002289A8
// Address: 0x2289a8 - 0x228a70
void sub_002289A8_0x2289a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002289A8_0x2289a8");
#endif

    switch (ctx->pc) {
        case 0x2289b8u: goto label_2289b8;
        case 0x2289e0u: goto label_2289e0;
        default: break;
    }

    ctx->pc = 0x2289a8u;

    // 0x2289a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2289a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2289ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2289acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2289b0: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2289B0u;
    SET_GPR_U32(ctx, 31, 0x2289B8u);
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2289B8u; }
        if (ctx->pc != 0x2289B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2289B8u; }
        if (ctx->pc != 0x2289B8u) { return; }
    }
    ctx->pc = 0x2289B8u;
label_2289b8:
    // 0x2289b8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2289b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2289bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2289bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2289c0: 0x2464a711  addiu       $a0, $v1, -0x58EF
    ctx->pc = 0x2289c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944529));
    // 0x2289c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2289c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2289c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2289cc: 0x2409002e  addiu       $t1, $zero, 0x2E
    ctx->pc = 0x2289ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2289d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2289d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2289d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2289d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2289d8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2289d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2289dc: 0x0  nop
    ctx->pc = 0x2289dcu;
    // NOP
label_2289e0:
    // 0x2289e0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2289e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2289e4: 0x50a70001  beql        $a1, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x2289E4u;
    {
        const bool branch_taken_0x2289e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x2289e4) {
            ctx->pc = 0x2289E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2289E4u;
            // 0x2289e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2289ECu;
            goto label_2289ec;
        }
    }
    ctx->pc = 0x2289ECu;
label_2289ec:
    // 0x2289ec: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2289ecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2289f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2289f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2289f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2289f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2289f8: 0x1812  mflo        $v1
    ctx->pc = 0x2289f8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2289fc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2289fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x228a00: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x228a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x228a04: 0x50a70001  beql        $a1, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x228A04u;
    {
        const bool branch_taken_0x228a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x228a04) {
            ctx->pc = 0x228A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228A04u;
            // 0x228a08: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x228A0Cu;
            goto label_228a0c;
        }
    }
    ctx->pc = 0x228A0Cu;
label_228a0c:
    // 0x228a0c: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x228A0Cu;
    {
        const bool branch_taken_0x228a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228a0c) {
            ctx->pc = 0x228A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228A0Cu;
            // 0x228a10: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228A50u;
            goto label_228a50;
        }
    }
    ctx->pc = 0x228A14u;
    // 0x228a14: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x228a14u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x228a18: 0x50a70001  beql        $a1, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x228A18u;
    {
        const bool branch_taken_0x228a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x228a18) {
            ctx->pc = 0x228A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228A18u;
            // 0x228a1c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x228A20u;
            goto label_228a20;
        }
    }
    ctx->pc = 0x228A20u;
label_228a20:
    // 0x228a20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x228a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x228a24: 0x1010  mfhi        $v0
    ctx->pc = 0x228a24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x228a28: 0x1812  mflo        $v1
    ctx->pc = 0x228a28u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x228a2c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x228a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x228a30: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x228a30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x228a34: 0x50a70001  beql        $a1, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x228A34u;
    {
        const bool branch_taken_0x228a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x228a34) {
            ctx->pc = 0x228A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228A34u;
            // 0x228a38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x228A3Cu;
            goto label_228a3c;
        }
    }
    ctx->pc = 0x228A3Cu;
label_228a3c:
    // 0x228a3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x228A3Cu;
    {
        const bool branch_taken_0x228a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x228A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A3Cu;
            // 0x228a40: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a3c) {
            ctx->pc = 0x228A4Cu;
            goto label_228a4c;
        }
    }
    ctx->pc = 0x228A44u;
    // 0x228a44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x228a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x228a48: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x228a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_228a4c:
    // 0x228a4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x228a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_228a50:
    // 0x228a50: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x228a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x228a54: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x228a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x228a58: 0x1d00ffe1  bgtz        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x228A58u;
    {
        const bool branch_taken_0x228a58 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x228A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A58u;
            // 0x228a5c: 0xa0890000  sb          $t1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228a58) {
            ctx->pc = 0x2289E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2289e0;
        }
    }
    ctx->pc = 0x228A60u;
    // 0x228a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a64: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x228a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x228a68: 0x3e00008  jr          $ra
    ctx->pc = 0x228A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228A68u;
            // 0x228a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228A70u;
    ctx->pc = 0x228a70u;
}
