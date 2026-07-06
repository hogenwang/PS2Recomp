#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8CD0
// Address: 0x2a8cd0 - 0x2a8d68
void sub_002A8CD0_0x2a8cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8CD0_0x2a8cd0");
#endif

    switch (ctx->pc) {
        case 0x2a8d00u: goto label_2a8d00;
        case 0x2a8d1cu: goto label_2a8d1c;
        case 0x2a8d30u: goto label_2a8d30;
        case 0x2a8d44u: goto label_2a8d44;
        case 0x2a8d58u: goto label_2a8d58;
        default: break;
    }

    ctx->pc = 0x2a8cd0u;

    // 0x2a8cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a8cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a8cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cdc: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A8CDCu;
    {
        const bool branch_taken_0x2a8cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CDCu;
            // 0x2a8ce0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8cdc) {
            ctx->pc = 0x2A8D58u;
            goto label_2a8d58;
        }
    }
    ctx->pc = 0x2A8CE4u;
    // 0x2a8ce4: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2a8ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2a8ce8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2a8cec: 0x24e7ca98  addiu       $a3, $a3, -0x3568
    ctx->pc = 0x2a8cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953624));
    // 0x2a8cf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a8cf4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2a8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a8cf8: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2A8CF8u;
    SET_GPR_U32(ctx, 31, 0x2A8D00u);
    ctx->pc = 0x2A8CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8CF8u;
            // 0x2a8cfc: 0x240800db  addiu       $t0, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (runtime->hasFunction(0x2A2D18u)) {
        auto targetFn = runtime->lookupFunction(0x2A2D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D00u; }
        if (ctx->pc != 0x2A8D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2D18_0x2a2d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D00u; }
        if (ctx->pc != 0x2A8D00u) { return; }
    }
    ctx->pc = 0x2A8D00u;
label_2a8d00:
    // 0x2a8d00: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8D00u;
    {
        const bool branch_taken_0x2a8d00 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2A8D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D00u;
            // 0x2a8d04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8d00) {
            ctx->pc = 0x2A8D5Cu;
            goto label_2a8d5c;
        }
    }
    ctx->pc = 0x2A8D08u;
    // 0x2a8d08: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a8d0c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8D0Cu;
    {
        const bool branch_taken_0x2a8d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8d0c) {
            ctx->pc = 0x2A8D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D0Cu;
            // 0x2a8d10: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D20u;
            goto label_2a8d20;
        }
    }
    ctx->pc = 0x2A8D14u;
    // 0x2a8d14: 0xc0a80c2  jal         func_2A0308
    ctx->pc = 0x2A8D14u;
    SET_GPR_U32(ctx, 31, 0x2A8D1Cu);
    ctx->pc = 0x2A0308u;
    if (runtime->hasFunction(0x2A0308u)) {
        auto targetFn = runtime->lookupFunction(0x2A0308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D1Cu; }
        if (ctx->pc != 0x2A8D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0308_0x2a0308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D1Cu; }
        if (ctx->pc != 0x2A8D1Cu) { return; }
    }
    ctx->pc = 0x2A8D1Cu;
label_2a8d1c:
    // 0x2a8d1c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a8d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a8d20:
    // 0x2a8d20: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8D20u;
    {
        const bool branch_taken_0x2a8d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8d20) {
            ctx->pc = 0x2A8D24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D20u;
            // 0x2a8d24: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D34u;
            goto label_2a8d34;
        }
    }
    ctx->pc = 0x2A8D28u;
    // 0x2a8d28: 0xc0a88d0  jal         func_2A2340
    ctx->pc = 0x2A8D28u;
    SET_GPR_U32(ctx, 31, 0x2A8D30u);
    ctx->pc = 0x2A2340u;
    if (runtime->hasFunction(0x2A2340u)) {
        auto targetFn = runtime->lookupFunction(0x2A2340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2340_0x2a2340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D30u; }
        if (ctx->pc != 0x2A8D30u) { return; }
    }
    ctx->pc = 0x2A8D30u;
label_2a8d30:
    // 0x2a8d30: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2a8d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a8d34:
    // 0x2a8d34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8D34u;
    {
        const bool branch_taken_0x2a8d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8d34) {
            ctx->pc = 0x2A8D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D34u;
            // 0x2a8d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8D48u;
            goto label_2a8d48;
        }
    }
    ctx->pc = 0x2A8D3Cu;
    // 0x2a8d3c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A8D44u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D44u; }
        if (ctx->pc != 0x2A8D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D44u; }
        if (ctx->pc != 0x2A8D44u) { return; }
    }
    ctx->pc = 0x2A8D44u;
label_2a8d44:
    // 0x2a8d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8d48:
    // 0x2a8d48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8d50: 0x80a8c0a  j           func_2A3028
    ctx->pc = 0x2A8D50u;
    ctx->pc = 0x2A8D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D50u;
            // 0x2a8d54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002A3028_0x2a3028(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A8D58u;
label_2a8d58:
    // 0x2a8d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a8d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a8d5c:
    // 0x2a8d5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a8d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8d60: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8D60u;
            // 0x2a8d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8D68u;
    ctx->pc = 0x2a8d68u;
}
