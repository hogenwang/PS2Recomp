#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232A90
// Address: 0x232a90 - 0x232b00
void sub_00232A90_0x232a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232A90_0x232a90");
#endif

    switch (ctx->pc) {
        case 0x232adcu: goto label_232adc;
        default: break;
    }

    ctx->pc = 0x232a90u;

    // 0x232a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232a94: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x232a94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x232a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232a9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232A9Cu;
    {
        const bool branch_taken_0x232a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A9Cu;
            // 0x232aa0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a9c) {
            ctx->pc = 0x232AACu;
            goto label_232aac;
        }
    }
    ctx->pc = 0x232AA4u;
    // 0x232aa4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x232AA4u;
    {
        const bool branch_taken_0x232aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AA4u;
            // 0x232aa8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232aa4) {
            ctx->pc = 0x232AECu;
            goto label_232aec;
        }
    }
    ctx->pc = 0x232AACu;
label_232aac:
    // 0x232aac: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x232aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x232ab0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232ab4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x232ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x232ab8: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x232ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
    // 0x232abc: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x232abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232ac0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x232ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232ac4: 0x16040009  bne         $s0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x232AC4u;
    {
        const bool branch_taken_0x232ac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x232AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AC4u;
            // 0x232ac8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ac4) {
            ctx->pc = 0x232AECu;
            goto label_232aec;
        }
    }
    ctx->pc = 0x232ACCu;
    // 0x232acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ad4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x232AD4u;
    SET_GPR_U32(ctx, 31, 0x232ADCu);
    ctx->pc = 0x232AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232AD4u;
            // 0x232ad8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232ADCu; }
        if (ctx->pc != 0x232ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232ADCu; }
        if (ctx->pc != 0x232ADCu) { return; }
    }
    ctx->pc = 0x232ADCu;
label_232adc:
    // 0x232adc: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x232adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x232ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x232ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ae4: 0x8c83fa28  lw          $v1, -0x5D8($a0)
    ctx->pc = 0x232ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965800)));
    // 0x232ae8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x232ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_232aec:
    // 0x232aec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232af4: 0x3e00008  jr          $ra
    ctx->pc = 0x232AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232AF4u;
            // 0x232af8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232AFCu;
    // 0x232afc: 0x0  nop
    ctx->pc = 0x232afcu;
    // NOP
    ctx->pc = 0x232b00u;
}
