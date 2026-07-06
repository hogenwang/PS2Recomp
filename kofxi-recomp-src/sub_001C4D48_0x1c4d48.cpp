#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4D48
// Address: 0x1c4d48 - 0x1c4dd8
void sub_001C4D48_0x1c4d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4D48_0x1c4d48");
#endif

    switch (ctx->pc) {
        case 0x1c4d64u: goto label_1c4d64;
        case 0x1c4d80u: goto label_1c4d80;
        case 0x1c4d88u: goto label_1c4d88;
        case 0x1c4da4u: goto label_1c4da4;
        default: break;
    }

    ctx->pc = 0x1c4d48u;

    // 0x1c4d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4d4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c4d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D50u;
    {
        const bool branch_taken_0x1c4d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D50u;
            // 0x1c4d54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d50) {
            ctx->pc = 0x1C4D70u;
            goto label_1c4d70;
        }
    }
    ctx->pc = 0x1C4D58u;
    // 0x1c4d58: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4d5c: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4D5Cu;
    SET_GPR_U32(ctx, 31, 0x1C4D64u);
    ctx->pc = 0x1C4D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D5Cu;
            // 0x1c4d60: 0x24a5a380  addiu       $a1, $a1, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D64u; }
        if (ctx->pc != 0x1C4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D64u; }
        if (ctx->pc != 0x1C4D64u) { return; }
    }
    ctx->pc = 0x1C4D64u;
label_1c4d64:
    // 0x1c4d64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4D64u;
    {
        const bool branch_taken_0x1c4d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D64u;
            // 0x1c4d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d64) {
            ctx->pc = 0x1C4D74u;
            goto label_1c4d74;
        }
    }
    ctx->pc = 0x1C4D6Cu;
    // 0x1c4d6c: 0x0  nop
    ctx->pc = 0x1c4d6cu;
    // NOP
label_1c4d70:
    // 0x1c4d70: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c4d74:
    // 0x1c4d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D78u;
            // 0x1c4d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4D80u;
label_1c4d80:
    // 0x1c4d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D80u;
            // 0x1c4d84: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4D88u;
label_1c4d88:
    // 0x1c4d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4d8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c4d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d90: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4D90u;
    {
        const bool branch_taken_0x1c4d90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D90u;
            // 0x1c4d94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d90) {
            ctx->pc = 0x1C4DB0u;
            goto label_1c4db0;
        }
    }
    ctx->pc = 0x1C4D98u;
    // 0x1c4d98: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4d9c: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4DA4u);
    ctx->pc = 0x1C4DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D9Cu;
            // 0x1c4da0: 0x24a5a380  addiu       $a1, $a1, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (runtime->hasFunction(0x1C41D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C41D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA4u; }
        if (ctx->pc != 0x1C4DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C41D8_0x1c41d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA4u; }
        if (ctx->pc != 0x1C4DA4u) { return; }
    }
    ctx->pc = 0x1C4DA4u;
label_1c4da4:
    // 0x1c4da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4DA4u;
    {
        const bool branch_taken_0x1c4da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DA4u;
            // 0x1c4da8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4da4) {
            ctx->pc = 0x1C4DC8u;
            goto label_1c4dc8;
        }
    }
    ctx->pc = 0x1C4DACu;
    // 0x1c4dac: 0x0  nop
    ctx->pc = 0x1c4dacu;
    // NOP
label_1c4db0:
    // 0x1c4db0: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c4db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4db8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DB8u;
            // 0x1c4dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4DC8u;
            goto label_1c4dc8;
        }
    }
    ctx->pc = 0x1C4DC0u;
    // 0x1c4dc0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1c4dc4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c4dc8:
    // 0x1c4dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DCCu;
            // 0x1c4dd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4DD4u;
    // 0x1c4dd4: 0x0  nop
    ctx->pc = 0x1c4dd4u;
    // NOP
    ctx->pc = 0x1c4dd8u;
}
