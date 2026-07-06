#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9CF0
// Address: 0x1e9cf0 - 0x1e9d60
void sub_001E9CF0_0x1e9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9CF0_0x1e9cf0");
#endif

    switch (ctx->pc) {
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d48u: goto label_1e9d48;
        default: break;
    }

    ctx->pc = 0x1e9cf0u;

    // 0x1e9cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9cf4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e9cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e9cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e9d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e9d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e9d08: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1E9D08u;
    SET_GPR_U32(ctx, 31, 0x1E9D10u);
    ctx->pc = 0x1E9D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D08u;
            // 0x1e9d0c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (runtime->hasFunction(0x1FD9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D10u; }
        if (ctx->pc != 0x1E9D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD9F0_0x1fd9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D10u; }
        if (ctx->pc != 0x1E9D10u) { return; }
    }
    ctx->pc = 0x1E9D10u;
label_1e9d10:
    // 0x1e9d10: 0x1051000d  beq         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9D10u;
    {
        const bool branch_taken_0x1e9d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1E9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D10u;
            // 0x1e9d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d10) {
            ctx->pc = 0x1E9D48u;
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9D18u;
    // 0x1e9d18: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1E9D18u;
    SET_GPR_U32(ctx, 31, 0x1E9D20u);
    ctx->pc = 0x1E9D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D18u;
            // 0x1e9d1c: 0x8e052174  lw          $a1, 0x2174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8564)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (runtime->hasFunction(0x1EB570u)) {
        auto targetFn = runtime->lookupFunction(0x1EB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D20u; }
        if (ctx->pc != 0x1E9D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB570_0x1eb570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9D20u; }
        if (ctx->pc != 0x1E9D20u) { return; }
    }
    ctx->pc = 0x1E9D20u;
label_1e9d20:
    // 0x1e9d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e9d28: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9D28u;
    {
        const bool branch_taken_0x1e9d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D28u;
            // 0x1e9d2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d28) {
            ctx->pc = 0x1E9D48u;
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9D30u;
    // 0x1e9d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9d38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d3c: 0x807f676  j           func_1FD9D8
    ctx->pc = 0x1E9D3Cu;
    ctx->pc = 0x1E9D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D3Cu;
            // 0x1e9d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1FD9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E9D44u;
    // 0x1e9d44: 0x0  nop
    ctx->pc = 0x1e9d44u;
    // NOP
label_1e9d48:
    // 0x1e9d48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e9d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9d4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9d4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9D54u;
            // 0x1e9d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9D5Cu;
    // 0x1e9d5c: 0x0  nop
    ctx->pc = 0x1e9d5cu;
    // NOP
    ctx->pc = 0x1e9d60u;
}
