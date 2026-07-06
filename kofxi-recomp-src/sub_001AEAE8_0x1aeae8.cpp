#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEAE8
// Address: 0x1aeae8 - 0x1aebc0
void sub_001AEAE8_0x1aeae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEAE8_0x1aeae8");
#endif

    switch (ctx->pc) {
        case 0x1aeb30u: goto label_1aeb30;
        case 0x1aeb44u: goto label_1aeb44;
        case 0x1aeb58u: goto label_1aeb58;
        case 0x1aeb6cu: goto label_1aeb6c;
        default: break;
    }

    ctx->pc = 0x1aeae8u;

    // 0x1aeae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aeaec: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeaf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aeaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aeaf4: 0x2490f810  addiu       $s0, $a0, -0x7F0
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965264));
    // 0x1aeaf8: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1aeaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1aeafc: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1aeb00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aeb04: 0x24635310  addiu       $v1, $v1, 0x5310
    ctx->pc = 0x1aeb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21264));
    // 0x1aeb08: 0x24427388  addiu       $v0, $v0, 0x7388
    ctx->pc = 0x1aeb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29576));
    // 0x1aeb0c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aeb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aeb10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1aeb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1aeb14: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AEB14u;
    {
        const bool branch_taken_0x1aeb14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aeb14) {
            ctx->pc = 0x1AEB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB14u;
            // 0x1aeb18: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AEBACu;
            goto label_1aebac;
        }
    }
    ctx->pc = 0x1AEB1Cu;
    // 0x1aeb1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb24: 0x2484f818  addiu       $a0, $a0, -0x7E8
    ctx->pc = 0x1aeb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965272));
    // 0x1aeb28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEB28u;
    SET_GPR_U32(ctx, 31, 0x1AEB30u);
    ctx->pc = 0x1AEB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB28u;
            // 0x1aeb2c: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB30u; }
        if (ctx->pc != 0x1AEB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB30u; }
        if (ctx->pc != 0x1AEB30u) { return; }
    }
    ctx->pc = 0x1AEB30u;
label_1aeb30:
    // 0x1aeb30: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb34: 0x2484fc98  addiu       $a0, $a0, -0x368
    ctx->pc = 0x1aeb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966424));
    // 0x1aeb38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb3c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB44u);
    ctx->pc = 0x1AEB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB3Cu;
            // 0x1aeb40: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB44u; }
        if (ctx->pc != 0x1AEB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB44u; }
        if (ctx->pc != 0x1AEB44u) { return; }
    }
    ctx->pc = 0x1AEB44u;
label_1aeb44:
    // 0x1aeb44: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb48: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1aeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1aeb4c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1aeb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1aeb50: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEB50u;
    SET_GPR_U32(ctx, 31, 0x1AEB58u);
    ctx->pc = 0x1AEB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB50u;
            // 0x1aeb54: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB58u; }
        if (ctx->pc != 0x1AEB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB58u; }
        if (ctx->pc != 0x1AEB58u) { return; }
    }
    ctx->pc = 0x1AEB58u;
label_1aeb58:
    // 0x1aeb58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb5c: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x1aeb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x1aeb60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aeb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb64: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1AEB64u;
    SET_GPR_U32(ctx, 31, 0x1AEB6Cu);
    ctx->pc = 0x1AEB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEB64u;
            // 0x1aeb68: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB6Cu; }
        if (ctx->pc != 0x1AEB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEB6Cu; }
        if (ctx->pc != 0x1AEB6Cu) { return; }
    }
    ctx->pc = 0x1AEB6Cu;
label_1aeb6c:
    // 0x1aeb6c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1aeb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb74: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1aeb74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb78: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1aeb78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb7c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1aeb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1aeb84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aeb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aeb88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeb8c: 0xaca301cc  sw          $v1, 0x1CC($a1)
    ctx->pc = 0x1aeb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 460), GPR_U32(ctx, 3));
    // 0x1aeb90: 0xac8201d0  sw          $v0, 0x1D0($a0)
    ctx->pc = 0x1aeb90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 2));
    // 0x1aeb94: 0xacc001c0  sw          $zero, 0x1C0($a2)
    ctx->pc = 0x1aeb94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 448), GPR_U32(ctx, 0));
    // 0x1aeb98: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x1aeb98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x1aeb9c: 0xad0001c4  sw          $zero, 0x1C4($t0)
    ctx->pc = 0x1aeb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 452), GPR_U32(ctx, 0));
    // 0x1aeba0: 0xad2001c8  sw          $zero, 0x1C8($t1)
    ctx->pc = 0x1aeba0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 456), GPR_U32(ctx, 0));
    // 0x1aeba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1aeba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aeba8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1aeba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1aebac:
    // 0x1aebac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aebacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aebb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aebb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aebb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aebb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEBB8u;
            // 0x1aebbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEBC0u;
    ctx->pc = 0x1aebc0u;
}
