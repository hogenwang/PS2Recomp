#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEB90
// Address: 0x1feb90 - 0x1fec10
void sub_001FEB90_0x1feb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB90_0x1feb90");
#endif

    switch (ctx->pc) {
        case 0x1febb0u: goto label_1febb0;
        case 0x1febc0u: goto label_1febc0;
        case 0x1febd0u: goto label_1febd0;
        case 0x1febf8u: goto label_1febf8;
        default: break;
    }

    ctx->pc = 0x1feb90u;

    // 0x1feb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feb94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1feb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1feb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1feb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1feb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1feb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1feba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1feba4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feba8: 0xc07f67c  jal         func_1FD9F0
    ctx->pc = 0x1FEBA8u;
    SET_GPR_U32(ctx, 31, 0x1FEBB0u);
    ctx->pc = 0x1FEBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBA8u;
            // 0x1febac: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9F0u;
    if (runtime->hasFunction(0x1FD9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBB0u; }
        if (ctx->pc != 0x1FEBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD9F0_0x1fd9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBB0u; }
        if (ctx->pc != 0x1FEBB0u) { return; }
    }
    ctx->pc = 0x1FEBB0u;
label_1febb0:
    // 0x1febb0: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FEBB0u;
    {
        const bool branch_taken_0x1febb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1FEBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBB0u;
            // 0x1febb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febb0) {
            ctx->pc = 0x1FEBF8u;
            goto label_1febf8;
        }
    }
    ctx->pc = 0x1FEBB8u;
    // 0x1febb8: 0xc07ad5c  jal         func_1EB570
    ctx->pc = 0x1FEBB8u;
    SET_GPR_U32(ctx, 31, 0x1FEBC0u);
    ctx->pc = 0x1FEBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBB8u;
            // 0x1febbc: 0x8e052130  lw          $a1, 0x2130($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EB570u;
    if (runtime->hasFunction(0x1EB570u)) {
        auto targetFn = runtime->lookupFunction(0x1EB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBC0u; }
        if (ctx->pc != 0x1FEBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB570_0x1eb570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBC0u; }
        if (ctx->pc != 0x1FEBC0u) { return; }
    }
    ctx->pc = 0x1FEBC0u;
label_1febc0:
    // 0x1febc0: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FEBC0u;
    {
        const bool branch_taken_0x1febc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1FEBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBC0u;
            // 0x1febc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc0) {
            ctx->pc = 0x1FEBF8u;
            goto label_1febf8;
        }
    }
    ctx->pc = 0x1FEBC8u;
    // 0x1febc8: 0xc07fb04  jal         func_1FEC10
    ctx->pc = 0x1FEBC8u;
    SET_GPR_U32(ctx, 31, 0x1FEBD0u);
    ctx->pc = 0x1FEC10u;
    if (runtime->hasFunction(0x1FEC10u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBD0u; }
        if (ctx->pc != 0x1FEBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEC10_0x1fec10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBD0u; }
        if (ctx->pc != 0x1FEBD0u) { return; }
    }
    ctx->pc = 0x1FEBD0u;
label_1febd0:
    // 0x1febd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEBD0u;
    {
        const bool branch_taken_0x1febd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBD0u;
            // 0x1febd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd0) {
            ctx->pc = 0x1FEBF8u;
            goto label_1febf8;
        }
    }
    ctx->pc = 0x1FEBD8u;
    // 0x1febd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1febd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1febdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1febdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1febe0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1febe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1febe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1febe8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1febe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1febec: 0x807f676  j           func_1FD9D8
    ctx->pc = 0x1FEBECu;
    ctx->pc = 0x1FEBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBECu;
            // 0x1febf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1FD9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1FEBF4u;
    // 0x1febf4: 0x0  nop
    ctx->pc = 0x1febf4u;
    // NOP
label_1febf8:
    // 0x1febf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1febf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1febfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1febfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fec00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC04u;
            // 0x1fec08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEC0Cu;
    // 0x1fec0c: 0x0  nop
    ctx->pc = 0x1fec0cu;
    // NOP
    ctx->pc = 0x1fec10u;
}
