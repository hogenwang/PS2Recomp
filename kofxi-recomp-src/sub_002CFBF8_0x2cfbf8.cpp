#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CFBF8
// Address: 0x2cfbf8 - 0x2cfc68
void sub_002CFBF8_0x2cfbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFBF8_0x2cfbf8");
#endif

    switch (ctx->pc) {
        case 0x2cfc30u: goto label_2cfc30;
        case 0x2cfc48u: goto label_2cfc48;
        default: break;
    }

    ctx->pc = 0x2cfbf8u;

    // 0x2cfbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cfbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cfbfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cfbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cfc00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cfc00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cfc08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cfc08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cfc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cfc10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2cfc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2cfc14: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2cfc14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cfc18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cfc1c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2cfc1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2cfc20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFC20u;
    {
        const bool branch_taken_0x2cfc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC20u;
            // 0x2cfc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfc20) {
            ctx->pc = 0x2CFC38u;
            goto label_2cfc38;
        }
    }
    ctx->pc = 0x2CFC28u;
    // 0x2cfc28: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2CFC28u;
    SET_GPR_U32(ctx, 31, 0x2CFC30u);
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC30u; }
        if (ctx->pc != 0x2CFC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC30u; }
        if (ctx->pc != 0x2CFC30u) { return; }
    }
    ctx->pc = 0x2CFC30u;
label_2cfc30:
    // 0x2cfc30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFC30u;
    {
        const bool branch_taken_0x2cfc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfc30) {
            ctx->pc = 0x2CFC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC30u;
            // 0x2cfc34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC54u;
            goto label_2cfc54;
        }
    }
    ctx->pc = 0x2CFC38u;
label_2cfc38:
    // 0x2cfc38: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2cfc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cfc3c: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x2cfc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2cfc40: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2CFC40u;
    SET_GPR_U32(ctx, 31, 0x2CFC48u);
    ctx->pc = 0x2CFC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC40u;
            // 0x2cfc44: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC48u; }
        if (ctx->pc != 0x2CFC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CFC48u; }
        if (ctx->pc != 0x2CFC48u) { return; }
    }
    ctx->pc = 0x2CFC48u;
label_2cfc48:
    // 0x2cfc48: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2cfc48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2cfc4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cfc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfc50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfc54:
    // 0x2cfc54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfc58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfc58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfc5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2cfc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfc60: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CFC60u;
            // 0x2cfc64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CFC68u;
    ctx->pc = 0x2cfc68u;
}
